#VAR1 ""
#define UNLINK _unlink
#VAR1 <VAR2.VAR3>
#define UNLINK unlink
#VAR1 <VAR4.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
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
            FUN4(&VAR6);
            FUN5(&VAR6, &VAR8);
            FUN5(&VAR5, &VAR7);
            if (FUN6(&VAR8, &VAR7) == 1)
            {
                FUN7("");
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN3();
    return 0;
}