static void FUN1(const char *VAR1)
{
    const char *VAR2;
    char *VAR3[VAR4];
    int VAR5, VAR6, VAR7;
    const char *VAR8, *VAR9;
    const VAR10 *VAR11;
    const VAR12 *VAR13;
    FUN2(VAR1, &VAR5, VAR3);
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        FUN3(VAR14, "", VAR6, (char *)VAR3[VAR6]);
    }
    VAR7 = strlen(VAR1);
    if (VAR7 > 0 && FUN4(VAR1[VAR7 - 1]))
    {
        if (VAR5 >= VAR4)
            return;
        VAR3[VAR5++] = FUN5("");
    }
    if (VAR5 <= 1)
    {
        if (VAR5 == 0)
            VAR2 = "";
        else
            VAR2 = VAR3[0];
        FUN6(VAR14->VAR15, strlen(VAR2));
        for (VAR11 = VAR16; VAR11->VAR17 != NULL; VAR11++)
        {
            FUN7(VAR2, VAR11->VAR17);
        }
    }
    else
    {
        for (VAR11 = VAR16; VAR11->VAR17 != NULL; VAR11++)
        {
            if (FUN8(VAR3[0], VAR11->VAR17))
                goto VAR18;
        }
        return;
    VAR18:
        VAR8 = FUN9(VAR11->VAR19);
        for (VAR6 = 0; VAR6 < VAR5 - 2; VAR6++)
        {
            if (*VAR8 != '')
            {
                VAR8 = FUN9(VAR8);
                while (*VAR8 == '')
                    VAR8 = FUN9(VAR8);
            }
        }
        VAR9 = VAR3[VAR5 - 1];
        if (*VAR8 == '' && VAR8[1] != '')
        {
            VAR8 += 2;
        }
        switch (*VAR8)
        {
        case '':
            FUN6(VAR14->VAR15, strlen(VAR9));
            FUN10(VAR9);
            break;
        case '':
            FUN6(VAR14->VAR15, strlen(VAR9));
            FUN11(VAR20, (void *)VAR9);
            break;
        case '':
            if (!strcmp(VAR11->VAR17, ""))
            {
                FUN6(VAR14->VAR15, strlen(VAR9));
                for (VAR11 = VAR21; VAR11->VAR17 != NULL; VAR11++)
                {
                    FUN7(VAR9, VAR11->VAR17);
                }
            }
            else if (!strcmp(VAR11->VAR17, ""))
            {
                char *VAR22 = strrchr(VAR9, '');
                if (VAR22)
                    VAR9 = VAR22 + 1;
                FUN6(VAR14->VAR15, strlen(VAR9));
                for (VAR13 = VAR23; VAR13->VAR17 != NULL; VAR13++)
                {
                    FUN7(VAR9, VAR13->VAR17);
                }
            }
            else if (!strcmp(VAR11->VAR17, ""))
            {
                FUN6(VAR14->VAR15, strlen(VAR9));
                for (VAR11 = VAR16; VAR11->VAR17 != NULL; VAR11++)
                {
                    FUN7(VAR9, VAR11->VAR17);
                }
            }
            break;
        default:
            break;
        }
    }
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
        FUN12(VAR3[VAR6]);
}