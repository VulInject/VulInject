#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
int VAR8 = 1; 
int VAR9 = 0; 
void FUN2()
{
    char * VAR10;
    char VAR11[100] = "";
    VAR10 = VAR11;
    if(VAR8)
    {
        strcpy(VAR10, VAR4);
    }
    {
        HANDLE VAR12;
        char * VAR13 = "";
        char * VAR14 = "";
        if (FUN3(
                    VAR13,
                    VAR14,
                    VAR10,
                    VAR15,
                    VAR16,
                    &VAR12) != 0)
        {
            FUN4(VAR12);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}