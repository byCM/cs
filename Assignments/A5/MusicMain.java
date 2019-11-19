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
		song[0] = new Note(88, 127, 200); //BASE NOTE
		song[1] = new Note(93, 127, 130);
		song[2] = new Note(88, 127, 130);
		song[3] = new Note(95, 127, 130);
		song[4] = new Note(88, 127, 130);
		song[5] = new Note(91, 127, 130);
		song[6] = new Note(93, 127, 130);
		song[7] = new Note(88, 127, 130);
		song[8] = new Note(96, 127, 130);
		song[9] = new Note(88, 127, 130);
		song[10] = new Note(97, 127, 130);
		song[11] = new Note(88, 127, 130);
		song[12] = new Note(95, 127, 130);
		song[13] = new Note(96, 127, 130);
		

		
		Song song1 = new Song("Twinkly little star");
		
		for (int i = 0; i < 14; i++) {
			song1.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
		}
		
		song1.playSong();
		

		
	}

}
