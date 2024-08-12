int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    if (FUN2(VAR4, VAR8) != VAR9)
    {
        FUN3(VAR2, VAR10 + VAR7, "");
        return VAR11;
    }
    VAR6->VAR12 = FUN2(VAR4, VAR13);
    VAR6->VAR14 = FUN2(VAR4, VAR15);
    if (VAR6->VAR12 & VAR16)
    {
        VAR6->VAR17 = FUN2(VAR4, VAR18) + 1;
        FUN4(VAR4, 2);
    }
    else
    {
        VAR6->VAR17 = 0;
    }
    if (VAR6->VAR12 & VAR19)
    {
        FUN5(VAR6, VAR4);
        if (FUN2(VAR4, 6))
            FUN4(VAR4, 25);
        FUN6(VAR4);
    }
    if (VAR6->VAR12 & VAR20)
        return VAR11;
    FUN4(VAR4, 24);
    return 0;
}