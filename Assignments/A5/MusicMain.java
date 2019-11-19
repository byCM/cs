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
		
	
		song[0] = new Note(87, 127, 150);
		song[1] = new Note(92, 127, 150);
		song[2] = new Note(87, 127, 150);
		song[3] = new Note(94, 127, 150);
		song[4] = new Note(87, 127, 150);
		song[5] = new Note(90, 127, 150);
		song[6] = new Note(92, 127, 150);
		song[7] = new Note(87, 127, 150);
		song[8] = new Note(95, 127, 150);
		song[9] = new Note(87, 127, 150);
		song[10] = new Note(97, 127, 150);
		song[11] = new Note(87, 127, 150);
		song[12] = new Note(94, 127, 150);
		song[13] = new Note(95, 127, 150);
		
		song[14] = new Note(87, 127, 150); //BASE NOTE
		song[15] = new Note(92, 127, 150);
		song[16] = new Note(87, 127, 150);
		song[17] = new Note(94, 127, 150);
		song[18] = new Note(87, 127, 150);
		song[19] = new Note(90, 127, 150);
		song[20] = new Note(92, 127, 150);
		song[21] = new Note(87, 127, 150);
		song[22] = new Note(95, 127, 150);
		song[23] = new Note(87, 127, 150);
		song[24] = new Note(97, 127, 150);
		song[25] = new Note(87, 127, 150);
		song[26] = new Note(94, 127, 150);
		song[27] = new Note(95, 127, 150);

		
		song[28] = new Note(67, 127, 125); //BASE NOTE
		song[29] = new Note(72, 127, 125);
		song[30] = new Note(67, 127, 125);
		song[31] = new Note(74, 127, 125);
		song[32] = new Note(67, 127, 125);
		song[33] = new Note(70, 127, 125);
		song[34] = new Note(72, 127, 125);
		song[35] = new Note(67, 127, 125);
		song[36] = new Note(75, 127, 125);
		song[37] = new Note(67, 127, 125);
		song[38] = new Note(77, 127, 125);
		song[39] = new Note(67, 127, 125);
		song[40] = new Note(74, 127, 125);
		song[41] = new Note(75, 127, 125);

		
		Song song1 = new Song("Twinkly little star");
		
		for (int i = 0; i < 42; i++) {
			song1.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
		}
		
		
		song1.playSong();
		
		
		

		
	}

}
