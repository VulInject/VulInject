static void FUN1(void)
{
    const struct VAR1 *VAR2;
    int VAR3;
    int VAR4;
    FUN2("" VAR5 ""
           "" VAR5 ""
           ""
           ""
           "");
    VAR3 = strlen("");
    VAR4 = strlen("");
    for (VAR2 = VAR6; VAR2->VAR7 != NULL; VAR2++)
    {
        int VAR8 = strlen(VAR2->argv);
        if (VAR2->VAR9)
        {
            VAR8 += strlen(VAR2->VAR10) + 1;
        }
        if (strlen(VAR2->VAR11) > VAR4)
        {
            VAR4 = strlen(VAR2->VAR11);
        }
        if (VAR8 > VAR3)
        {
            VAR3 = VAR8;
        }
    }
    FUN2("", VAR3 + 1, "", VAR4, "");
    for (VAR2 = VAR6; VAR2->VAR7 != NULL; VAR2++)
    {
        if (VAR2->VAR9)
        {
            FUN2("", VAR2->argv, (int)(VAR3 - strlen(VAR2->argv) - 1), VAR2->VAR10, VAR4, VAR2->VAR11, VAR2->VAR12);
        }
        else
        {
            FUN2("", VAR3, VAR2->argv, VAR4, VAR2->VAR11, VAR2->VAR12);
        }
    }
    FUN2(""
           ""
           ""
           "",
           VAR13, VAR14);
    FUN2(""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           ""
           "");
    FUN3(1);
}