static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    uint16_t VAR8;
    uint32_t VAR9;
    char VAR10[10];
    uint32_t VAR11 = 0;
    int32_t VAR12 = VAR13, VAR14 = VAR13;
    VAR15 *VAR16 = VAR2->VAR17;
    static const int64_t VAR18[2][2] = {{32, 17}, {17, 9}};
    uint64_t VAR19 = FUN2(VAR2->VAR20);
    FUN3(VAR2->VAR20, VAR18[VAR6->VAR21 == 1][VAR6->VAR22 == 1]);
    VAR9 = FUN4(VAR2->VAR20);
    VAR16->VAR23 = VAR9 == FUN5('', '', '', '');
    if (VAR9 != FUN5('', '', '', '') && !VAR16->VAR23)
        return;
    VAR9 = FUN4(VAR2->VAR20);
    if (VAR9 & VAR24)
        VAR16->VAR25 = FUN4(VAR2->VAR20);
    if (VAR9 & VAR26)
        VAR16->VAR27 = FUN4(VAR2->VAR20);
    if (VAR19 && VAR16->VAR27)
    {
        uint64_t VAR28, VAR29;
        VAR28 = FUN6(VAR19, VAR16->VAR27);
        VAR29 = FUN7(VAR19, VAR16->VAR27) - VAR28;
        if (VAR19 > VAR16->VAR27 && VAR29 > VAR28 >> 4)
        {
            VAR16->VAR25 = 0;
        }
        else if (VAR29 > VAR28 >> 4)
        {
            FUN8(VAR2, VAR30, "");
        }
    }
    if (VAR9 & VAR31)
        FUN9(VAR2, VAR16->VAR27, FUN10(VAR16->VAR25, (VAR32){VAR7, VAR6->VAR33}, VAR4->VAR34));
    if (VAR9 & 8)
        FUN3(VAR2->VAR20, 4);
    memset(VAR10, 0, sizeof(VAR10));
    FUN11(VAR2->VAR20, VAR10, 9);
    FUN12(VAR2->VAR20);
    FUN12(VAR2->VAR20);
    VAR9 = FUN4(VAR2->VAR20);
    VAR11 = FUN13(VAR9, 100000, 1 << 23);
    VAR9 = FUN14(VAR2->VAR20);
    if (FUN15(VAR9, 13, 15) == 1)
    {
        VAR12 = FUN15(VAR9, 0, 8) * 10000;
        if (VAR9 & (1 << 9))
            VAR12 *= -1;
    }
    VAR9 = FUN14(VAR2->VAR20);
    if (FUN15(VAR9, 13, 15) == 2)
    {
        VAR14 = FUN15(VAR9, 0, 8) * 10000;
        if (VAR9 & (1 << 9))
            VAR14 *= -1;
    }
    FUN12(VAR2->VAR20);
    FUN12(VAR2->VAR20);
    VAR9 = FUN16(VAR2->VAR20);
    if (FUN17(VAR10) == FUN5('', '', '', '') || FUN17(VAR10) == FUN5('', '', '', ''))
    {
        VAR16->VAR35 = VAR9 >> 12;
        VAR16->VAR36 = VAR9 & 4095;
        VAR4->VAR37 = VAR16->VAR35 + 528 + 1;
        if (VAR16->VAR25)
        {
            VAR4->VAR38 = -VAR16->VAR36 + 528 + 1 + VAR16->VAR25 * (VAR39)VAR7;
            VAR4->VAR40 = VAR16->VAR25 * (VAR39)VAR7;
        }
        if (!VAR4->VAR41)
            VAR4->VAR41 = FUN10(VAR4->VAR37, (VAR32){1, VAR6->VAR33}, VAR4->VAR34);
        FUN8(VAR2, VAR42, "", VAR16->VAR35, VAR16->VAR36);
    }
    FUN12(VAR2->VAR20);
    FUN12(VAR2->VAR20);
    FUN14(VAR2->VAR20);
    FUN4(VAR2->VAR20);
    FUN14(VAR2->VAR20);
    VAR8 = FUN18(VAR2->VAR20);
    VAR9 = FUN14(VAR2->VAR20);
    if (VAR9 == VAR8)
    {
        FUN19(VAR4, VAR12, VAR11, VAR14, 0);
        FUN20(&VAR4->VAR43, "", VAR10, 0);
    }
}