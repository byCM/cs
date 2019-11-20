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
		Note song2[] = new Note[200];
		
		song[0] = new Note(95, 40, 500);
		song[1] = new Note(95, 40, 500);
		song[2] = new Note(95, 40, 500);
	
		song[3] = new Note(87, 127, 150); //BASE NOTE
		song[4] = new Note(92, 127, 150);
		song[5] = new Note(87, 127, 150);
		song[6] = new Note(94, 127, 150);
		song[7] = new Note(87, 127, 150);
		song[8] = new Note(90, 127, 150);
		song[9] = new Note(92, 127, 150);
		song[10] = new Note(87, 127, 150);
		song[11] = new Note(95, 127, 150);
		song[12] = new Note(87, 127, 150);
		song[13] = new Note(97, 127, 150);
		song[14] = new Note(87, 127, 150);
		song[15] = new Note(94, 127, 150);
		song[16] = new Note(95, 127, 150);
		
		song[17] = new Note(87, 127, 150); //BASE NOTE
		song[18] = new Note(92, 127, 150);
		song[19] = new Note(87, 127, 150);
		song[20] = new Note(94, 127, 150);
		song[21] = new Note(87, 127, 150);
		song[22] = new Note(90, 127, 150);
		song[23] = new Note(92, 127, 150);
		song[24] = new Note(87, 127, 150);
		song[25] = new Note(95, 127, 150);
		song[26] = new Note(87, 127, 150);
		song[27] = new Note(97, 127, 150);
		song[28] = new Note(87, 127, 150);
		song[29] = new Note(94, 127, 150);
		song[30] = new Note(95, 127, 150);
		
		song[31] = new Note(87, 127, 150); //BASE NOTE
		song[32] = new Note(92, 127, 150);
		song[33] = new Note(87, 127, 150);
		song[34] = new Note(94, 127, 150);
		song[35] = new Note(87, 127, 150);
		song[36] = new Note(90, 127, 150);
		song[37] = new Note(92, 127, 150);
		song[38] = new Note(87, 127, 150);
		song[39] = new Note(95, 127, 150);
		song[40] = new Note(87, 127, 150);
		song[41] = new Note(97, 127, 150);
		song[42] = new Note(87, 127, 150);
		song[43] = new Note(94, 127, 150);
		song[44] = new Note(95, 127, 150);
		
		song[45] = new Note(87, 127, 150); //BASE NOTE
		song[46] = new Note(92, 127, 150);
		song[47] = new Note(87, 127, 150);
		song[48] = new Note(94, 127, 150);
		song[49] = new Note(87, 127, 150);
		song[50] = new Note(90, 127, 150);
		song[51] = new Note(92, 127, 150);
		song[52] = new Note(87, 127, 150);
		song[53] = new Note(95, 127, 150);
		song[54] = new Note(87, 127, 150);
		song[55] = new Note(97, 127, 150);
		song[56] = new Note(87, 127, 150);
		song[57] = new Note(94, 127, 150);
		song[58] = new Note(95, 127, 150);
		
		song[59] = new Note(87, 127, 150); //BASE NOTE
		song[60] = new Note(92, 127, 150);
		song[61] = new Note(87, 127, 150);
		song[62] = new Note(94, 127, 150);
		song[63] = new Note(87, 127, 150);
		song[64] = new Note(90, 127, 150);
		song[65] = new Note(92, 127, 150);
		song[66] = new Note(87, 127, 150);
		song[67] = new Note(95, 127, 150);
		song[68] = new Note(87, 127, 150);
		song[69] = new Note(97, 127, 150);
		song[70] = new Note(87, 127, 150);
		song[71] = new Note(94, 127, 150);
		song[72] = new Note(95, 127, 150);
		

		//2nd Instrumental
		song2[0] = new Note(10, 0, 500);
		song2[1] = new Note(10, 0, 500);
		song2[2] = new Note(10, 0, 500);
		
		song2[3] = new Note(57, 0, 150); //BASE NOTE
		song2[4] = new Note(62, 0, 150);
		song2[5] = new Note(57, 0, 150);
		song2[6] = new Note(64, 0, 150);
		song2[7] = new Note(57, 0, 150);
		song2[8] = new Note(60, 0, 150);
		song2[9] = new Note(62, 0, 150);
		song2[10] = new Note(57, 0, 150);
		song2[11] = new Note(65, 0, 150);
		song2[12] = new Note(57, 0, 150);
		song2[13] = new Note(67, 0, 150);
		song2[14] = new Note(57, 0, 150);
		song2[15] = new Note(64, 0, 150);
		song2[16] = new Note(65, 0, 150);
		
		song2[17] = new Note(57, 0, 150); //BASE NOTE
		song2[18] = new Note(62, 0, 150);
		song2[19] = new Note(57, 0, 150);
		song2[20] = new Note(64, 0, 150);
		song2[21] = new Note(57, 0, 150);
		song2[22] = new Note(60, 0, 150);
		song2[23] = new Note(62, 0, 150);
		song2[24] = new Note(57, 0, 150);
		song2[25] = new Note(65, 0, 150);
		song2[26] = new Note(57, 0, 150);
		song2[27] = new Note(67, 0, 150);
		song2[28] = new Note(57, 0, 150);
		song2[29] = new Note(64, 0, 150);
		song2[30] = new Note(65, 0, 150);
		
		song2[31] = new Note(77, 80, 150);
		song2[32] = new Note(82, 80, 150);
		song2[33] = new Note(77, 80, 150);
		song2[34] = new Note(84, 80, 150);
		song2[35] = new Note(77, 80, 150);
		song2[36] = new Note(80, 80, 150);
		song2[37] = new Note(82, 80, 150);
		song2[38] = new Note(77, 80, 150);
		song2[39] = new Note(85, 80, 150);
		song2[40] = new Note(77, 80, 150);
		song2[41] = new Note(87, 80, 150);
		song2[42] = new Note(77, 80, 150);
		song2[43] = new Note(84, 80, 150);
		song2[44] = new Note(85, 80, 150);
		
		song2[45] = new Note(77, 80, 150);
		song2[46] = new Note(82, 80, 150);
		song2[47] = new Note(77, 80, 150);
		song2[48] = new Note(84, 80, 150);
		song2[49] = new Note(77, 80, 150);
		song2[50] = new Note(80, 80, 150);
		song2[51] = new Note(82, 80, 150);
		song2[52] = new Note(77, 80, 150);
		song2[53] = new Note(85, 80, 150);
		song2[54] = new Note(77, 80, 150);
		song2[55] = new Note(87, 80, 150);
		song2[56] = new Note(77, 80, 150);
		song2[57] = new Note(84, 80, 150);
		song2[58] = new Note(85, 80, 150);
		
		song2[59] = new Note(77, 80, 150);
		song2[60] = new Note(82, 80, 150);
		song2[61] = new Note(77, 80, 150);
		song2[62] = new Note(84, 80, 150);
		song2[63] = new Note(77, 80, 150);
		song2[64] = new Note(80, 80, 150);
		song2[65] = new Note(82, 80, 150);
		song2[66] = new Note(77, 80, 150);
		song2[67] = new Note(85, 80, 150);
		song2[68] = new Note(77, 80, 150);
		song2[69] = new Note(87, 80, 150);
		song2[70] = new Note(77, 80, 150);
		song2[71] = new Note(84, 80, 150);
		song2[72] = new Note(85, 80, 150);
		
		
		Song songOne = new Song("Exorcist Theme");
		Song songTwo = new Song("Exorcist Theme 2");
		
		for (int i = 0; i < 73; i++) {
			songOne.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
		}
		
		for (int i = 0; i < 73; i++) {
			songTwo.addNote(song2[i].getValue(), song2[i].getVelocity(), song2[i].getDuration());
		}
		

		
		Thread thread1 = new Thread() {
		    public void run() {
		    	songOne.playSong();
		    }
		};

		Thread thread2 = new Thread() {
		    public void run() {
		    	songTwo.playSong();
		    }
		};	
		
		thread1.start();
		thread2.start();
		
	}

}
