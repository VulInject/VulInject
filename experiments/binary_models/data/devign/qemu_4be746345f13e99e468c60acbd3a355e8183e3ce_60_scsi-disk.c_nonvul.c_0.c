static int FUN1(VAR1 *VAR2, int VAR3)
{
    bool VAR4 = (VAR2->VAR5.VAR6.VAR7 == VAR8);
    VAR9 *VAR10 = FUN2(VAR9, VAR11, VAR2->VAR5.VAR12);
    BlockErrorAction VAR13 = FUN3(VAR10->VAR11.VAR14.VAR15, VAR4, VAR3);
    if (VAR13 == VAR16)
    {
        switch (VAR3)
        {
        case VAR17:
            FUN4(VAR2, FUN5(VAR18));
            break;
        case VAR19:
            FUN4(VAR2, FUN5(VAR20));
            break;
        case VAR21:
            FUN4(VAR2, FUN5(VAR22));
            break;
        case VAR23:
            FUN4(VAR2, FUN5(VAR24));
            break;
        default:
            FUN4(VAR2, FUN5(VAR25));
            break;
        }
    }
    FUN6(VAR10->VAR11.VAR14.VAR15, VAR13, VAR4, VAR3);
    if (VAR13 == VAR26)
    {
        FUN7(&VAR2->VAR5);
    }
    return VAR13 != VAR27;
}