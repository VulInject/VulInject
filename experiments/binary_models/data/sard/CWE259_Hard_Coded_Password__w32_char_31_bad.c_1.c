#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    char * VAR8;
    char VAR9[100] = "";
    VAR8 = VAR9;
    strcpy(VAR8, VAR4);
    {
        char * VAR10 = VAR8;
        char * VAR8 = VAR10;
        {
            HANDLE VAR11;
            char * VAR12 = "";
            char * VAR13 = "";
            if (FUN3(
                        VAR12,
                        VAR13,
                        VAR8,
                        VAR14,
                        VAR15,
                        &VAR11) != 0)
            {
                FUN4(VAR11);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}