static void FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    char *VAR8;
    VAR4 *VAR9 = NULL;
    VAR8 = VAR3 ? strtok(VAR3, "") : NULL;
    while (VAR8)
    {
        char *VAR10;
        if (VAR8[0] == '')
        {
            FUN3(VAR8 + 1, VAR11, &VAR9);
        }
        else if (VAR8[0] == '')
        {
            FUN3(VAR8 + 1, VAR12, &VAR9);
        }
        else if ((VAR10 = strchr(VAR8, '')))
        {
            *VAR10 = 0;
            VAR10++;
            FUN4(VAR8);
            if (!strcmp(VAR8, ""))
            {
                int64_t VAR13;
                char *VAR14;
                char VAR15[32];
                VAR13 = FUN5(VAR10, &VAR14, VAR16, 1000);
                if (VAR13 < 0 || *VAR14)
                {
                    FUN6(VAR5, "", VAR10);
                    return;
                }
                snprintf(VAR15, sizeof(VAR15), "" VAR17, VAR13);
                FUN7(FUN8(VAR7), VAR15, "", &VAR9);
            }
            else
            {
                FUN7(FUN8(VAR7), VAR10, VAR8, &VAR9);
            }
        }
        else
        {
            FUN4(VAR8);
            FUN7(FUN8(VAR7), "", VAR8, &VAR9);
        }
        if (VAR9)
        {
            FUN9(VAR5, VAR9);
            return;
        }
        VAR8 = strtok(NULL, "");
    }
}