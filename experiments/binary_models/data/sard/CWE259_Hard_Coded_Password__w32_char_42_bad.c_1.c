#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#VAR1 <VAR5.VAR3>
#VAR6 FUN1(VAR7, "")
char * FUN2(char * VAR8)
{
    strcpy(VAR8, VAR4);
    return VAR8;
}
void FUN3()
{
    char * VAR8;
    char VAR9[100] = "";
    VAR8 = VAR9;
    VAR8 = FUN2(VAR8);
    {
        HANDLE VAR10;
        char * VAR11 = "";
        char * VAR12 = "";
        if (FUN4(
                    VAR11,
                    VAR12,
                    VAR8,
                    VAR13,
                    VAR14,
                    &VAR10) != 0)
        {
            FUN5(VAR10);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}