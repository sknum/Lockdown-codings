import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.JLabel;
/*<applet code="armstrong"width=500 height=500></applet>*/
public class armstrong extends JApplet
{
	JLabel j1,j2;
	int res=0;
	public void init()
	{
		try
		{
			SwingUtilities.invokeLater(new Runnable()
			{
				public void run()
				{
					makeGUI();
				}
			});
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
	public void makeGUI()
	{ 	
		setLayout(new FlowLayout());
		j1=new JLabel("Enter the 3 Digit Number");
		JTextField jt=new JTextField(10);
		add(j1);
		add(jt);
		j2=new JLabel("");
		j2.setFont(new Font("Arial Black",Font.BOLD,25));
		j2.setForeground(Color.red);
		add(j2);
		JButton jb=new JButton("OUTPUT");
		jb.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent ae)
			{
				int a1=Integer.parseInt(jt.getText());
				int b1=a1;
				String msg="##ARMSTRONG##";
				String msg1="#NOT A ARMSTRONG#";
				while(b1!=0)
				{
					int rem=b1%10;
					res=res+(rem*rem*rem);
					b1=b1/10;
				}
				if(res==a1)
				{
					j2.setText(msg);						
				}
				else
				{
					j2.setText(msg1);		
				}
			}
		});
		add(jb);
	}
}		
