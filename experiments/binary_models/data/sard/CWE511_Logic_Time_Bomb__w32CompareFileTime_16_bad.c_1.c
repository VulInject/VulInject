#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#VAR1 <VAR4.VAR3>
void FUN1()
{
    while(1)
    {
        {
            SYSTEMTIME VAR5, VAR6;
            FILETIME VAR7, VAR8;
            VAR5.VAR9         = 2008; 
            VAR5.VAR10        = 1;    
            VAR5.VAR11    = 0;    
            VAR5.VAR12          = 1;    
            VAR5.VAR13         = 12;   
            VAR5.VAR14       = 0;    
            VAR5.VAR15       = 0;    
            VAR5.VAR16 = 0;    
            FUN2(&VAR6);
            FUN3(&VAR6, &VAR8);
            FUN3(&VAR5, &VAR7);
            if (FUN4(&VAR8, &VAR7) == 1)
            {
                FUN5("");
            }
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}