static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    struct VAR9 *VAR10;
    VAR7 = FUN2(VAR2);
    if (VAR7 <= 0)
    {
        FUN3(""
              "",
              VAR7);
        return -1;
    }
    VAR10 = FUN4("", VAR7, sizeof(*VAR10));
    if (!VAR10)
    {
        FUN3("");
        return -1;
    }
    VAR8 = FUN5(VAR2, VAR10, VAR7);
    if (VAR8 < 0)
    {
        FUN6(VAR8, ""
                         "");
        FUN7(VAR10);
        return -1;
    }
    for (VAR6 = 0; VAR6 < VAR7; ++VAR6)
    {
        if (VAR10[VAR6].VAR11 & VAR12)
        {
            VAR8 = FUN8(VAR10[VAR6].VAR13, VAR14, NULL, VAR4);
        }
        if (VAR10[VAR6].VAR11 & VAR15)
        {
            if (VAR16.VAR17)
            {
                FUN3("", VAR6, VAR10[VAR6].VAR13);
            }
            VAR8 = FUN8(VAR10[VAR6].VAR13, NULL, VAR14, VAR4);
        }
        if (VAR16.VAR17)
        {
            FUN3("", VAR10[VAR6].VAR11, VAR6, VAR10[VAR6].VAR13, VAR8);
        }
        if (VAR8)
        {
            FUN3("", VAR10[VAR6].VAR11, VAR6, VAR10[VAR6].VAR13, VAR8);
            while (VAR6--)
            {
                FUN8(VAR10[VAR6].VAR13, NULL, NULL, NULL);
            }
            FUN7(VAR10);
            return -1;
        }
    }
    VAR4->VAR10 = VAR10;
    VAR4->VAR7 = VAR7;
    VAR4->VAR2 = VAR2;
    VAR4->VAR5 = VAR5;
    return 0;
}