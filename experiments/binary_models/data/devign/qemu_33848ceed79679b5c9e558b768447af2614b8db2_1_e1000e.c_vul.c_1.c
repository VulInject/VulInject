static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    static const uint16_t VAR5 = 0x0C8;
    static const uint16_t VAR6 = 0x0E0;
    static const uint16_t VAR7 = 0x100;
    static const uint16_t VAR8 = 0x140;
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12;
    int VAR13;
    FUN3();
    VAR2->VAR14 = VAR15;
    VAR2->VAR16[VAR17] = 0x10;
    VAR2->VAR16[VAR18] = 1;
    FUN4(VAR2->VAR16 + VAR19, VAR10->VAR20);
    FUN4(VAR2->VAR16 + VAR21, VAR10->VAR22);
    VAR10->VAR23 = VAR10->VAR20;
    VAR10->VAR24 = VAR10->VAR22;
    FUN5(&VAR10->VAR25, FUN6(VAR10), &VAR26, VAR10, "", VAR27);
    FUN7(VAR2, VAR28, VAR29, &VAR10->VAR25);
    FUN8(&VAR10->VAR30, FUN6(VAR10), "", VAR31);
    FUN7(VAR2, VAR32, VAR29, &VAR10->VAR30);
    FUN5(&VAR10->VAR33, FUN6(VAR10), &VAR34, VAR10, "", VAR35);
    FUN7(VAR2, VAR36, VAR37, &VAR10->VAR33);
    FUN8(&VAR10->VAR38, FUN6(VAR10), "", VAR39);
    FUN7(VAR2, VAR40, VAR29, &VAR10->VAR38);
    FUN9(&VAR10->VAR41.VAR12);
    VAR12 = VAR10->VAR41.VAR12.VAR42;
    FUN10(VAR10);
    if (FUN11(VAR2, VAR6) < 0)
    {
        FUN12("");
    }
    VAR13 = FUN13(FUN14(VAR10), 0xD0, 1, true, false, NULL);
    if (VAR13)
    {
        FUN15(VAR13);
    }
    if (FUN16(VAR2, VAR5, VAR43) < 0)
    {
        FUN12("");
    }
    if (FUN17(VAR2, VAR7, VAR44) < 0)
    {
        FUN12("");
    }
    FUN18(VAR2, VAR8, FUN19(VAR12));
    FUN20(VAR10, VAR2, VAR12);
    FUN21(VAR10);
    FUN22(&VAR10->VAR45, VAR46, sizeof(VAR46), VAR12);
}