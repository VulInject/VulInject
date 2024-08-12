#VAR1 ""
#define VAR2 ""
#define GETENV getenv
#define GETENV getenv
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
void FUN2()
{
    char * VAR8;
    char VAR9[256] = "";
    VAR8 = VAR9;
    switch(6)
    {
    case 6:
    {
        size_t VAR10 = strlen(VAR8);
        char * VAR11 = FUN3(VAR2);
        if (VAR11 != NULL)
        {
            strncat(VAR8+VAR10, VAR11, 256-VAR10-1);
        }
    }
    break;
    default:
        break;
    }
    {
        VAR12* VAR13 = NULL;
        ULONG VAR14 = 0L;
        ULONG VAR15 = 0L;
        VAR16 *VAR17 = NULL;
        char VAR18[256];
        _snprintf(VAR18, 256-1, "", VAR8);
        VAR13 = FUN4("", VAR19);
        if (VAR13 == NULL)
        {
            FUN5(1);
        }
        VAR14 = FUN6(VAR13, NULL);
        if (VAR14 != VAR20)
        {
            FUN5(1);
        }
        VAR15 = FUN7(
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
                FUN8(VAR17);
            }
            FUN5(1);
        }
        if (VAR17 != NULL)
        {
            FUN8(VAR17);
        }
        FUN9(VAR13);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}