import java.util.Scanner;

class Main
{
    public static void main(String args[])
    {
        Scanner s = new Scanner(System.in);
        
        while (true)
        {    
            int senha = s.nextInt();

            if (senha == 2002)
            {
                System.out.println("Acesso Permitido");
                break;
            }

            System.out.println("Senha Invalida");
        }
    }
}