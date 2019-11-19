import javax.sound.midi.*;
import java.util.ArrayList;


public class Song {
	private String Name;
	private ArrayList<Note> notes;
	
	private static MidiChannel channels[] = null;
	
	public Song() {
		Name = "None";
		notes = new ArrayList<Note>();
	}
	
	public Song(String name) {
		name = name;
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
	
	
public static void main(String[] args) {
	Song song1 = new Song("Twinkly little star");
	song1.addNote(60, 127, 500);
	
}
	
	
	


	
	
	
	
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
