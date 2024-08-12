#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
void FUN2(char * VAR8)
{
    {
        HANDLE VAR9;
        char * VAR10 = "";
        char * VAR11 = "";
        if (FUN3(
                    VAR10,
                    VAR11,
                    VAR8,
                    VAR12,
                    VAR13,
                    &VAR9) != 0)
        {
            FUN4(VAR9);
        }
        else
        {
        }
    }
}
void FUN5()
{
    char * VAR8;
    char VAR14[100] = "";
    VAR8 = VAR14;
    strcpy(VAR8, VAR4);
    FUN2(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}