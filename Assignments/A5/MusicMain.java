


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
		Note song3[] = new Note[200];
		
		//Part 1 instrumental
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
		
		song[73] = new Note(87, 127, 150); //BASE NOTE
		song[74] = new Note(92, 127, 150);
		song[75] = new Note(87, 127, 150);
		song[76] = new Note(94, 127, 150);
		song[77] = new Note(87, 127, 150);
		song[78] = new Note(90, 127, 150);
		song[79] = new Note(92, 127, 150);
		song[80] = new Note(87, 127, 150);
		song[81] = new Note(95, 127, 150);
		song[82] = new Note(87, 127, 150);
		song[83] = new Note(97, 127, 150);
		song[84] = new Note(87, 127, 150);
		song[85] = new Note(94, 127, 150);
		song[86] = new Note(95, 127, 150);
		
		song[87] = new Note(87, 127, 150); //BASE NOTE
		song[88] = new Note(92, 127, 150);
		song[89] = new Note(87, 127, 150);
		song[90] = new Note(94, 127, 150);
		song[91] = new Note(87, 127, 150);
		song[92] = new Note(90, 127, 150);
		song[93] = new Note(92, 127, 150);
		song[94] = new Note(87, 127, 150);
		song[95] = new Note(95, 127, 150);
		song[96] = new Note(87, 127, 150);
		song[97] = new Note(97, 127, 150);
		song[98] = new Note(87, 127, 150);
		song[99] = new Note(94, 127, 150);
		song[100] = new Note(95, 127, 150);
		
		song[101] = new Note(87, 127, 150); //BASE NOTE
		song[102] = new Note(92, 127, 150);
		song[103] = new Note(87, 127, 150);
		song[104] = new Note(94, 127, 150);
		song[105] = new Note(87, 127, 150);
		song[106] = new Note(90, 127, 150);
		song[107] = new Note(92, 127, 150);
		song[108] = new Note(87, 127, 150);
		song[109] = new Note(95, 127, 150);
		song[110] = new Note(87, 127, 150);
		song[111] = new Note(97, 127, 150);
		song[112] = new Note(87, 127, 150);
		song[113] = new Note(94, 127, 150);
		song[114] = new Note(95, 127, 150);
		

		//Part 2 instrumental
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
		
		song2[31] = new Note(77, 80, 150); //BASE NOTE
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
		
		song2[45] = new Note(77, 80, 150); //BASE NOTE
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
		
		song2[59] = new Note(77, 80, 150); //BASE NOTE
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
		
		song2[73] = new Note(77, 80, 150); //BASE NOTE
		song2[74] = new Note(82, 80, 150);
		song2[75] = new Note(77, 80, 150);
		song2[76] = new Note(84, 80, 150);
		song2[77] = new Note(77, 80, 150);
		song2[78] = new Note(80, 80, 150);
		song2[79] = new Note(82, 80, 150);
		song2[80] = new Note(77, 80, 150);
		song2[81] = new Note(85, 80, 150);
		song2[82] = new Note(77, 80, 150);
		song2[83] = new Note(87, 80, 150);
		song2[84] = new Note(77, 80, 150);
		song2[85] = new Note(84, 80, 150);
		song2[86] = new Note(85, 80, 150);
		
		song2[87] = new Note(77, 80, 150); //BASE NOTE
		song2[88] = new Note(82, 80, 150);
		song2[89] = new Note(77, 80, 150);
		song2[90] = new Note(84, 80, 150);
		song2[91] = new Note(77, 80, 150);
		song2[92] = new Note(80, 80, 150);
		song2[93] = new Note(82, 80, 150);
		song2[94] = new Note(77, 80, 150);
		song2[95] = new Note(85, 80, 150);
		song2[96] = new Note(77, 80, 150);
		song2[97] = new Note(87, 80, 150);
		song2[98] = new Note(77, 80, 150);
		song2[99] = new Note(84, 80, 150);
		song2[100] = new Note(85, 80, 150);
		
		song2[101] = new Note(77, 80, 150); //BASE NOTE
		song2[102] = new Note(82, 80, 150);
		song2[103] = new Note(77, 80, 150);
		song2[104] = new Note(84, 80, 150);
		song2[105] = new Note(77, 80, 150);
		song2[106] = new Note(80, 80, 150);
		song2[107] = new Note(82, 80, 150);
		song2[108] = new Note(77, 80, 150);
		song2[109] = new Note(85, 80, 150);
		song2[110] = new Note(77, 80, 150);
		song2[111] = new Note(87, 80, 150);
		song2[112] = new Note(77, 80, 150);
		song2[113] = new Note(84, 80, 150);
		song2[114] = new Note(85, 80, 150);
		
		//Part 3 instrumental
		song3[0] = new Note(10, 0, 500);
		song3[1] = new Note(10, 0, 500);
		song3[2] = new Note(10, 0, 500);
		
		song3[3] = new Note(57, 0, 150); //BASE NOTE
		song3[4] = new Note(62, 0, 150);
		song3[5] = new Note(57, 0, 150);
		song3[6] = new Note(64, 0, 150);
		song3[7] = new Note(57, 0, 150);
		song3[8] = new Note(60, 0, 150);
		song3[9] = new Note(62, 0, 150);
		song3[10] = new Note(57, 0, 150);
		song3[11] = new Note(65, 0, 150);
		song3[12] = new Note(57, 0, 150);
		song3[13] = new Note(67, 0, 150);
		song3[14] = new Note(57, 0, 150);
		song3[15] = new Note(64, 0, 150);
		song3[16] = new Note(65, 0, 150);
		
		song3[17] = new Note(57, 0, 150); //BASE NOTE
		song3[18] = new Note(62, 0, 150);
		song3[19] = new Note(57, 0, 150);
		song3[20] = new Note(64, 0, 150);
		song3[21] = new Note(57, 0, 150);
		song3[22] = new Note(60, 0, 150);
		song3[23] = new Note(62, 0, 150);
		song3[24] = new Note(57, 0, 150);
		song3[25] = new Note(65, 0, 150);
		song3[26] = new Note(57, 0, 150);
		song3[27] = new Note(67, 0, 150);
		song3[28] = new Note(57, 0, 150);
		song3[29] = new Note(64, 0, 150);
		song3[30] = new Note(65, 0, 150);
		
		song3[31] = new Note(57, 0, 150); //BASE NOTE
		song3[32] = new Note(62, 0, 150);
		song3[33] = new Note(57, 0, 150);
		song3[34] = new Note(64, 0, 150);
		song3[35] = new Note(57, 0, 150);
		song3[36] = new Note(60, 0, 150);
		song3[37] = new Note(62, 0, 150);
		song3[38] = new Note(57, 0, 150);
		song3[39] = new Note(65, 0, 150);
		song3[40] = new Note(57, 0, 150);
		song3[41] = new Note(67, 0, 150);
		song3[42] = new Note(57, 0, 150);
		song3[43] = new Note(64, 0, 150);
		song3[44] = new Note(65, 0, 150);
		
		song3[45] = new Note(57, 0, 150); //BASE NOTE
		song3[46] = new Note(62, 0, 150);
		song3[47] = new Note(57, 0, 150);
		song3[48] = new Note(64, 0, 150);
		song3[49] = new Note(57, 0, 150);
		song3[50] = new Note(60, 0, 150);
		song3[51] = new Note(62, 0, 150);
		song3[52] = new Note(57, 0, 150);
		song3[53] = new Note(65, 0, 150);
		song3[54] = new Note(57, 0, 150);
		song3[55] = new Note(67, 0, 150);
		song3[56] = new Note(57, 0, 150);
		song3[57] = new Note(64, 0, 150);
		song3[58] = new Note(65, 0, 150);
		
		song3[59] = new Note(57, 0, 150); //BASE NOTE
		song3[60] = new Note(62, 0, 150);
		song3[61] = new Note(57, 0, 150);
		song3[62] = new Note(64, 0, 150);
		song3[63] = new Note(57, 0, 150);
		song3[64] = new Note(60, 0, 150);
		song3[65] = new Note(62, 0, 150);
		song3[66] = new Note(57, 0, 150);
		song3[67] = new Note(65, 0, 150);
		song3[68] = new Note(57, 0, 150);
		song3[69] = new Note(67, 0, 150);
		song3[70] = new Note(57, 0, 150);
		song3[71] = new Note(64, 0, 150);
		song3[72] = new Note(65, 0, 150);
		
		song3[73] = new Note(57, 0, 150); //BASE NOTE
		song3[74] = new Note(62, 0, 150);
		song3[75] = new Note(57, 0, 150);
		song3[76] = new Note(64, 0, 150);
		song3[77] = new Note(57, 0, 150);
		song3[78] = new Note(60, 0, 150);
		song3[79] = new Note(62, 0, 150);
		song3[80] = new Note(57, 0, 150);
		song3[81] = new Note(65, 0, 150);
		song3[82] = new Note(57, 0, 150);
		song3[83] = new Note(67, 0, 150);
		song3[84] = new Note(57, 0, 150);
		song3[85] = new Note(64, 0, 150);
		song3[86] = new Note(65, 0, 150);
		
		song3[87] = new Note(57, 40, 150); //BASE NOTE
		song3[88] = new Note(62, 40, 150);
		song3[89] = new Note(57, 40, 150);
		song3[90] = new Note(64, 40, 150);
		song3[91] = new Note(57, 40, 150);
		song3[92] = new Note(60, 40, 150);
		song3[93] = new Note(62, 40, 150);
		song3[94] = new Note(57, 40, 150);
		song3[95] = new Note(65, 40, 150);
		song3[96] = new Note(57, 40, 150);
		song3[97] = new Note(67, 40, 150);
		song3[98] = new Note(57, 40, 150);
		song3[99] = new Note(64, 40, 150);
		song3[100] = new Note(65, 40, 150);
		
		song3[101] = new Note(57, 40, 150); //BASE NOTE
		song3[102] = new Note(62, 40, 150);
		song3[103] = new Note(57, 40, 150);
		song3[104] = new Note(64, 40, 150);
		song3[105] = new Note(57, 40, 150);
		song3[106] = new Note(60, 40, 150);
		song3[107] = new Note(62, 40, 150);
		song3[108] = new Note(57, 40, 150);
		song3[109] = new Note(65, 40, 150);
		song3[110] = new Note(57, 40, 150);
		song3[111] = new Note(67, 40, 150);
		song3[112] = new Note(57, 40, 150);
		song3[113] = new Note(64, 40, 150);
		song3[114] = new Note(65, 40, 150);
		
		
		Song songOne = new Song("Exorcist Theme Song");
		Song songTwo = new Song("Exorcist Theme Song Part #2");
		Song songThree = new Song("Exorcist Theme song Part #3");
		
		for (int i = 0; i < 114; i++) {
			songOne.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
		}
		
		for (int i = 0; i < 114; i++) {
			songTwo.addNote(song2[i].getValue(), song2[i].getVelocity(), song2[i].getDuration());
		}
		
		for (int i = 0; i < 114; i++) {
			songThree.addNote(song3[i].getValue(), song3[i].getVelocity(), song3[i].getDuration());
		}
		

		
		Thread t1 = new Thread() {
		    public void run() {
		    	songOne.playSong();
		    }
		};

		Thread t2 = new Thread() {
		    public void run() {
		    	songTwo.playSong();
		    }
		};	
		
		Thread t3 = new Thread() {
		    public void run() {
		    	songThree.playSong();
		    }
		};	
		

		t1.start();
		t2.start();
		t3.start();
		
		
		Note chord[] = new Note[50];
		Note chord2[] = new Note[50];
		Note chord3[] = new Note[50];
		Note chord4[] = new Note[50];
		
		// Piano Chord: C Major
		chord[0] = new Note(60, 100, 500); // C
		chord[1] = new Note(64, 100, 500); // E
		chord[2] = new Note(67, 100, 500); // G
		
		// Piano Chord: D Major
		chord2[0] = new Note(62, 100, 500); // D
		chord2[1] = new Note(66, 100, 500); // F#
		chord2[2] = new Note(69, 100, 500); // A
		
		//Piano Chord: F Major
		chord3[0] = new Note(65, 100, 500); // F
		chord3[1] = new Note(69, 100, 500); // A
		chord3[2] = new Note(60, 100, 500); // C
		
		//Piano Chord: G Major
		chord4[0] = new Note(67, 100, 500); // G
		chord4[1] = new Note(71, 100, 500); // B
		chord4[2] = new Note(62, 100, 500); // D
		
		Song ChordOne = new Song("C Major");
		Song ChordTwo = new Song("D Major");
		Song ChordThree = new Song("F Major");
		Song ChordFour = new Song("G Major");
		
		
		
	}

}
