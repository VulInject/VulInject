static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = &VAR8->VAR10;
    uint32_t VAR11 = FUN2(VAR2);
    if (FUN3(VAR10, VAR12))
    {
        if (VAR11 & VAR13)
        {
            uint32_t VAR14 = VAR11;
            assert(!FUN3(VAR10, VAR15));
            VAR14 &= (VAR16 | VAR17 | VAR18 | VAR19);
            if (VAR11 & VAR20)
            {
                VAR14 |= VAR21;
            }
            if (VAR11 & VAR22)
            {
                VAR10->VAR23.VAR24 = 1;
            }
            if (VAR11 & VAR25)
            {
                VAR10->VAR23.VAR26[VAR27] = 1;
            }
            VAR11 = VAR14;
        }
        FUN4(VAR10, VAR11, ~VAR13);
        return 0;
    }
    VAR10->VAR28 = ((VAR11 & VAR29) == 0);
    if (FUN5(VAR10))
    {
        FUN6(VAR10, VAR11);
        return 0;
    }
    FUN7(VAR10, VAR11, 0xffffffff, VAR30);
    return 0;
}