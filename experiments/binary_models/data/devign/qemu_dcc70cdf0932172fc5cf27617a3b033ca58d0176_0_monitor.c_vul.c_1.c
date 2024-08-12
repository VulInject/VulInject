static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    const char *VAR4;
    char *VAR5[VAR6];
    int VAR7, VAR8, VAR9;
    const char *VAR10, *VAR11;
    const VAR12 *VAR13;
    MonitorBlockComplete VAR14;
    FUN2(VAR3, &VAR7, VAR5);
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        FUN3(VAR2, "", VAR8, VAR5[VAR8]);
    }
    VAR9 = strlen(VAR3);
    if (VAR9 > 0 && FUN4(VAR3[VAR9 - 1]))
    {
        if (VAR7 >= VAR6)
        {
            goto VAR15;
        }
        VAR5[VAR7++] = FUN5("");
    }
    if (VAR7 <= 1)
    {
        if (VAR7 == 0)
            VAR4 = "";
        else
            VAR4 = VAR5[0];
        FUN6(VAR2->VAR16, strlen(VAR4));
        for (VAR13 = VAR2->VAR17; VAR13->VAR18 != NULL; VAR13++)
        {
            FUN7(VAR2, VAR4, VAR13->VAR18);
        }
    }
    else
    {
        for (VAR13 = VAR2->VAR17; VAR13->VAR18 != NULL; VAR13++)
        {
            if (FUN8(VAR5[0], VAR13->VAR18))
            {
                break;
            }
        }
        if (!VAR13->VAR18)
        {
            goto VAR15;
        }
        VAR10 = FUN9(VAR13->VAR19);
        for (VAR8 = 0; VAR8 < VAR7 - 2; VAR8++)
        {
            if (*VAR10 != '')
            {
                VAR10 = FUN9(VAR10);
                while (*VAR10 == '')
                    VAR10 = FUN9(VAR10);
            }
        }
        VAR11 = VAR5[VAR7 - 1];
        if (*VAR10 == '' && VAR10[1] != '')
        {
            VAR10 = FUN9(VAR10);
        }
        switch (*VAR10)
        {
        case '':
            FUN6(VAR2->VAR16, strlen(VAR11));
            FUN10(VAR2, VAR11);
            break;
        case '':
            VAR14.VAR2 = VAR2;
            VAR14.VAR20 = VAR11;
            FUN6(VAR2->VAR16, strlen(VAR11));
            FUN11(VAR21, &VAR14);
            break;
        case '':
            if (!strcmp(VAR13->VAR18, ""))
            {
                FUN6(VAR2->VAR16, strlen(VAR11));
                for (VAR13 = VAR22; VAR13->VAR18 != NULL; VAR13++)
                {
                    FUN7(VAR2, VAR11, VAR13->VAR18);
                }
            }
            else if (!strcmp(VAR13->VAR18, ""))
            {
                char *VAR23 = strrchr(VAR11, '');
                if (VAR23)
                    VAR11 = VAR23 + 1;
                FUN6(VAR2->VAR16, strlen(VAR11));
                for (VAR8 = 0; VAR8 < VAR24; VAR8++)
                {
                    FUN7(VAR2, VAR11, VAR25[VAR8]);
                }
            }
            else if (!strcmp(VAR13->VAR18, ""))
            {
                FUN6(VAR2->VAR16, strlen(VAR11));
                for (VAR13 = VAR2->VAR17; VAR13->VAR18 != NULL; VAR13++)
                {
                    FUN7(VAR2, VAR11, VAR13->VAR18);
                }
            }
            break;
        default:
            break;
        }
    }
VAR15:
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        FUN12(VAR5[VAR8]);
    }
}