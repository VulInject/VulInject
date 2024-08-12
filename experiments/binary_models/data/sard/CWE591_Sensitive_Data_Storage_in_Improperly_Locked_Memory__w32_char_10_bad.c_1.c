#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    char * VAR7;
    VAR7 = "";
    if(VAR8)
    {
        VAR7 = (char *)malloc(100*sizeof(char));
        if (VAR7 == NULL)
        {
            FUN3(1);
        }
        strcpy(VAR7, "");
    }
    {
        HANDLE VAR9;
        char * VAR10 = "";
        char * VAR11 = "";
        if (FUN4(
                    VAR10,
                    VAR11,
                    VAR7,
                    VAR12,
                    VAR13,
                    &VAR9) != 0)
        {
            FUN5(VAR9);
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