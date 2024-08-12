static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3(VAR4->VAR8));
    VAR9 *VAR10 = FUN4(VAR7);
    VAR11 *VAR12 = FUN5(VAR7);
    int VAR13 = FUN6(VAR4)->VAR14;
    VAR15 *VAR16 = &VAR12->VAR16;
    VAR17 *VAR18 = FUN7(VAR7);
    uint32_t VAR19[VAR13];
    int VAR20;
    uint32_t VAR21[] = {FUN8(28), FUN8(40), 0xffffffff, 0xffffffff};
    uint32_t VAR22 = VAR23;
    uint32_t VAR24 = 1000000000;
    uint32_t VAR25[64];
    size_t VAR26;
    const uint8_t VAR27[] = {24, 0, 0xf6, 0x3f, 0xc7, 0xc0, 0x80, 0xf0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00};
    int VAR28;
    char *VAR29;
    int VAR30 = FUN9(VAR5);
    VAR29 = FUN10("", VAR10->VAR31, VAR4->VAR32);
    VAR28 = FUN11(VAR5, VAR30, VAR29);
    FUN12(VAR28);
    FUN13(VAR29);
    FUN12((FUN14(VAR5, VAR28, "", VAR2->VAR33)));
    FUN12((FUN14(VAR5, VAR28, "", VAR4->VAR32)));
    FUN12((FUN14(VAR5, VAR28, "", VAR4->VAR32)));
    FUN12((FUN15(VAR5, VAR28, "", "")));
    FUN12((FUN14(VAR5, VAR28, "", VAR16->VAR34[VAR35])));
    FUN12((FUN14(VAR5, VAR28, "", VAR16->VAR36)));
    FUN12((FUN14(VAR5, VAR28, "", VAR16->VAR36)));
    FUN12((FUN14(VAR5, VAR28, "", VAR16->VAR37)));
    FUN12((FUN14(VAR5, VAR28, "", VAR16->VAR37)));
    if (VAR18->VAR38)
    {
        FUN12((FUN14(VAR5, VAR28, "", VAR18->VAR38)));
    }
    else
    {
        FUN16("");
    }
    if (VAR18->VAR39)
    {
        FUN12((FUN14(VAR5, VAR28, "", VAR18->VAR39)));
    }
    else
    {
        FUN16("");
    }
    FUN12((FUN14(VAR5, VAR28, "", VAR22)));
    FUN12((FUN14(VAR5, VAR28, "", VAR24)));
    FUN12((FUN14(VAR5, VAR28, "", VAR16->VAR40)));
    FUN12((FUN15(VAR5, VAR28, "", "")));
    FUN12((FUN17(VAR5, VAR28, "", NULL, 0)));
    if (VAR16->VAR41[VAR42].VAR43)
    {
        FUN12((FUN17(VAR5, VAR28, "", NULL, 0)));
    }
    if (VAR16->VAR44 & VAR45)
    {
        FUN12((FUN17(VAR5, VAR28, "", VAR21, sizeof(VAR21))));
    }
    if (VAR16->VAR46 & VAR47)
    {
        uint32_t VAR48 = (VAR16->VAR49 & VAR50) ? 2 : 1;
        FUN12((FUN14(VAR5, VAR28, "", VAR48)));
    }
    if (VAR16->VAR49 & VAR51)
    {
        FUN12((FUN14(VAR5, VAR28, "", 1)));
    }
    VAR26 = FUN18(VAR16, VAR25, sizeof(VAR25));
    if (VAR26)
    {
        FUN12((FUN17(VAR5, VAR28, "", VAR25, VAR26)));
    }
    FUN12((FUN17(VAR5, VAR28, "", VAR27, sizeof(VAR27))));
    for (VAR20 = 0; VAR20 < VAR13; VAR20++)
    {
        VAR19[VAR20] = FUN8(VAR4->VAR32 + VAR20);
    }
    FUN12((FUN17(VAR5, VAR28, "", VAR19, sizeof(VAR19))));
}