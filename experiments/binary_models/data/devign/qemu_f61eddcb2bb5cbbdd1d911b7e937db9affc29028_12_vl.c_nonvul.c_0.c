static void FUN1(VAR1 *VAR2)
{
    const char *VAR3;
    VAR3 = FUN2(VAR2, "");
    if (VAR3)
    {
        if (!strcmp(VAR3, ""))
        {
            VAR4 = 1;
        }
        else if (!strcmp(VAR3, ""))
        {
            VAR4 = 0;
        }
        else
        {
            FUN3(VAR3, 0);
        }
    }
    VAR3 = FUN2(VAR2, "");
    if (VAR3)
    {
        if (!strcmp(VAR3, ""))
        {
            VAR5 = VAR6;
        }
        else if (!strcmp(VAR3, ""))
        {
            VAR5 = VAR7;
        }
        else if (!strcmp(VAR3, ""))
        {
            VAR5 = VAR8;
        }
        else
        {
            FUN4("", VAR3);
            FUN5(1);
        }
    }
    VAR3 = FUN2(VAR2, "");
    if (VAR3)
    {
        if (!strcmp(VAR3, ""))
        {
            static GlobalProperty VAR9[] = {{
                                                           .VAR10 = "",
                                                           .VAR11 = "",
                                                           .VAR3 = "",
                                                       },
                                                       {}};
            FUN6(VAR9);
        }
        else if (!strcmp(VAR3, ""))
        {
        }
        else
        {
            FUN4("", VAR3);
            FUN5(1);
        }
    }
}