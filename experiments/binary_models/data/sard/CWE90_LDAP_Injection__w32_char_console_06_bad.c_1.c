#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
static const int VAR7 = 5;
void FUN2()
{
    char * VAR8;
    char VAR9[256] = "";
    VAR8 = VAR9;
    if(VAR7==5)
    {
        {
            size_t VAR10 = strlen(VAR8);
            if (256-VAR10 > 1)
            {
                if (fgets(VAR8+VAR10, (int)(256-VAR10), stdin) != NULL)
                {
                    VAR10 = strlen(VAR8);
                    if (VAR10 > 0 && VAR8[VAR10-1] == '')
                    {
                        VAR8[VAR10-1] = '';
                    }
                }
                else
                {
                    VAR8[VAR10] = '';
                }
            }
        }
    }
    {
        VAR11* VAR12 = NULL;
        ULONG VAR13 = 0L;
        ULONG VAR14 = 0L;
        VAR15 *VAR16 = NULL;
        char VAR17[256];
        _snprintf(VAR17, 256-1, "", VAR8);
        VAR12 = FUN3("", VAR18);
        if (VAR12 == NULL)
        {
            FUN4(1);
        }
        VAR13 = FUN5(VAR12, NULL);
        if (VAR13 != VAR19)
        {
            FUN4(1);
        }
        VAR14 = FUN6(
                            VAR12,
                            "",
                            VAR20,
                            VAR17,
                            NULL,
                            0,
                            NULL,
                            NULL,
                            VAR21,
                            VAR21,
                            &VAR16);
        if (VAR14 != VAR19)
        {
            if (VAR16 != NULL)
            {
                FUN7(VAR16);
            }
            FUN4(1);
        }
        if (VAR16 != NULL)
        {
            FUN7(VAR16);
        }
        FUN8(VAR12);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN2();
    return 0;
}