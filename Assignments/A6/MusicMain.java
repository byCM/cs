import java.io.*;
import java.util.*;

import javax.sound.midi.MidiChannel;
import javax.sound.midi.MidiSystem;
import javax.sound.midi.MidiUnavailableException;
import javax.sound.midi.Synthesizer;

public class MusicMain {
	public Scanner textFile;
	
	private static MidiChannel channels[] = null;
	
	public void openFile() {
		try { 
			textFile = new Scanner(new File("song.txt"));
		}
		catch (Exception e) {
			System.out.println("Could Not Find File");
		}
	}
	
	public void readFile() {
		while (textFile.hasNext()) {
			
			int temp = 0;
				
			String a = textFile.next();
			int b = textFile.nextInt();
			int c = textFile.nextInt();
			
			if (a.equals("C")) {
				temp = 60;
			} else if (a.equals("C#")) {
				temp = 61;
			} else if (a.equals("D")) {
				temp = 62;
			} else if (a.equals("D#")) {
				temp = 63;
			} else if (a.equals("E")) {
				temp = 64;
			} else if (a.equals("F")) {
				temp = 65;
			} else if (a.equals("F#")) {
				temp = 66;
			} else if (a.equals("G")) {
				temp = 67;
			} else if (a.equals("AFlat")) {
				temp = 68;
			} else if (a.equals("A")) {
				temp = 69;
			} else if (a.equals("BFlat")) {
				temp = 70;
			} else if (a.equals("B")) {
				temp = 71;
			}
			
			Note song[] = new Note[100];
			song[0] = new Note(temp, b, c);
			
			
			Song songOne = new Song("Song 1");
	    	for (int i = 0; i < 1; i++) {
				songOne.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
				System.out.println(song[i].getValue());
				System.out.println(song[i].getVelocity());
				System.out.println(song[i].getDuration());
				
			}
	    	
	    	songOne.playSong();
	    	
		}
	}
	
	public void closeFile() {
		textFile.close();
	}
	
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
		   
		   MusicMain reader = new MusicMain();
		   reader.openFile();
		   reader.readFile();
		   reader.closeFile();
	
		   
		    
		/* // Three parts of the theme  
		   
		Note song[] = new Note[200];	
		

		
		//Part 1 instrumental
		song[0] = new Note(0, 0, 200);
		song[1] = new Note(0, 0, 200);
		song[2] = new Note(0, 0, 200);
		
		

		
		
		Song songOne = new Song("Exorcist Theme Song");
    	for (int i = 0; i < 89; i++) {
			songOne.addNote(song[i].getValue(), song[i].getVelocity(), song[i].getDuration());
		}
    	songOne.playSong();
    	*/


		
		
		
	}

}
