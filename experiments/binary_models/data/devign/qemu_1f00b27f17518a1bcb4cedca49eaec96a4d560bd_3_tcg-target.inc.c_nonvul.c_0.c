static VAR1 FUN1(VAR2 *VAR3, TCGMemOp VAR4, TCGReg VAR5, TCGReg VAR6, int VAR7, bool VAR8)
{
    int VAR9 = (VAR8 ? FUN2(VAR10, VAR11[VAR7][0].VAR12) : FUN2(VAR10, VAR11[VAR7][0].VAR13));
    int VAR14 = FUN2(VAR10, VAR11[VAR7][0].VAR15);
    TCGReg VAR16 = VAR17;
    TCGMemOp VAR18 = VAR4 & VAR19;
    int VAR20 = FUN3(VAR4);
    if (VAR21 == 64)
    {
        if (VAR22 == 32)
        {
            FUN4(VAR3, VAR23, VAR5);
            VAR5 = VAR23;
        }
        else
        {
            FUN5(VAR3, VAR24, VAR25, VAR5, 64 - VAR26, 64 - VAR27);
        }
    }
    if (VAR14 >= 0x8000)
    {
        FUN6(FUN2(VAR10, VAR11[VAR28 - 1][1]) > 0x7ff0 + 0x7fff);
        FUN7(VAR3, VAR29 | FUN8(VAR30, VAR16, 0x7ff0));
        VAR16 = VAR30;
        VAR9 -= 0x7ff0;
        VAR14 -= 0x7ff0;
    }
    if (VAR21 == 32 || VAR22 == 32)
    {
        FUN9(VAR3, VAR31, VAR25, VAR5, 32 - (VAR26 - VAR32), 32 - (VAR27 + VAR32), 31 - VAR32);
    }
    else
    {
        FUN10(VAR3, VAR25, VAR25, VAR32);
    }
    FUN7(VAR3, VAR33 | FUN11(VAR25, VAR25, VAR16));
    if (VAR21 < VAR22)
    {
        FUN12(VAR3, VAR34, VAR23, VAR25, VAR9);
        FUN12(VAR3, VAR34, VAR30, VAR25, VAR9 + 4);
    }
    else
    {
        FUN12(VAR3, VAR35, VAR30, VAR25, VAR9);
    }
    FUN12(VAR3, VAR36, VAR25, VAR25, VAR14);
    if (VAR21 == 32 || VAR22 == 32)
    {
        if (VAR20 < 0)
        {
            VAR20 = VAR18;
        }
        FUN9(VAR3, VAR31, VAR37, VAR5, 0, (32 - VAR20) & 31, 31 - VAR26);
    }
    else if (VAR20)
    {
        if (VAR20 > 0)
        {
            FUN5(VAR3, VAR24, VAR37, VAR5, 64 - VAR26, VAR26 - VAR20);
            FUN5(VAR3, VAR24, VAR37, VAR37, VAR26, 0);
        }
        else
        {
            FUN7(VAR3, VAR29 | FUN8(VAR37, VAR5, (1 << VAR18) - 1));
            FUN5(VAR3, VAR38, VAR37, VAR37, 0, 63 - VAR26);
        }
    }
    else
    {
        FUN5(VAR3, VAR38, VAR37, VAR5, 0, 63 - VAR26);
    }
    if (VAR21 < VAR22)
    {
        FUN13(VAR3, VAR39, VAR37, VAR30, 0, 7, VAR34);
        FUN13(VAR3, VAR39, VAR6, VAR23, 0, 6, VAR34);
        FUN7(VAR3, VAR40 | FUN14(7, VAR41) | FUN15(6, VAR41) | FUN16(7, VAR41));
    }
    else
    {
        FUN13(VAR3, VAR39, VAR37, VAR30, 0, 7, VAR35);
    }
    return VAR5;
}