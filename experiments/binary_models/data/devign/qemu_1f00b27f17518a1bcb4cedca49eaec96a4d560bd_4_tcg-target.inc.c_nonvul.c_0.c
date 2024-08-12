static inline void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGReg VAR4, int VAR5, TCGMemOp VAR6, VAR7 **VAR8, int VAR9)
{
    const TCGReg VAR10 = VAR11;
    const TCGReg VAR12 = VAR13;
    TCGType VAR14 = VAR15;
    TCGType VAR16 = VAR15;
    int VAR17 = 0, VAR18 = 0, VAR19 = 0;
    int VAR20 = FUN2(VAR6);
    target_ulong VAR21;
    if (VAR22 == 64)
    {
        if (VAR23 == 64)
        {
            VAR14 = VAR24;
            VAR17 = VAR25;
        }
        if (VAR26 == VAR24)
        {
            VAR18 = VAR25;
            if (VAR27 + VAR28 > 32)
            {
                VAR16 = VAR24;
                VAR19 = VAR25;
            }
        }
    }
    FUN3(VAR2, VAR16, VAR10, VAR3);
    if (VAR20 >= 0)
    {
        FUN3(VAR2, VAR14, VAR12, VAR3);
        VAR21 = VAR29 | ((1 << VAR20) - 1);
    }
    else
    {
        FUN4(VAR2, VAR30 + VAR17, VAR12, VAR3, (1 << (VAR6 & VAR31)) - 1);
        VAR21 = VAR29;
    }
    FUN5(VAR2, VAR32 + VAR19, VAR10, VAR27 - VAR33);
    FUN6(VAR2, VAR34 + VAR17, VAR12, VAR21, 0);
    FUN6(VAR2, VAR34 + VAR19, VAR10, (VAR35 - 1) << VAR33, 0);
    FUN7(VAR2, VAR30 + VAR18, VAR10, VAR36, VAR10, 0, FUN8(VAR37, VAR38[VAR5][0]) + VAR9);
    FUN4(VAR2, VAR39 + VAR17, VAR12, VAR10, 0);
    FUN3(VAR2, VAR14, VAR12, VAR3);
    FUN9(VAR2, VAR40 + VAR41, 0, 0, 0);
    VAR8[0] = VAR2->VAR42;
    VAR2->VAR42 += 4;
    if (VAR23 > VAR22)
    {
        FUN4(VAR2, VAR39, VAR4, VAR10, 4);
        FUN9(VAR2, VAR40 + VAR41, 0, 0, 0);
        VAR8[1] = VAR2->VAR42;
        VAR2->VAR42 += 4;
    }
    FUN4(VAR2, VAR43 + VAR18, VAR12, VAR10, FUN8(VAR44, VAR45) - VAR9);
}