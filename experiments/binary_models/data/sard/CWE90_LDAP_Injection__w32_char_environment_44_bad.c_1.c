#VAR1 ""
#define VAR2 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
void FUN2(char * VAR8)
{
    {
        VAR9* VAR10 = NULL;
        ULONG VAR11 = 0L;
        ULONG VAR12 = 0L;
        VAR13 *VAR14 = NULL;
        char VAR15[256];
        _snprintf(VAR15, 256-1, "", VAR8);
        VAR10 = FUN3("", VAR16);
        if (VAR10 == NULL)
        {
            FUN4(1);
        }
        VAR11 = FUN5(VAR10, NULL);
        if (VAR11 != VAR17)
        {
            FUN4(1);
        }
        VAR12 = FUN6(
                            VAR10,
                            "",
                            VAR18,
                            VAR15,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR19,
                            VAR19,
                            &VAR14);
        if (VAR12 != VAR17)
        {
            if (VAR14 != NULL)
            {
                FUN7(VAR14);
            }
            FUN4(1);
        }
        if (VAR14 != NULL)
        {
            FUN7(VAR14);
        }
        FUN8(VAR10);
    }
}
void FUN9()
{
    char * VAR8;
    void (*VAR20) (char *) = VAR21;
    char VAR22[256] = "";
    VAR8 = VAR22;
    {
        size_t VAR23 = strlen(VAR8);
        char * VAR24 = FUN10(VAR2);
        if (VAR24 != NULL)
        {
            strncat(VAR8+VAR23, VAR24, 256-VAR23-1);
        }
    }
    FUN11(VAR8);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN12(NULL) );
    FUN9();
    return 0;
}