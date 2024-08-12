static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2();
    struct VAR8 *VAR9 = (struct VAR8 *)FUN3(sizeof(*VAR9));
    int VAR10 = VAR4->VAR11;
    VAR9->VAR12 = FUN4(VAR7, VAR10, VAR2->VAR13);
    FUN5(VAR9);
    FUN6(VAR9);
    FUN7(VAR9);
    if (VAR5 == 800)
        FUN8(VAR9);
    else if (VAR5 == 810)
    {
        FUN9(VAR9);
        FUN10(VAR9);
    }
    FUN11(VAR9);
    FUN12(VAR9);
    FUN13(VAR9);
    FUN14(VAR9);
    if (FUN15(false))
    {
        FUN16(VAR9);
    }
    if (VAR2->VAR14)
    {
        VAR4->VAR14 = VAR2->VAR14;
        VAR4->VAR15 = VAR2->VAR15;
        VAR4->VAR16 = VAR2->VAR16;
        FUN17(VAR9->VAR12->VAR17, VAR4);
        FUN18(VAR18, VAR9);
    }
    if (VAR19[0].VAR20 && (VAR2->VAR21[0] == '' || !VAR2->VAR14))
    {
        uint8_t VAR22[0x10000];
        VAR9->VAR12->VAR17->VAR23.VAR24[15] = VAR25 + 0x400000;
        FUN19(VAR19[0].VAR20, VAR25 + 0x400000, VAR10 - 0x400000);
        FUN20(VAR22);
        FUN21(VAR26, VAR22, 0x10000);
    }
}