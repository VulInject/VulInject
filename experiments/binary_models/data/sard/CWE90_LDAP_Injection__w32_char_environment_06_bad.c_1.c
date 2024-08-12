#VAR1 ""
#define VAR2 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
static const int VAR8 = 5;
void FUN2()
{
    char * VAR9;
    char VAR10[256] = "";
    VAR9 = VAR10;
    if(VAR8==5)
    {
        {
            size_t VAR11 = strlen(VAR9);
            char * VAR12 = FUN3(VAR2);
            if (VAR12 != NULL)
            {
                strncat(VAR9+VAR11, VAR12, 256-VAR11-1);
            }
        }
    }
    {
        VAR13* VAR14 = NULL;
        ULONG VAR15 = 0L;
        ULONG VAR16 = 0L;
        VAR17 *VAR18 = NULL;
        char VAR19[256];
        _snprintf(VAR19, 256-1, "", VAR9);
        VAR14 = FUN4("", VAR20);
        if (VAR14 == NULL)
        {
            FUN5(1);
        }
        VAR15 = FUN6(VAR14, NULL);
        if (VAR15 != VAR21)
        {
            FUN5(1);
        }
        VAR16 = FUN7(
                            VAR14,
                            "",
                            VAR22,
                            VAR19,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR23,
                            VAR23,
                            &VAR18);
        if (VAR16 != VAR21)
        {
            if (VAR18 != NULL)
            {
                FUN8(VAR18);
            }
            FUN5(1);
        }
        if (VAR18 != NULL)
        {
            FUN8(VAR18);
        }
        FUN9(VAR14);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}