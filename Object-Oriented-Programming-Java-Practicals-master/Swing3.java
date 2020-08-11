package swing3;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Swing3 implements ActionListener {

    JFrame f;
    JPanel p1;
    JTextField t1;
    JButton b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17;
    
    static double a=0,b=0,c=0;
    static int o=0;
    
    Swing3()
    {
        f = new JFrame("Calculator");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        p1 = new JPanel();
        p1.setLayout(null);
        t1 = new JTextField();
        t1.setBounds(25,25,325,25);
        p1.add(t1);
        
        b1 =new JButton("+");
        b1.setBounds(50,75,50,25);
        b2 =new JButton("1");
        b2.setBounds(125,75,50,25);
        b3 =new JButton("2");
        b3.setBounds(200,75,50,25);
        b4 =new JButton("3");
        b4.setBounds(275,75,50,25);
        b5 =new JButton("-");
        b5.setBounds(50,125,50,25);
        b6 =new JButton("4");
        b6.setBounds(125,125,50,25);
        b7 =new JButton("5");
        b7.setBounds(200,125,50,25);
        b8 =new JButton("6");
        b8.setBounds(275,125,50,25);
        b9 =new JButton("*");
        b9.setBounds(50,175,50,25);
        b10 =new JButton("7");
        b10.setBounds(125,175,50,25);
        b11 =new JButton("8");
        b11.setBounds(200,175,50,25);
        b12 =new JButton("9");
        b12.setBounds(275,175,50,25);
        b13 =new JButton("/");
        b13.setBounds(50,225,50,25);
        b14 =new JButton(".");
        b14.setBounds(125,225,50,25);
        b15 =new JButton("0");
        b15.setBounds(200,225,50,25);
        b16 =new JButton("C");
        b16.setBounds(275,225,50,25);
        b17 =new JButton("=");
        b17.setBounds((int) 162.5,275,50,25);
        p1.add(b1);
        p1.add(b2);
        p1.add(b3);
        p1.add(b4);
        p1.add(b5);
        p1.add(b6);
        p1.add(b7);
        p1.add(b8);
        p1.add(b9);
        p1.add(b10);
        p1.add(b11);
        p1.add(b12);
        p1.add(b13);
        p1.add(b14);
        p1.add(b15);
        p1.add(b16);
        p1.add(b17);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);
        b10.addActionListener(this);
        b11.addActionListener(this);
        b12.addActionListener(this);
        b13.addActionListener(this);
        b14.addActionListener(this);
        b15.addActionListener(this);
        b16.addActionListener(this);
        b17.addActionListener(this);
        
        f.add(p1);
        f.setSize(400,500);
        f.setVisible(true);
    }
    
    public void actionPerformed(ActionEvent e)
    {
        String s = e.getActionCommand();
        if(s.equals("+"))
        {
            a=Double.parseDouble(t1.getText());
            o=1;
            t1.setText("");
        }
        if(s.equals("1"))
            t1.setText(t1.getText().concat("1"));
        if(s.equals("2"))
            t1.setText(t1.getText().concat("2"));
        if(s.equals("3"))
            t1.setText(t1.getText().concat("3"));
        if(s.equals("-"))
        {
            a=Double.parseDouble(t1.getText());
            o=2;
            t1.setText("");
        }
        if(s.equals("4"))
            t1.setText(t1.getText().concat("4"));
        if(s.equals("5"))
            t1.setText(t1.getText().concat("5"));
        if(s.equals("6"))
            t1.setText(t1.getText().concat("6"));
        if(s.equals("*"))
        {
            a=Double.parseDouble(t1.getText());
            o=3;
            t1.setText("");
        }
        if(s.equals("7"))
            t1.setText(t1.getText().concat("7"));
        if(s.equals("8"))
            t1.setText(t1.getText().concat("8"));
        if(s.equals("9"))
            t1.setText(t1.getText().concat("9"));
        if(s.equals("/"))
        {
            a=Double.parseDouble(t1.getText());
            o=4;
            t1.setText("");
        }
        if(s.equals("."))
            t1.setText(t1.getText().concat("."));
        if(s.equals("0"))
            t1.setText(t1.getText().concat("0"));
        if(s.equals("="))
	{
            b=Double.parseDouble(t1.getText());	
            switch(o)
            {
		case 1: c=a+b;
                    break;
		
		case 2: c=a-b;
                    break;
		
		case 3: c=a*b;
                    break;
		
		case 4: c=a/b;
                    break;
		
		default: c=0;
            }
            t1.setText(""+c);
	}
		
	if(s.equals("C"))
            t1.setText("");	
    }
    
    public static void main(String[] args) {
        
        new Swing3();
        
    }
    
}

