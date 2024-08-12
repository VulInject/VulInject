static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = (VAR4 == VAR6);
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR2->VAR10.VAR11);
    BlockErrorAction VAR12 = FUN3(VAR8->VAR13, VAR5);
    if (VAR12 == VAR14)
    {
        FUN4(VAR8->VAR13, VAR15, VAR5);
        return 0;
    }
    if ((VAR3 == VAR16 && VAR12 == VAR17) || VAR12 == VAR18)
    {
        VAR4 &= VAR19;
        VAR2->VAR20 |= VAR21 | VAR4;
        FUN4(VAR8->VAR13, VAR22, VAR5);
        FUN5(VAR23);
    }
    else
    {
        if (VAR4 == VAR6)
        {
            FUN6(&VAR2->VAR10, 0);
        }
        switch (VAR3)
        {
        case VAR24:
            FUN7(VAR2, VAR25, FUN8(VAR26));
            break;
        case VAR27:
            FUN7(VAR2, VAR25, FUN8(VAR28));
            break;
        default:
            FUN7(VAR2, VAR25, FUN8(VAR29));
            break;
        }
        FUN4(VAR8->VAR13, VAR30, VAR5);
    }
    return 1;
}