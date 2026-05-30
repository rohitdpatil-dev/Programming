import javax.swing.*;
import java.awt.*;


class MarvellousLogin //implements ActionListener
{
    public JFrame fobj;
    public JButton bobj;
    public JTextField tobj;
    public JPasswordField pobj;
    public JLabel UserJLabel, PassJLabel, ResultLabel;

    public MarvellousLogin(String title, int width, int height)
    {
        fobj = new JFrame();

        UserJLabel = new JLabel("Username: ");
        UserJLabel.setBounds(50,50,100,30);

        PassJLabel = new JLabel("Password: ");
        PassJLabel.setBounds(50,100,100,30);

        tobj = new JTextField();
        tobj.setBounds(150, 50, 150, 30);

        pobj = new JPasswordField();
        pobj.setBounds(150, 100, 150, 30);

        bobj = new JButton("Submit");
        bobj.setBounds(150,150,100,30);

        ResultLabel = new JLabel("");
        ResultLabel.setBounds(150, 200, 250, 30);

        fobj.add(bobj);
        fobj.add(tobj);
        fobj.add(pobj);
        fobj.add(UserJLabel);
        fobj.add(PassJLabel);
        fobj.add(ResultLabel);

        fobj.setTitle(title);
        fobj.setSize(width,height);
        fobj.setVisible(true);
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


    }
   
}

class LoginFormXX
{
     public static void main(String[] args)
    {
        MarvellousLogin mobj = new MarvellousLogin("MarvellousLogin",400,300);
    }
}