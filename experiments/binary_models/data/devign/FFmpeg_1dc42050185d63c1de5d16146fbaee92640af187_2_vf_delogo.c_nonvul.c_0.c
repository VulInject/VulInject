static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5 = VAR2->VAR6->VAR7[0];
    VAR3 *VAR8 = NULL, *VAR9;
    int VAR10 = 0;
    if (VAR4->VAR11 & VAR12)
    {
        VAR8 = FUN2(VAR5, VAR13, VAR5->VAR14, VAR5->VAR15);
        if (!VAR8)
            return FUN3(VAR16);
        FUN4(VAR8, VAR4);
        VAR8->VAR17->VAR14 = VAR5->VAR14;
        VAR8->VAR17->VAR15 = VAR5->VAR15;
    }
    else
    {
        VAR8 = FUN5(VAR4, ~0);
        if (!VAR8)
            return FUN3(VAR16);
    }
    VAR9 = FUN5(VAR8, ~0);
    if (VAR9)
        VAR10 = FUN6(VAR5, VAR9);
    else
        VAR10 = FUN3(VAR16);
    if (VAR10 < 0)
    {
        FUN7(&VAR8);
        return VAR10;
    }
    VAR5->VAR18 = VAR8;
    return 0;
}