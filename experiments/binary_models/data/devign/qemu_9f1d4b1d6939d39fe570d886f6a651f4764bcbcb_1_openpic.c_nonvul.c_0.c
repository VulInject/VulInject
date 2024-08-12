static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10;
    FUN2("");
    FUN3(VAR5->VAR11[VAR12]);
    VAR10 = FUN4(VAR3, &VAR5->VAR13);
    FUN2("", VAR10);
    if (VAR10 == -1)
    {
        return VAR3->VAR14;
    }
    VAR8 = &VAR3->VAR8[VAR10];
    if (!(VAR8->VAR15 & VAR16) || !(FUN5(VAR8->VAR15) > VAR5->VAR17))
    {
        fprintf(VAR18, "", VAR19, VAR10, VAR5->VAR17, VAR8->VAR15);
        FUN6(VAR3, VAR10);
        VAR9 = VAR3->VAR14;
    }
    else
    {
        FUN7(&VAR5->VAR20, VAR10);
        VAR9 = FUN8(VAR3, VAR8->VAR15);
    }
    if (!VAR8->VAR21)
    {
        VAR8->VAR15 &= ~VAR16;
        VAR8->VAR22 = 0;
        FUN9(&VAR5->VAR13, VAR10);
    }
    if ((VAR10 >= VAR3->VAR23) && (VAR10 < (VAR3->VAR23 + VAR24)))
    {
        VAR8->VAR25 &= ~(1 << VAR6);
        if (VAR8->VAR25 && !VAR8->VAR21)
        {
            FUN10(VAR3, VAR10, 1);
            FUN10(VAR3, VAR10, 0);
            VAR8->VAR15 |= VAR16;
        }
    }
    return VAR9;
}