static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    if (VAR6->VAR13 >= VAR6->VAR14)
        return FUN2(VAR15);
    VAR11 = &VAR6->VAR16[VAR6->VAR13];
    FUN3(VAR9, VAR11->VAR17, VAR18);
    if ((VAR11->VAR19 == VAR6->VAR20) && (VAR6->VAR21 == VAR22))
    {
        VAR4->VAR23 = FUN4(VAR9);
        if (FUN5(VAR4, VAR11->VAR24))
            return FUN2(VAR25);
        FUN6(VAR9, VAR4->VAR26, VAR11->VAR24);
    }
    else
    {
        VAR12 = FUN7(VAR9, VAR4, VAR11->VAR24);
        if (VAR12 != VAR11->VAR24)
            VAR12 = FUN2(VAR15);
    }
    VAR4->VAR27 = VAR11->VAR19;
    VAR4->VAR28 = VAR11->VAR28;
    VAR6->VAR13++;
    return VAR12;
}