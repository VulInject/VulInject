VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, ram_addr_t VAR7, ram_addr_t VAR8, VAR2 *VAR9, VAR2 **VAR10, VAR11 *VAR12)
{
    int VAR13, VAR14;
    VAR2 *VAR15, *VAR16;
    VAR2 *VAR17, *VAR18;
    VAR1 *VAR19;
    ram_addr_t VAR20 = VAR7 + VAR8;
    VAR21 *VAR22 = FUN2(FUN3());
    VAR23 *VAR24 = FUN4(VAR22);
    VAR13 = (VAR4 != NULL);
    VAR15 = FUN5(sizeof(*VAR15));
    FUN6(VAR15, NULL, "", VAR20);
    FUN7(VAR15);
    *VAR10 = VAR15;
    VAR17 = FUN5(sizeof(*VAR17));
    FUN8(VAR17, NULL, "", VAR15, 0, VAR7);
    FUN9(VAR3, 0, VAR17);
    FUN10(0, VAR7, VAR25);
    if (VAR8 > 0)
    {
        VAR18 = FUN5(sizeof(*VAR18));
        FUN8(VAR18, NULL, "", VAR15, VAR7, VAR8);
        FUN9(VAR3, 0x100000000ULL, VAR18);
        FUN10(0x100000000ULL, VAR8, VAR25);
    }
    if (VAR20 < VAR22->VAR26)
    {
        ram_addr_t VAR27 = VAR22->VAR26 - VAR20;
        VAR24->VAR28 = FUN11(0x100000000ULL + VAR8, 1ULL << 30);
        if ((VAR24->VAR28 + VAR27) < VAR27)
        {
            FUN12("" VAR29, VAR22->VAR26);
            FUN13(VAR30);
        }
        FUN14(&VAR24->VAR31, FUN15(VAR24), "", VAR27);
        FUN9(VAR3, VAR24->VAR28, &VAR24->VAR31);
    }
    FUN16(VAR9, VAR12->VAR32);
    VAR16 = FUN5(sizeof(*VAR16));
    FUN6(VAR16, NULL, "", VAR33);
    FUN7(VAR16);
    FUN17(VAR9, VAR34, VAR16, 1);
    VAR19 = FUN18();
    FUN19(VAR19);
    if (VAR13)
    {
        FUN20(VAR19, VAR4, VAR6, VAR5, VAR7);
    }
    for (VAR14 = 0; VAR14 < VAR35; VAR14++)
    {
        FUN21(VAR36[VAR14].VAR37, VAR36[VAR14].VAR38);
    }
    VAR12->VAR19 = VAR19;
    return VAR19;
}