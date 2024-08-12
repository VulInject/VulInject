static inline void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGReg VAR4, int VAR5, TCGMemOp VAR6, VAR7 **VAR8, int VAR9)
{
    const TCGReg VAR10 = VAR11;
    const TCGReg VAR12 = VAR13;
    TCGType VAR14 = VAR15;
    TCGType VAR16 = VAR15;
    int VAR17 = 0, VAR18 = 0;
    int VAR19 = (1 << (VAR6 & VAR20)) - 1;
    bool VAR21 = (VAR6 & VAR22) == VAR23 || VAR19 == 0;
    if (VAR24 == 64)
    {
        if (VAR25 == 64)
        {
            VAR14 = VAR26;
            VAR17 = VAR27;
        }
        if (VAR28 == VAR26)
        {
            VAR16 = VAR26;
            VAR18 = VAR27;
        }
    }
    FUN2(VAR2, VAR16, VAR10, VAR3);
    if (VAR21)
    {
        FUN2(VAR2, VAR14, VAR12, VAR3);
    }
    else
    {
        FUN3(VAR2, VAR29 + VAR17, VAR12, VAR3, VAR19);
    }
    FUN4(VAR2, VAR30 + VAR18, VAR10, VAR31 - VAR32);
    FUN5(VAR2, VAR33 + VAR17, VAR12, VAR34 | (VAR21 ? VAR19 : 0), 0);
    FUN5(VAR2, VAR33 + VAR18, VAR10, (VAR35 - 1) << VAR32, 0);
    FUN6(VAR2, VAR29 + VAR18, VAR10, VAR36, VAR10, 0, FUN7(VAR37, VAR38[VAR5][0]) + VAR9);
    FUN3(VAR2, VAR39 + VAR17, VAR12, VAR10, 0);
    FUN2(VAR2, VAR14, VAR12, VAR3);
    FUN8(VAR2, VAR40 + VAR41, 0, 0, 0);
    VAR8[0] = VAR2->VAR42;
    VAR2->VAR42 += 4;
    if (VAR25 > VAR24)
    {
        FUN3(VAR2, VAR39, VAR4, VAR10, 4);
        FUN8(VAR2, VAR40 + VAR41, 0, 0, 0);
        VAR8[1] = VAR2->VAR42;
        VAR2->VAR42 += 4;
    }
    FUN3(VAR2, VAR43 + VAR18, VAR12, VAR10, FUN7(VAR44, VAR45) - VAR9);
}