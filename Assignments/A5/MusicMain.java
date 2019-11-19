import javax.sound.midi.MidiChannel;
import javax.sound.midi.MidiSystem;
import javax.sound.midi.MidiUnavailableException;
import javax.sound.midi.Synthesizer;

public class MusicMain {
	private static MidiChannel channels[] = null;
	
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
		   
		   	   
		Note song[] = new Note[200];
		song[0] = new Note(60, 127, 500);
		song[1] = new Note(60, 127, 500);
		song[2] = new Note(60, 127, 500);
		song[3] = new Note(60, 127, 500);
		song[4] = new Note(60, 127, 500);
		song[5] = new Note(60, 127, 500);
		song[6] = new Note(60, 127, 500);
		song[7] = new Note(60, 127, 500);
		
		Song song1 = new Song("Twinkly little star");
		
		for (int i = 0; i < 8; i++) {
			song1.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
		}
		
		song1.playSong();
		

		
	}

}
