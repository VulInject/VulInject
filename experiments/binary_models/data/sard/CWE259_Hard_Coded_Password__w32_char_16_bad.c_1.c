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
    while(1)
    {
        strcpy(VAR8, VAR4);
        break;
    }
    {
        HANDLE VAR10;
        char * VAR11 = "";
        char * VAR12 = "";
        if (FUN3(
                    VAR11,
                    VAR12,
                    VAR8,
                    VAR13,
                    VAR14,
                    &VAR10) != 0)
        {
            FUN4(VAR10);
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