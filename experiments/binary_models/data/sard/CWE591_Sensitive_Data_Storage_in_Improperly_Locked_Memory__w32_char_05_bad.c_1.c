#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int VAR7 = 1; 
int VAR8 = 0; 
void FUN2()
{
    char * VAR9;
    VAR9 = "";
    if(VAR7)
    {
        VAR9 = (char *)malloc(100*sizeof(char));
        if (VAR9 == NULL)
        {
            FUN3(1);
        }
        strcpy(VAR9, "");
    }
    {
        HANDLE VAR10;
        char * VAR11 = "";
        char * VAR12 = "";
        if (FUN4(
                    VAR11,
                    VAR12,
                    VAR9,
                    VAR13,
                    VAR14,
                    &VAR10) != 0)
        {
            FUN5(VAR10);
        }
        else
        {
        }
        free(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}