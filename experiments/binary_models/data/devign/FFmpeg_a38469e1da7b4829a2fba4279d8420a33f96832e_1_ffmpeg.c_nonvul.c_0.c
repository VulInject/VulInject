void FUN1(void)
{
    const char *VAR1;
    const VAR2 *VAR3;
    int VAR4, VAR5;
    VAR1 = VAR6 ? "" : "";
    FUN2("" VAR7 "", VAR1);
    if (!VAR6)
    {
        FUN2(""
               "");
    }
    else
    {
        FUN2(""
               "");
    }
    FUN2(""
           "");
    for (VAR4 = 0; VAR4 < 2; VAR4++)
    {
        if (VAR4 == 1)
            FUN2("");
        for (VAR3 = VAR8; VAR3->VAR9 != NULL; VAR3++)
        {
            char VAR10[64];
            VAR5 = (VAR3->VAR11 & VAR12) != 0;
            if (VAR5 == VAR4)
            {
                strcpy(VAR10, VAR3->VAR9);
                if (VAR3->VAR11 & VAR13)
                {
                    strcat(VAR10, "");
                    strcat(VAR10, VAR3->VAR14);
                }
                FUN2("", VAR10, VAR3->VAR15);
            }
        }
    }
    FUN3(1);
}