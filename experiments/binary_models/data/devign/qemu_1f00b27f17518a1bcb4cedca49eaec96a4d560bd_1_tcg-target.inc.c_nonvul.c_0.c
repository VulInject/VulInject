static VAR1 FUN1(VAR2 *VAR3, TCGReg VAR4, TCGMemOp VAR5, int VAR6, bool VAR7)
{
    int VAR8 = FUN2(VAR5);
    int VAR9, VAR10;
    uint64_t VAR11;
    if (VAR8 >= 0)
    {
        VAR10 = 0;
        VAR11 = VAR12 | ((1 << VAR8) - 1);
    }
    else
    {
        VAR10 = (1 << (VAR5 & VAR13)) - 1;
        VAR11 = VAR12;
    }
    if (VAR14 & VAR15)
    {
        FUN3(VAR3, VAR16, VAR4, 64 - VAR17 - VAR18, 63 - VAR18, 64 + VAR18 - VAR19, 1);
        if (VAR10)
        {
            FUN4(VAR3, VAR20, VAR21, VAR22, VAR4, VAR23, VAR10);
            FUN5(VAR3, VAR24, VAR22, VAR11);
        }
        else
        {
            FUN6(VAR3, VAR22, VAR4, VAR11);
        }
    }
    else
    {
        FUN7(VAR3, VAR25, VAR16, VAR4, VAR23, VAR19 - VAR18);
        FUN4(VAR3, VAR20, VAR21, VAR22, VAR4, VAR23, VAR10);
        FUN5(VAR3, VAR26, VAR16, (VAR27 - 1) << VAR18);
        FUN5(VAR3, VAR24, VAR22, VAR11);
    }
    if (VAR7)
    {
        VAR9 = FUN8(VAR28, VAR29[VAR6][0].VAR30);
    }
    else
    {
        VAR9 = FUN8(VAR28, VAR29[VAR6][0].VAR31);
    }
    if (VAR32 == 32)
    {
        FUN9(VAR3, VAR33, VAR34, VAR22, VAR16, VAR35, VAR9);
    }
    else
    {
        FUN9(VAR3, 0, VAR36, VAR22, VAR16, VAR35, VAR9);
    }
    VAR9 = FUN8(VAR28, VAR29[VAR6][0].VAR37);
    FUN9(VAR3, 0, VAR38, VAR16, VAR16, VAR35, VAR9);
    if (VAR32 == 32)
    {
        FUN10(VAR3, VAR22, VAR4);
        return VAR22;
    }
    return VAR4;
}