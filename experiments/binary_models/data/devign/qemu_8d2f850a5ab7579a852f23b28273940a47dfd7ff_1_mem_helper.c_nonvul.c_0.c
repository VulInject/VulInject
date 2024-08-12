VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
    const uint8_t VAR8 = (VAR4->VAR9.VAR10 & VAR11) >> VAR12;
    const uint8_t VAR13 = (VAR4->VAR9.VAR10 & VAR14) >> VAR15;
    const uint64_t VAR16 = VAR4->VAR17[0];
    const uintptr_t VAR18 = FUN2();
    uint8_t VAR19, VAR20, VAR21, VAR22;
    uint8_t VAR23, VAR24, VAR25, VAR26;
    uint64_t VAR27;
    int VAR28 = 0;
    FUN3("" VAR29 "" VAR29 "" VAR29 "", VAR30, VAR5, VAR6, VAR7);
    if (!(VAR4->VAR9.VAR10 & VAR31))
    {
        FUN4(VAR4, VAR32, 6, VAR18);
    }
    VAR27 = (VAR16 & 0xffff0000ULL) >> 16;
    VAR19 = (VAR27 >> 12) & 0xf;
    VAR20 = (VAR27 >> 6) & 0x3;
    VAR21 = (VAR27 >> 1) & 0x1;
    VAR22 = VAR27 & 0x1;
    VAR27 = (VAR16 & 0x0000ffffULL);
    VAR23 = (VAR27 >> 12) & 0xf;
    VAR24 = (VAR27 >> 6) & 0x3;
    VAR25 = (VAR27 >> 1) & 0x1;
    VAR26 = VAR27 & 0x1;
    if (!VAR21)
    {
        VAR19 = VAR8;
    }
    if (!VAR25)
    {
        VAR23 = VAR8;
    }
    if (!VAR22)
    {
        VAR20 = VAR13;
    }
    if (!VAR26)
    {
        VAR24 = VAR13;
    }
    if (VAR22 && VAR20 == VAR33 && (VAR4->VAR9.VAR10 & VAR34))
    {
        FUN4(VAR4, VAR32, 6, VAR18);
    }
    if (!(VAR4->VAR35[0] & VAR36) && (VAR20 == VAR37 || VAR24 == VAR37))
    {
        FUN4(VAR4, VAR32, 6, VAR18);
    }
    if (!FUN5(VAR4, VAR19) || !FUN5(VAR4, VAR23))
    {
        FUN4(VAR4, VAR38, 6, VAR18);
    }
    VAR7 = FUN6(VAR4, VAR7);
    if (VAR7 > 4096)
    {
        VAR28 = 3;
        VAR7 = 4096;
    }
    if (VAR24 == VAR39 || VAR20 == VAR39 || (VAR4->VAR9.VAR10 & VAR34))
    {
        FUN7(VAR40, "", VAR30);
        FUN4(VAR4, VAR41, 6, VAR18);
    }
    FUN8();
    FUN9(VAR4, VAR5, VAR6, VAR7, VAR20, VAR24, VAR18);
    return VAR28;
}