import javax.swing.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.FlowLayout;

class test_swing extends JFrame implements ActionListener{
	JLabel jl;
	JTextField jt;
	JButton jb;
	test_swing(){
		jl = new JLabel("Please enter ");
		add(jl);
		jt = new JTextField();
		jt.setColumns(40);
		add(jt);
		jb = new JButton("Search");
		jb.addActionListener(this);
		add(jb);
		
		setLayout(new FlowLayout());
		setVisible(true);
		setSize(140,140);
		setLocation(440,440);
		setTitle("GUI/Swing/Text/Search");
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	public void actionPerformed(ActionEvent aa){
		//jl.setText(jt.getText());
		jt.setText("Sorry, not found!");
	}
}
class GUI_Swing{
	public static void main (String[]ar){
		test_swing ts = new test_swing();
	}
}
