#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
char * FUN2(char * VAR7)
{
    VAR7 = (char *)malloc(100*sizeof(char));
    if (VAR7 == NULL)
    {
        FUN3(1);
    }
    strcpy(VAR7, "");
    return VAR7;
}
void FUN4()
{
    char * VAR7;
    VAR7 = "";
    VAR7 = FUN2(VAR7);
    {
        HANDLE VAR8;
        char * VAR9 = "";
        char * VAR10 = "";
        if (FUN5(
                    VAR9,
                    VAR10,
                    VAR7,
                    VAR11,
                    VAR12,
                    &VAR8) != 0)
        {
            FUN6(VAR8);
        }
        else
        {
        }
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}