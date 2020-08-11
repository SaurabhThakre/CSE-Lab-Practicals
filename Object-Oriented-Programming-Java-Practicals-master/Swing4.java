package swing4;

import java.awt.*;
import java.awt.event.*;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import javax.swing.*;

public class Swing4 {
    
    JFrame f;
    JPanel p1;
    JLabel l1;
    JTable tb;
    
    Swing4() throws IOException
    {
        
        f = new JFrame("Student");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(null);
        
        l1 = new JLabel("Student Information");
        l1.setFont(new Font("Courier new",Font.PLAIN,20));
        l1.setBounds(125,10,250,20);
        f.add(l1);
        
        FileReader fs = new FileReader("D:\\RCOEM CSE IVth Sem\\OOP\\Student.txt");
        BufferedReader f1 = new BufferedReader(fs);
        String st = f1.readLine();
        String[] columnNames = st.split("\t");
        String[] ss = new String[4];
        int i=0;
        while(st != null)
        {
            st = f1.readLine();
            ss[i] = st;
            i++;
        }
        
        String[][] data = {ss[0].split("\t\t"),ss[1].split("\t\t"),ss[2].split("\t\t")};
        
        tb = new JTable(data,columnNames);
        JScrollPane sp = new JScrollPane(tb);
        sp.setBounds(0,50,500,150);
        f.add(sp);
        
        f.setSize(500,200);
        f.setVisible(true);
        
    }

    public static void main(String[] args) throws IOException {
        
        new Swing4();
        
    }
    
}
