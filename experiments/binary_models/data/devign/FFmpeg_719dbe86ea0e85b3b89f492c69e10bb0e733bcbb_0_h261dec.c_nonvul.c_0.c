static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    VAR4 *const VAR5 = &VAR2->VAR5;
    if (!VAR2->VAR6)
    {
        VAR3 = FUN2(&VAR5->VAR7, 15);
        if (VAR3)
            return -1;
        FUN3(&VAR5->VAR7, 16);
    }
    VAR2->VAR6 = 0;
    VAR2->VAR8 = FUN4(&VAR5->VAR7, 4);
    VAR5->VAR9 = FUN4(&VAR5->VAR7, 5);
    if (VAR5->VAR10 == 18)
    {
        if ((VAR2->VAR8 <= 0) || (VAR2->VAR8 > 12))
            return -1;
    }
    else
    {
        if ((VAR2->VAR8 != 1) && (VAR2->VAR8 != 3) && (VAR2->VAR8 != 5))
            return -1;
    }
    while (FUN5(&VAR5->VAR7) != 0)
    {
        FUN3(&VAR5->VAR7, 8);
        if (FUN6(&VAR5->VAR7) <= 0)
            return VAR11;
    }
    if (VAR5->VAR9 == 0)
    {
        FUN7(VAR5->VAR12, VAR13, "");
        if (VAR5->VAR12->VAR14 & (VAR15 | VAR16))
            return -1;
    }
    VAR2->VAR17 = 0;
    VAR2->VAR18 = 0;
    return 0;
}