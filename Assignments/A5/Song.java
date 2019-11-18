import javax.sound.midi.*;
import java.util.ArrayList;


public class Song {
	private String Name;
	private ArrayList<Note> notes;
	
	private static MidiChannel channels[] = null;
	
	public Song(String Name) {
		Name = "None";
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
	}
	
	
	public static void main(String[] args) {
		Song notes = new Song("Song one");
	}
	
	
	
/*	
public class Details {	
	int note;
	int velocity;
	int duration;


	public Details(int note, int velocity, int duration) {
		this.note = note;
        this.velocity = velocity;
        this.duration = duration;
	}
}
*/

	
	
	
	
	public static void playNoteWait(int note, int velocity, int duration)
	 {
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
