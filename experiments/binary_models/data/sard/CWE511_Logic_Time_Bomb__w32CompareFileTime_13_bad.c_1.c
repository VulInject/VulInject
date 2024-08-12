#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#VAR1 <VAR4.VAR3>
void FUN1()
{
    if(VAR5==5)
    {
        {
            SYSTEMTIME VAR6, VAR7;
            FILETIME VAR8, VAR9;
            VAR6.VAR10         = 2008; 
            VAR6.VAR11        = 1;    
            VAR6.VAR12    = 0;    
            VAR6.VAR13          = 1;    
            VAR6.VAR14         = 12;   
            VAR6.VAR15       = 0;    
            VAR6.VAR16       = 0;    
            VAR6.VAR17 = 0;    
            FUN2(&VAR7);
            FUN3(&VAR7, &VAR9);
            FUN3(&VAR6, &VAR8);
            if (FUN4(&VAR9, &VAR8) == 1)
            {
                FUN5("");
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}