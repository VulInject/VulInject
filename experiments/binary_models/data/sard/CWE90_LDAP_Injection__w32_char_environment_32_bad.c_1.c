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
    char * *VAR9 = &VAR8;
    char * *VAR10 = &VAR8;
    char VAR11[256] = "";
    VAR8 = VAR11;
    {
        char * VAR8 = *VAR9;
        {
            size_t VAR12 = strlen(VAR8);
            char * VAR13 = FUN3(VAR2);
            if (VAR13 != NULL)
            {
                strncat(VAR8+VAR12, VAR13, 256-VAR12-1);
            }
        }
        *VAR9 = VAR8;
    }
    {
        char * VAR8 = *VAR10;
        {
            VAR14* VAR15 = NULL;
            ULONG VAR16 = 0L;
            ULONG VAR17 = 0L;
            VAR18 *VAR19 = NULL;
            char VAR20[256];
            _snprintf(VAR20, 256-1, "", VAR8);
            VAR15 = FUN4("", VAR21);
            if (VAR15 == NULL)
            {
                FUN5(1);
            }
            VAR16 = FUN6(VAR15, NULL);
            if (VAR16 != VAR22)
            {
                FUN5(1);
            }
            VAR17 = FUN7(
                                VAR15,
                                "",
                                VAR23,
                                VAR20,
                                NULL,
                                0,
                                NULL,
                                NULL,
                                VAR24,
                                VAR24,
                                &VAR19);
            if (VAR17 != VAR22)
            {
                if (VAR19 != NULL)
                {
                    FUN8(VAR19);
                }
                FUN5(1);
            }
            if (VAR19 != NULL)
            {
                FUN8(VAR19);
            }
            FUN9(VAR15);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN10(NULL) );
    FUN2();
    return 0;
}