void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    uint16_t VAR6 = FUN2(VAR2->VAR7 + FUN3(VAR2));
    bool VAR8 = VAR6 & VAR9;
    bool VAR10 = VAR6 & VAR11;
    unsigned int VAR12;
    uint8_t VAR13;
    uint8_t VAR14;
    unsigned int VAR15;
    uint32_t VAR16;
    if (!FUN4(VAR2) || !FUN5(VAR3, VAR5, VAR2->VAR17, FUN6(VAR6)))
    {
        return;
    }
    FUN7(VAR2, "" VAR18 "" VAR18 "", VAR3, VAR4, VAR5);
    FUN7(VAR2, "" VAR19 "" VAR18, VAR6, FUN8(VAR2->VAR7 + FUN9(VAR2)));
    if (VAR8)
    {
        fprintf(VAR20, "" VAR18, FUN8(VAR2->VAR7 + FUN10(VAR2)));
    }
    fprintf(VAR20, "" VAR19, FUN2(VAR2->VAR7 + FUN11(VAR2, VAR8)));
    if (VAR6 & VAR11)
    {
        fprintf(VAR20, "" VAR18 "" VAR18, FUN8(VAR2->VAR7 + FUN12(VAR2, VAR8)), FUN8(VAR2->VAR7 + FUN13(VAR2, VAR8)));
    }
    fprintf(VAR20, "");
    if (!(VAR6 & VAR21))
    {
        return;
    }
    FUN14(VAR2);
    VAR13 = (VAR6 & VAR22) >> (FUN15(VAR22) - 1);
    VAR14 = (VAR6 & VAR23) >> (FUN15(VAR23) - 1);
    if (VAR13 > VAR14)
    {
        VAR6 &= ~VAR22;
        VAR6 |= VAR14 << (FUN15(VAR22) - 1);
        FUN16(VAR2->VAR7 + FUN3(VAR2), VAR6);
    }
    if (!VAR10)
    {
        return;
    }
    VAR12 = FUN17(VAR6);
    VAR16 = FUN8(VAR2->VAR7 + FUN13(VAR2, VAR8));
    VAR16 &= 0xffffffff >> (VAR24 - VAR12);
    FUN18(VAR2->VAR7 + FUN13(VAR2, VAR8), VAR16);
    for (VAR15 = 0; VAR15 < VAR12; ++VAR15)
    {
        if (FUN19(VAR2, VAR15) || !(VAR16 & (1U << VAR15)))
        {
            continue;
        }
        FUN20(VAR2->VAR7 + FUN13(VAR2, VAR8), 1U << VAR15);
        FUN21(VAR2, VAR15);
    }
}