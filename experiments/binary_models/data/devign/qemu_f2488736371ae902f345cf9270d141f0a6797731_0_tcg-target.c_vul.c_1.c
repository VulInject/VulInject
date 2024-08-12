static void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGReg VAR4, int VAR5, int VAR6)
{
    TCGReg VAR7 = VAR8;
    FUN2(VAR2, VAR9, VAR10, VAR11, 0, VAR3, FUN3(VAR12));
    assert((VAR6 & ~0xffff) == 0);
    if (VAR6 > 0xff)
    {
        FUN4(VAR2, VAR9, VAR13, VAR14, VAR7, (24 << 7) | (VAR6 >> 8));
        VAR6 &= 0xff;
        VAR7 = VAR14;
    }
    FUN4(VAR2, VAR9, VAR15, VAR16, VAR11, VAR17 - 1);
    FUN2(VAR2, VAR9, VAR13, VAR14, VAR7, VAR16, FUN5(VAR18));
    if (VAR19 && VAR20 == 64)
    {
        FUN6(VAR2, VAR9, VAR21, VAR16, VAR14, VAR6, 1, 1);
    }
    else
    {
        FUN7(VAR2, VAR9, VAR22, VAR16, VAR14, VAR6, 1, 1);
        if (VAR20 == 64)
        {
            FUN7(VAR2, VAR9, VAR22, VAR23, VAR14, 4, 1, 0);
        }
    }
    if (VAR5)
    {
        FUN4(VAR2, VAR9, VAR24, 0, VAR3, (1 << VAR5) - 1);
    }
    FUN2(VAR2, (VAR5 ? VAR25 : VAR9), VAR26, 0, VAR16, VAR11, FUN5(VAR12));
    if (VAR20 == 64)
    {
        FUN2(VAR2, VAR25, VAR26, 0, VAR23, VAR4, FUN5(0));
    }
}