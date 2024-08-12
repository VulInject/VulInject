static int FUN1(char *VAR1, char *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR6 *VAR7)
{
    VAR8 **VAR9 = NULL;
    VAR8 **VAR10;
    int VAR11, VAR12 = 0;
    char VAR13, VAR14;
    const char *VAR15 = NULL, *VAR16 = NULL;
    int VAR17 = 0, VAR18 = 0;
    FUN2(VAR2, &VAR13, &VAR17, &VAR15);
    FUN2(VAR1, &VAR14, &VAR18, &VAR16);
    if (VAR13 == '' || VAR14 == '')
        VAR7->VAR19 = 1;
    if (VAR13 == '' || VAR14 == '')
        VAR7->VAR20 = 1;
    if (VAR13 == '' || VAR14 == '')
        VAR7->VAR21 = 1;
    if ((VAR22) < 0 || (VAR22) >= (VAR23))
    {
        FUN3(NULL, VAR24, "", (VAR25), (VAR22));
        FUN4(1);
    }
    switch (VAR26)
    {
    case '':
        VAR27 = &VAR28->VAR29;
        break;
    case '':
        FUN5(VAR22, VAR28->VAR30, "")
        VAR27 = &VAR28->VAR31[VAR22]->VAR29;
        break;
    case '':
        FUN5(VAR22, VAR28->VAR32, "")
        VAR27 = &VAR28->VAR33[VAR22]->VAR29;
        break;
    }
    FUN6(VAR13, VAR9, VAR5, VAR17);
    FUN6(VAR14, VAR10, VAR4, VAR18);
    if (VAR13 == '')
    {
        for (VAR11 = 0; VAR11 < VAR5->VAR34; VAR11++)
        {
            if ((VAR12 = FUN7(VAR5, VAR5->VAR35[VAR11], VAR15)) > 0)
            {
                VAR9 = &VAR5->VAR35[VAR11]->VAR29;
                break;
            }
            else if (VAR12 < 0)
                FUN4(1);
        }
        if (!VAR9)
        {
            FUN3(NULL, VAR24, "", VAR15);
            FUN4(1);
        }
    }
    if (VAR14 == '')
    {
        for (VAR11 = 0; VAR11 < VAR4->VAR34; VAR11++)
        {
            if ((VAR12 = FUN7(VAR4, VAR4->VAR35[VAR11], VAR16)) > 0)
            {
                VAR10 = &VAR4->VAR35[VAR11]->VAR29;
                FUN8(VAR10, *VAR9, VAR36);
            }
            else if (VAR12 < 0)
                FUN4(1);
        }
    }
    else
        FUN8(VAR10, *VAR9, VAR36);
    return 0;