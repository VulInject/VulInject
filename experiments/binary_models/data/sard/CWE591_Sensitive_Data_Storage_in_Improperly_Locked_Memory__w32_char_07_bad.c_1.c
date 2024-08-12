#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int VAR7 = 5;
void FUN2()
{
    char * VAR8;
    VAR8 = "";
    if(VAR7==5)
    {
        VAR8 = (char *)malloc(100*sizeof(char));
        if (VAR8 == NULL)
        {
            FUN3(1);
        }
        strcpy(VAR8, "");
    }
    {
        HANDLE VAR9;
        char * VAR10 = "";
        char * VAR11 = "";
        if (FUN4(
                    VAR10,
                    VAR11,
                    VAR8,
                    VAR12,
                    VAR13,
                    &VAR9) != 0)
        {
            FUN5(VAR9);
        }
        else
        {
        }
        free(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}