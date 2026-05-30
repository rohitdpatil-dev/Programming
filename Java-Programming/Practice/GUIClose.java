import javax.swing.*;


class GUIClose
{
    public static void main(String[] args)
    {
        JFrame fobj = new JFrame("Marvelloues PPA");

        fobj.setSize(400,300);
        
        fobj.setVisible(true);

        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}