static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    char *VAR9, *VAR10, *VAR11;
    if (VAR3[0] == '')
    {
        VAR7->VAR12 = 1;
        return 0;
    }
    VAR10 = VAR3;
    if (VAR4 == 0)
    {
        while (!FUN2(*VAR10) && *VAR10 != '')
            VAR10++;
        while (FUN2(*VAR10))
            VAR10++;
        VAR7->VAR13 = FUN3(VAR10, &VAR11, 10);
        FUN4(NULL, "", VAR7->VAR13);
        if (VAR7->VAR13 >= 400 && VAR7->VAR13 < 600 && (VAR7->VAR13 != 401 || VAR7->VAR14.VAR15 != VAR16) && (VAR7->VAR13 != 407 || VAR7->VAR17.VAR15 != VAR16))
        {
            VAR11 += strspn(VAR11, VAR18);
            FUN5(VAR2, VAR19, "", VAR7->VAR13, VAR11);
            return -1;
        }
    }
    else
    {
        while (*VAR10 != '' && *VAR10 != '')
            VAR10++;
        if (*VAR10 != '')
            return 1;
        *VAR10 = '';
        VAR9 = VAR3;
        VAR10++;
        while (FUN2(*VAR10))
            VAR10++;
        if (!FUN6(VAR9, ""))
        {
            FUN7(VAR7->VAR20, VAR10, sizeof(VAR7->VAR20));
            *VAR5 = 1;
        }
        else if (!FUN6(VAR9, "") && VAR7->VAR21 == -1)
        {
            VAR7->VAR21 = FUN8(VAR10, NULL, 10);
        }
        else if (!FUN6(VAR9, ""))
        {
            const char *VAR22;
            if (!FUN9(VAR10, "", 6))
            {
                VAR10 += 6;
                VAR7->VAR23 = FUN8(VAR10, NULL, 10);
                if ((VAR22 = strchr(VAR10, '')) && strlen(VAR22) > 0)
                    VAR7->VAR21 = FUN8(VAR22 + 1, NULL, 10);
            }
            if (VAR7->VAR24 == -1 && (!VAR7->VAR25 || VAR7->VAR21 != 2147483647))
                VAR2->VAR26 = 0;
        }
        else if (!FUN6(VAR9, "") && !FUN9(VAR10, "", 5) && VAR7->VAR24 == -1)
        {
            VAR2->VAR26 = 0;
        }
        else if (!FUN6(VAR9, "") && !FUN10(VAR10, "", 7))
        {
            VAR7->VAR21 = -1;
            VAR7->VAR27 = 0;
        }
        else if (!FUN6(VAR9, ""))
        {
            FUN11(&VAR7->VAR14, VAR9, VAR10);
        }
        else if (!FUN6(VAR9, ""))
        {
            FUN11(&VAR7->VAR14, VAR9, VAR10);
        }
        else if (!FUN6(VAR9, ""))
        {
            FUN11(&VAR7->VAR17, VAR9, VAR10);
        }
        else if (!FUN6(VAR9, ""))
        {
            if (!strcmp(VAR10, ""))
                VAR7->VAR28 = 1;
        }
        else if (!FUN6(VAR9, "") && !FUN6(VAR10, ""))
        {
            VAR7->VAR25 = 1;
        }
        else if (!FUN6(VAR9, ""))
        {
            FUN12(VAR7->VAR29);
            VAR7->VAR29 = FUN13(VAR10);
        }
    }
    return 1;
}