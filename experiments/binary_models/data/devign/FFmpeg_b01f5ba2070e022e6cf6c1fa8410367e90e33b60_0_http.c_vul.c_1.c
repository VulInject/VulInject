static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    char *VAR9, *VAR10, *VAR11;
    if (VAR3[0] == '')
        return 0;
    VAR10 = VAR3;
    if (VAR4 == 0)
    {
        while (!FUN2(*VAR10) && *VAR10 != '')
            VAR10++;
        while (FUN2(*VAR10))
            VAR10++;
        VAR7->VAR12 = FUN3(VAR10, &VAR11, 10);
        FUN4(NULL, "", VAR7->VAR12);
        if (VAR7->VAR12 >= 400 && VAR7->VAR12 < 600 && VAR7->VAR12 != 401)
        {
            VAR11 += strspn(VAR11, VAR13);
            FUN5(VAR2, VAR14, "", VAR7->VAR12, VAR11);
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
            strcpy(VAR7->VAR15, VAR10);
            *VAR5 = 1;
        }
        else if (!FUN6(VAR9, "") && VAR7->VAR16 == -1)
        {
            VAR7->VAR16 = FUN7(VAR10);
        }
        else if (!FUN6(VAR9, ""))
        {
            const char *VAR17;
            if (!FUN8(VAR10, "", 6))
            {
                VAR10 += 6;
                VAR7->VAR18 = FUN7(VAR10);
                if ((VAR17 = strchr(VAR10, '')) && strlen(VAR17) > 0)
                    VAR7->VAR16 = FUN7(VAR17 + 1);
            }
            VAR2->VAR19 = 0;
        }
        else if (!FUN6(VAR9, "") && !FUN8(VAR10, "", 5))
        {
            VAR2->VAR19 = 0;
        }
        else if (!FUN6(VAR9, "") && !FUN9(VAR10, "", 7))
        {
            VAR7->VAR16 = -1;
            VAR7->VAR20 = 0;
        }
        else if (!FUN6(VAR9, ""))
        {
            FUN10(&VAR7->VAR21, VAR9, VAR10);
        }
        else if (!FUN6(VAR9, ""))
        {
            FUN10(&VAR7->VAR21, VAR9, VAR10);
        }
        else if (!FUN6(VAR9, ""))
        {
            if (!strcmp(VAR10, ""))
                VAR7->VAR22 = 1;
        }
    }
    return 1;
}