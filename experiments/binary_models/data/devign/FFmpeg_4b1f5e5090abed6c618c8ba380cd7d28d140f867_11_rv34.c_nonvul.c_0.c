static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR9;
    int VAR10 = 0, VAR11;
    FUN2(&VAR9->VAR12);
    FUN3(VAR9);
    VAR9->VAR13 = 0;
    if (VAR14 && (VAR9->VAR2->VAR15 & VAR16))
        FUN4(&VAR9->VAR17->VAR18, VAR19, 0);
    if (VAR9->VAR20 == VAR21 || VAR9->VAR22)
    {
        if ((VAR11 = FUN5(VAR4, VAR9->VAR17->VAR23)) < 0)
            return VAR11;
        FUN6(VAR9, VAR9->VAR17);
        VAR10 = 1;
    }
    else if (VAR9->VAR24)
    {
        if ((VAR11 = FUN5(VAR4, VAR9->VAR24->VAR23)) < 0)
            return VAR11;
        FUN6(VAR9, VAR9->VAR24);
        VAR10 = 1;
    }
    return VAR10;
}