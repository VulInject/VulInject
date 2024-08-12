#VAR1 ""
#define VAR2 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    char * VAR8;
    char VAR9[256] = "";
    VAR8 = VAR9;
    if(FUN2())
    {
        {
            size_t VAR10 = strlen(VAR8);
            char * VAR11 = FUN5(VAR2);
            if (VAR11 != NULL)
            {
                strncat(VAR8+VAR10, VAR11, 256-VAR10-1);
            }
        }
    }
    {
        VAR12* VAR13 = NULL;
        ULONG VAR14 = 0L;
        ULONG VAR15 = 0L;
        VAR16 *VAR17 = NULL;
        char VAR18[256];
        _snprintf(VAR18, 256-1, "", VAR8);
        VAR13 = FUN6("", VAR19);
        if (VAR13 == NULL)
        {
            FUN7(1);
        }
        VAR14 = FUN8(VAR13, NULL);
        if (VAR14 != VAR20)
        {
            FUN7(1);
        }
        VAR15 = FUN9(
                            VAR13,
                            "",
                            VAR21,
                            VAR18,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR22,
                            VAR22,
                            &VAR17);
        if (VAR15 != VAR20)
        {
            if (VAR17 != NULL)
            {
                FUN10(VAR17);
            }
            FUN7(1);
        }
        if (VAR17 != NULL)
        {
            FUN10(VAR17);
        }
        FUN11(VAR13);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN12(NULL) );
    FUN4();
    return 0;
}