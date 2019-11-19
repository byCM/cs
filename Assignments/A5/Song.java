import javax.sound.midi.*;
import java.util.ArrayList;


public class Song {
	private String Name;
	private ArrayList<Note> notes;
	public Synthesizer synth;
	
	private static MidiChannel channels[] = null;
	
	public Song() {
		Name = "None";
		notes = new ArrayList<Note>();
		
		 synth = null;
	}
	
	public Song(String name) {
		Name = name;
		notes = new ArrayList<Note>();
	}
	
	public void setName(String Name) {
		this.Name = Name;
	}
	
	public String getName() {
		return Name;
	}
	
	
	public void addNote(int note, int velocity, int duration) {
		Note details = new Note(note, velocity, duration);
		notes.add(details);
	}
	
public void playSong() {
	
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
	   
	   System.out.println(this.getName());
	   
	   for(int i=0; i < notes.size(); i++) {
		   playNoteWait(this.notes.get(i).getValue(), this.notes.get(i).getVelocity(), this.notes.get(i).getDuration());
	   }
}





	
	

/*
public static void main(String[] args) {
	
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
	   
	Song song1 = new Song("Twinkly little star");
	song1.addNote(60, 127, 500);
	song1.addNote(60, 127, 500);
	song1.addNote(60, 127, 500);
	song1.addNote(60, 127, 500);
	song1.playNoteWait(song1.notes.get(0).getValue(), song1.notes.get(0).getVelocity(), song1.notes.get(0).getDuration());
	
	
	
}
*/


	
	
	


	
	
	
	
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
}


	 public static void playNoteNoWait(int note, int velocity,int duration)
	 {
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
	 
	 

}
