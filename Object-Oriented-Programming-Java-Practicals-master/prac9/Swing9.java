package swing9;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.lang.Math;
import java.util.Random;

public class Swing9 implements ActionListener {
    
    JFrame f;
    JLabel l1,l2,l3,l4;
    JTextField t1;
    JButton b1;
    int x = new Random().nextInt(9);
    int y = new Random().nextInt(9);
    int a=0,b=2;
    
    Swing9()
    {
        f = new JFrame("Math Game");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);
        
        l1 = new JLabel("MATH GAME");
        l1.setFont(new Font("Courier new",Font.BOLD,30));
        l1.setBounds(60, 10, 200, 20);
        
        l2 = new JLabel(x+" + "+y+"=");
        l2.setBounds(10, 65, 150, 20);
        l2.setFont(new Font("Courier new",Font.BOLD, (int) 22.5));
        
        t1 = new JTextField();
        t1.setBounds(100, 60, 75, 30);
        t1.setFont(new Font("Courier new",Font.BOLD, (int) 22.5));
        
        b1 = new JButton("Next");
        b1.setFont(new Font("Courier new",Font.BOLD, (int) 17.5));
        b1.setBounds(190, 60, 75, 30);
        b1.addActionListener(this);
        
        l3 = new JLabel();
        l3.setBounds(80, 120, 200, 20);
        l3.setFont(new Font("Courier new",Font.BOLD, (int) 22.5));
        
        l4 = new JLabel();
        l4.setBounds(80, 100, 150, 15);
        l4.setFont(new Font("Courier new",Font.PLAIN, 15));
        
        f.add(l1);
        f.add(l2);
        f.add(t1);
        f.add(b1);
        f.add(l3);
        f.add(l4);
        f.setSize(300,200);
        f.setVisible(true);
    }
    
    public static void main(String[] args) {
        
        new Swing9();
        
    }
    
    public void actionPerformed(ActionEvent e)
    {
        int z = Integer.parseInt(t1.getText());
        if(z == x+y)
        {
            a=a+10;
            l4.setText("Right Answer");
            l3.setText("Score = "+Integer.toString(a));
            t1.setText("");
            
        }
        else
        {
            b--;
            l4.setText("Wrong Answer");
            t1.setText("");
            if(b==0)
            {
                l3.setText("Game Over");
                b1.setVisible(false);
            }
            else
            {
                l3.setText("Score = "+Integer.toString(a));
            }
        }
        x = new Random().nextInt(9);
        y = new Random().nextInt(9);
        l2.setText(x+" + "+y+"=");
        
    }
    
}
