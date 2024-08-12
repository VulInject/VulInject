static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    int VAR5;
    if (FUN3(&VAR4->VAR2, "", &VAR4->VAR6) == -1)
    {
        return -1;
    }
    if (FUN3(&VAR4->VAR2, "", &VAR4->VAR7) == -1)
    {
        return 1;
    }
    if (FUN3(&VAR4->VAR2, "", &VAR4->VAR2.VAR8) == -1)
    {
        return -1;
    }
    if (FUN3(&VAR4->VAR2, "", &VAR5) == -1)
    {
        VAR5 = 0;
    }
    if (VAR5 == 0)
    {
        FUN4(&VAR4->VAR2, 0, "");
        return -1;
    }
    VAR4->VAR9 = FUN5(VAR4->VAR2.VAR10, VAR4->VAR2.VAR11, VAR4->VAR6, VAR12 | VAR13);
    VAR4->VAR14 = FUN5(VAR4->VAR2.VAR10, VAR4->VAR2.VAR11, VAR4->VAR7, VAR12 | VAR13);
    if (!VAR4->VAR9 || !VAR4->VAR14)
    {
        return -1;
    }
    FUN6(&VAR4->VAR15, VAR4->VAR9, VAR16);
    FUN6(&VAR4->VAR17, VAR4->VAR14, VAR16);
    FUN7(&VAR4->VAR2);
    FUN4(&VAR4->VAR2, 1, ""
                                      "",
                  VAR4->VAR6, VAR4->VAR7, VAR4->VAR2.VAR8, VAR4->VAR2.VAR18);
    FUN8(VAR4);
    return 0;
}