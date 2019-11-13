// MidiPlayer.java
// Demonstrates playing notes through Java's MIDI synthesizer interface
import javax.sound.midi.*;
import java.util.Scanner;

public class MidiPlayer
{
 // This is an array of the instruments we will use to play notes
 private static MidiChannel channels[] = null;

 //Method: playNoteWait
 //Description: Uses the MidiSynthesizer to play a single note and waits
 //             for the note to finish playing before returning to the caller.
 //Arguments:
 //  int note: note to play (0-127)
 //  int velocity: the velocity or volume of the note (0-127)
 //  int duration: length of the note in milliseconds
 //  MidiChannel: the instruments to play the note
 public static void playNoteWait(int note, int velocity, int duration)
 {
    //start playing the note using instrument in slot 0
    channels[0].noteOn(note, velocity);
    //wait out the duration
    try
    {
          Thread.sleep(duration);
    }
    catch (InterruptedException e)
    {
        System.out.println("Interrupt error.");
    }
    //stop playing the note
    channels[0].noteOff(note);
 }

 // Method: playNoteNoWait
 // Description:
 // Plays the note in a thread so other computation can occur while
 // the note is playing.  Don't worry about what a thread is, the main
 // idea is the method will start the note then immediately return, so
 // the code in the caller will continue to run while the note is played.
 public static void playNoteNoWait(int note, int velocity,int duration)
 {
   // this is a lambda expression that creates a Runnable play object with the defined method (no parameters)
    Runnable play = () -> {
        channels[0].noteOn(note, velocity);
        try
        {
               Thread.sleep(duration);
        }
        catch (InterruptedException e)
        {
            System.out.println("Interrupt error.");
        }
        channels[0].noteOff(note);
    };
    Thread t = new Thread(play);
    t.start();
 }

 // ***********************************************************************************
 // Main method
 // The main method initializes the MIDI synthesizer and plays some sample notes.
 //
 // Note: On Windows you will likely get a Windows Preferences error when the synthesizer
 //       initializes.  You can ignore this error message.
 // ***********************************************************************************
 public static void main(String[] args)
 {
   // Initialize the synthesizer
   Synthesizer synth = null;
   try {
      synth = MidiSystem.getSynthesizer();
      synth.open();
   }
   catch (MidiUnavailableException e)
   {
       System.out.println("MIDI error.");
       e.printStackTrace();
       System.exit(1);
   }
   // Array for musical instruments / channels is set to the default channels
   // and the default instrument is in channels[0]
   channels = synth.getChannels();


   // Play notes and wait for each note to finish playing before
   // moving on to the next note
   playNoteWait(60, 127, 500);  // C for half a second
   playNoteWait(62, 127, 500);  // D for half a second
   playNoteWait(64, 127, 500);  // E for half a second
   playNoteWait(65, 127, 500);  // F for half a second
   playNoteWait(67, 127, 1000); // G for a second

   playNoteWait(67, 0, 2000); // play a silent note for 2 seconds

   // Play a C for 1.5 seconds but don't wait for it to finish, this
   // allows the next three notes to be played at the same time as
   // the C
   playNoteNoWait(60, 127, 1500); // C for 1.5 seconds
   playNoteWait(70, 127, 500);    // B for 0.5 seconds along with C
   playNoteWait(69, 127, 500);    // followed by A for 0.5s along with C
   playNoteWait(67, 127, 500);    // followed by G for 0.5s along with C
   // The C has finished by now so the next note plays by itself
   playNoteWait(62, 127, 1000);   // Followed by D for 1s by itself

   // This just waits for the user to type a key and press enter
   // to quit the program.  If the song was still playing it might
   // immediately quit without finishing the notes.
   Scanner kbd = new Scanner(System.in);
   System.out.println("Type a letter and press enter to exit");
   String s = kbd.next();
  }
}
