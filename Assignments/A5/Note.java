public class Note extends MidiPlayer {
	private int velocity;
	private int value;
	private int duration;
	
	public Note() {
		this.velocity = 0;
		this.value = 0;
		this.duration = 0;
	}
	
	public void setVelocity(int velocity) {
		this.velocity = velocity;
	}
	
	public int getVelocity() {
		return velocity;
	}
	
	public void setValue(int value) {
		this.value = value;
	}
	
	public int getValue() {
		return value;
	}
	
	public void setDuration(int duration) {
		this.duration = duration;
	}
	
	public int getDuration() {
		return duration;
	}
}
