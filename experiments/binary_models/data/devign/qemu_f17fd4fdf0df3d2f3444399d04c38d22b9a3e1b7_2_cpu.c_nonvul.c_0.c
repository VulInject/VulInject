static void FUN1(const char *typename, char *VAR1, VAR2 **VAR3)
{
    char *VAR4;
    static bool VAR5;
    bool VAR6 = false;
    if (VAR5)
    {
        return;
    }
    VAR5 = true;
    if (!VAR1)
    {
        return;
    }
    for (VAR4 = strtok(VAR1, ""); VAR4; VAR4 = strtok(NULL, ""))
    {
        const char *VAR7;
        const char *VAR8 = NULL;
        char *VAR9 = NULL;
        char VAR10[32];
        VAR11 *VAR12;
        if (VAR4[0] == '')
        {
            VAR13 = FUN2(VAR13, FUN3(VAR4 + 1));
            continue;
        }
        else if (VAR4[0] == '')
        {
            VAR14 = FUN2(VAR14, FUN3(VAR4 + 1));
            continue;
        }
        VAR9 = strchr(VAR4, '');
        if (VAR9)
        {
            *VAR9++ = 0;
            VAR8 = VAR9;
        }
        else
        {
            VAR8 = "";
        }
        FUN4(VAR4);
        VAR7 = VAR4;
        if (FUN5(VAR13, VAR7, VAR15))
        {
            FUN6(""
                         ""+%VAR16\""%VAR16=%VAR16\"",
                         VAR7, VAR7, VAR8);
            VAR6 = true;
        }
        if (FUN5(VAR14, VAR7, VAR15))
        {
            FUN6(""
                         ""-%VAR16\""%VAR16=%VAR16\"",
                         VAR7, VAR7, VAR8);
            VAR6 = true;
        }
        if (!strcmp(VAR7, ""))
        {
            int VAR17;
            int64_t VAR18;
            VAR17 = FUN7(VAR8, NULL, &VAR18);
            if (VAR17 < 0)
            {
                FUN8(VAR3, "", VAR8);
                return;
            }
            snprintf(VAR10, sizeof(VAR10), "" VAR19, VAR18);
            VAR8 = VAR10;
            VAR7 = "";
        }
        VAR12 = FUN9(FUN10(*VAR12), 1);
        VAR12->VAR20 = typename;
        VAR12->VAR21 = FUN3(VAR7);
        VAR12->VAR22 = FUN3(VAR8);
        VAR12->VAR3 = &VAR23;
        FUN11(VAR12);
    }
    if (VAR6)
    {
        FUN6(""
                     "");
    }
}