#VAR1 ""
#define VAR2 ""
#define VAR2 ""
#VAR1 <VAR3.VAR4>
#VAR1 <VAR5.VAR4>
#VAR6 FUN1(VAR7, "")
int VAR8 = 1; 
int VAR9 = 0; 
void FUN2()
{
    char * VAR10;
    char VAR11[256] = "";
    VAR10 = VAR11;
    if(VAR8)
    {
        {
            size_t VAR12 = strlen(VAR10);
            VAR13 * VAR14;
            if (256-VAR12 > 1)
            {
                VAR14 = fopen(VAR2, "");
                if (VAR14 != NULL)
                {
                    if (fgets(VAR10+VAR12, (int)(256-VAR12), VAR14) == NULL)
                    {
                        VAR10[VAR12] = '';
                    }
                    fclose(VAR14);
                }
            }
        }
    }
    {
        VAR15* VAR16 = NULL;
        ULONG VAR17 = 0L;
        ULONG VAR18 = 0L;
        VAR19 *VAR20 = NULL;
        char VAR21[256];
        _snprintf(VAR21, 256-1, "", VAR10);
        VAR16 = FUN3("", VAR22);
        if (VAR16 == NULL)
        {
            FUN4(1);
        }
        VAR17 = FUN5(VAR16, NULL);
        if (VAR17 != VAR23)
        {
            FUN4(1);
        }
        VAR18 = FUN6(
                            VAR16,
                            "",
                            VAR24,
                            VAR21,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR25,
                            VAR25,
                            &VAR20);
        if (VAR18 != VAR23)
        {
            if (VAR20 != NULL)
            {
                FUN7(VAR20);
            }
            FUN4(1);
        }
        if (VAR20 != NULL)
        {
            FUN7(VAR20);
        }
        FUN8(VAR16);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}