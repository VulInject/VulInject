#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    char * VAR7;
    VAR7 = "";
    while(1)
    {
        VAR7 = (char *)malloc(100*sizeof(char));
        if (VAR7 == NULL)
        {
            FUN3(1);
        }
        strcpy(VAR7, "");
        break;
    }
    {
        HANDLE VAR8;
        char * VAR9 = "";
        char * VAR10 = "";
        if (FUN4(
                    VAR9,
                    VAR10,
                    VAR7,
                    VAR11,
                    VAR12,
                    &VAR8) != 0)
        {
            FUN5(VAR8);
        }
        else
        {
        }
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}