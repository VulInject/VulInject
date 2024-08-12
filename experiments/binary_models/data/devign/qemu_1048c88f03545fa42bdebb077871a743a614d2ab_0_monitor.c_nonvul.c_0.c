static void FUN1(const char *VAR1)
{
    const char *VAR2;
    char *VAR3[VAR4];
    int VAR5, VAR6, VAR7;
    const char *VAR8, *VAR9;
    const VAR10 *VAR11;
    FUN2(VAR1, &VAR5, VAR3);
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        FUN3(VAR12, "", VAR6, (char *)VAR3[VAR6]);
    }
    VAR7 = strlen(VAR1);
    if (VAR7 > 0 && FUN4(VAR1[VAR7 - 1]))
    {
        if (VAR5 >= VAR4)
        {
            goto VAR13;
        }
        VAR3[VAR5++] = FUN5("");
    }
    if (VAR5 <= 1)
    {
        if (VAR5 == 0)
            VAR2 = "";
        else
            VAR2 = VAR3[0];
        FUN6(VAR12->VAR14, strlen(VAR2));
        for (VAR11 = VAR15; VAR11->VAR16 != NULL; VAR11++)
        {
            FUN7(VAR2, VAR11->VAR16);
        }
    }
    else
    {
        for (VAR11 = VAR15; VAR11->VAR16 != NULL; VAR11++)
        {
            if (FUN8(VAR3[0], VAR11->VAR16))
            {
                break;
            }
        }
        if (!VAR11->VAR16)
        {
            goto VAR13;
        }
        VAR8 = FUN9(VAR11->VAR17);
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
            VAR8 = FUN9(VAR8);
        }
        switch (*VAR8)
        {
        case '':
            FUN6(VAR12->VAR14, strlen(VAR9));
            FUN10(VAR9);
            break;
        case '':
            FUN6(VAR12->VAR14, strlen(VAR9));
            FUN11(VAR18, (void *)VAR9);
            break;
        case '':
            if (!strcmp(VAR11->VAR16, ""))
            {
                FUN6(VAR12->VAR14, strlen(VAR9));
                for (VAR11 = VAR19; VAR11->VAR16 != NULL; VAR11++)
                {
                    FUN7(VAR9, VAR11->VAR16);
                }
            }
            else if (!strcmp(VAR11->VAR16, ""))
            {
                char *VAR20 = strrchr(VAR9, '');
                if (VAR20)
                    VAR9 = VAR20 + 1;
                FUN6(VAR12->VAR14, strlen(VAR9));
                for (VAR6 = 0; VAR6 < VAR21; VAR6++)
                {
                    FUN7(VAR9, VAR22[VAR6]);
                }
            }
            else if (!strcmp(VAR11->VAR16, ""))
            {
                FUN6(VAR12->VAR14, strlen(VAR9));
                for (VAR11 = VAR15; VAR11->VAR16 != NULL; VAR11++)
                {
                    FUN7(VAR9, VAR11->VAR16);
                }
            }
            break;
        default:
            break;
        }
    }
VAR13:
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        FUN12(VAR3[VAR6]);
    }
}