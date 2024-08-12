static int FUN1(VAR1 *VAR2, int VAR3, ...)
{
    int VAR4;
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7:
    {
        va_list VAR8;
        int VAR9;
        FUN2(VAR8, VAR3);
        VAR9 = FUN3(VAR8, int);
        FUN4(VAR8);
        FUN5("");
        if (VAR9 && FUN6(VAR2))
        {
            VAR9 = 0;
        }
        VAR2->VAR9 = VAR9;
        if (!VAR6->VAR10)
        {
            return 0;
        }
        FUN7(&VAR2->VAR11, VAR6->VAR12, VAR2->VAR13);
        VAR4 = VAR14;
        if (FUN8(VAR6->VAR15, VAR16, &VAR4) < 0)
        {
            FUN9(VAR17, "");
            return -1;
        }
    }
    break;
    case VAR18:
        if (VAR2->VAR9)
        {
            FUN10(VAR6->VAR15, NULL, NULL, NULL);
            VAR2->VAR9 = 0;
        }
        if (!VAR6->VAR10)
        {
            return 0;
        }
        FUN5("");
        VAR4 = 0;
        if (FUN8(VAR6->VAR15, VAR16, &VAR4) < 0)
        {
            FUN9(VAR17, "");
            return -1;
        }
        break;
    }
    return 0;
}