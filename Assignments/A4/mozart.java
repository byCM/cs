//
// Template program for Mozart Dice Program
//
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
import java.io.File;
import java.util.Random;

public class MozartDice {
  /* playFile
   This method plays the file named filename located in the subfolder named measures.
   If it is a minuet, the file should be named "m1.wav" up to "m176.wav".
   If it is a trio, the file should be named "t1.wav" up to "t96.wav"
   */
  public static void playFile(String filename) {
    String path = "measures/" + filename; // use forward slash for unix/mac machines
    File wavFile = new File(path);
    try {
      Clip clip = AudioSystem.getClip();
      clip.open(AudioSystem.getAudioInputStream(wavFile));
      clip.start();
      Thread.sleep(clip.getMicrosecondLength()/1000);
    }
    catch (Exception e) {
      System.out.println("playFile error");
    }
  }
  
  /*
   main method
   */
  public static void main(String[] args) {
    // 2D array initialized to the numbers for the 11 possible minuets for
    // measures 1-16
    int minuets[][] =
    {
      {96,32,69,40,148,104,152,119,98,54,3},
      {22,6,95,17,74,157,60,84,142,130,87},
      {141,128,158,113,163,27,171,114,42,10,165},
      {41,63,13,85,45,167,53,50,156,103,61},
      {105,146,153,161,80,154,99,140,75,28,135},
      {122,46,55,2,97,68,133,86,129,37,47},
      {11,134,110,159,36,118,21,169,62,106,147},
      {30,81,24,100,107,91,127,94,123,5,33},
      {70,117,66,90,25,138,16,120,65,35,102},
      {121,39,139,176,143,71,155,88,77,20,4},
      {26,126,15,7,64,150,57,48,19,108,31},
      {9,56,132,34,125,29,175,166,82,92,164},
      {112,174,73,67,76,101,43,51,137,12,144},
      {49,18,58,160,136,162,168,115,38,124,59},
      {109,116,145,52,1,23,89,72,149,44,173},
      {14,83,79,170,93,151,172,111,8,131,78}
    };
    // 2D array initialized to the numbers for the 6 possible minuets for
    // trios 17-32
    int trios[][] =
    {
      {72,56,75,40,83,18},
      {6,82,39,73,3,45},
      {59,42,54,16,28,62},
      {25,74,1,68,53,38},
      {81,14,65,29,37,4},
      {41,7,43,55,17,27},
      {89,26,15,2,44,52},
      {13,71,80,61,70,94},
      {36,76,9,22,63,11},
      {5,20,34,67,85,92},
      {46,64,93,49,32,24},
      {79,84,48,77,96,86},
      {30,8,69,57,12,51},
      {95,35,58,87,23,60},
      {19,47,90,33,50,78},
      {66,88,21,10,91,31}
    };
    
    // The rest of this program is just a demonstration of playing minuets[0][0], minuets[1][10], and trios[0][2]
    // which corresponds to m96.wav, m87.wav, and t75.wav
    // You should delete the following lines from your final program.
    System.out.println("Current working directory: " + new File(" ").getAbsolutePath());
    

    Random rand = new Random();

    for (int i = 0; i < 16; i++) { 
        int roll1 = rand.nextInt((6 - 1) + 1) + 1;
    	int roll2 = rand.nextInt((6 - 1) + 1) + 1;
    	int sum = roll1 + roll2;
    	
    	String filename;
    	filename = "m" + minuets[i][sum - 2] + ".wav";
        System.out.println(filename);
        playFile(filename);
    }
    
    System.out.println("End of minuets");
    
    for (int i = 0; i < 16; i++) {
    	int roll1 = rand.nextInt((6 - 1) + 1) + 1;
    	String filename;
    	System.out.println(roll1);
        filename = "T" + trios[i][roll1 - 1] + ".wav";
        System.out.println(filename);
        playFile(filename);
    }
    

  }
}
