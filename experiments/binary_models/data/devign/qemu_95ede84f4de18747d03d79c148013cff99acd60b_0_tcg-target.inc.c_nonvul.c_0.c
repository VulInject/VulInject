static VAR1 FUN1(VAR2 *VAR3, TCGReg VAR4, TCGReg VAR5, TCGMemOp VAR6, int VAR7, bool VAR8)
{
    TCGReg VAR9 = VAR10;
    int VAR11 = (VAR8 ? FUN2(VAR12, VAR13[VAR7][0].VAR14) : FUN2(VAR12, VAR13[VAR7][0].VAR15));
    int VAR16 = FUN2(VAR12, VAR13[VAR7][0].VAR17);
    unsigned VAR18 = VAR6 & VAR19;
    unsigned VAR20 = FUN3(VAR6);
    if (VAR21)
    {
        FUN4(VAR3, VAR22, VAR23, VAR4, VAR24, VAR25);
    }
    else
    {
        FUN5(VAR3, VAR22, VAR26, VAR27, 0, VAR4, FUN6(VAR24));
    }
    if (VAR16 > 0xfff || (VAR28 && VAR29 == 64 && VAR11 > 0xff))
    {
        FUN7(VAR3, VAR22, VAR30, VAR31, VAR9, (24 << 7) | (VAR11 >> 8));
        VAR9 = VAR31;
        VAR16 -= VAR11 & 0xff00;
        VAR11 &= 0xff;
    }
    if (!VAR21)
    {
        FUN7(VAR3, VAR22, VAR32, VAR23, VAR27, VAR33 - 1);
    }
    FUN5(VAR3, VAR22, VAR30, VAR31, VAR9, VAR23, FUN8(VAR34));
    if (VAR28 && VAR29 == 64)
    {
        FUN9(VAR3, VAR22, VAR23, VAR31, VAR11);
    }
    else
    {
        FUN10(VAR3, VAR22, VAR23, VAR31, VAR11);
        if (VAR29 == 64)
        {
            FUN10(VAR3, VAR22, VAR35, VAR31, VAR11 + 4);
        }
    }
    FUN10(VAR3, VAR22, VAR31, VAR31, VAR16);
    if (VAR20 < VAR18)
    {
        VAR20 = VAR18;
    }
    if (VAR21)
    {
        tcg_target_ulong VAR36 = ~(VAR37 | ((1 << VAR20) - 1));
        int VAR38 = FUN11(VAR36);
        if (VAR38 >= 0)
        {
            FUN7(VAR3, VAR22, VAR39, VAR27, VAR4, FUN12(VAR36, VAR38) | (VAR38 << 7));
        }
        else
        {
            FUN13(VAR3, VAR22, VAR27, VAR36);
            FUN5(VAR3, VAR22, VAR39, VAR27, VAR4, VAR27, 0);
        }
        FUN5(VAR3, VAR22, VAR40, 0, VAR23, VAR27, 0);
    }
    else
    {
        if (VAR20)
        {
            FUN7(VAR3, VAR22, VAR41, 0, VAR4, (1 << VAR20) - 1);
        }
        FUN5(VAR3, (VAR20 ? VAR42 : VAR22), VAR40, 0, VAR23, VAR27, FUN8(VAR24));
    }
    if (VAR29 == 64)
    {
        FUN5(VAR3, VAR42, VAR40, 0, VAR35, VAR5, 0);
    }
    return VAR31;
}