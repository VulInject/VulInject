static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, struct VAR7 *VAR8, int VAR9)
{
    struct VAR10 *VAR11 = (struct VAR10 *)FUN2(sizeof(*VAR11));
    int VAR12 = VAR8->VAR1;
    VAR13 *VAR14;
    VAR11->VAR15 = FUN3(VAR12, VAR6);
    FUN4(VAR11);
    FUN5(VAR11);
    FUN6(VAR11);
    if (VAR9 == 800)
        FUN7(VAR11);
    else if (VAR9 == 810)
    {
        FUN8(VAR11);
        FUN9(VAR11);
    }
    FUN10(VAR11);
    FUN11(VAR11);
    FUN12(VAR11);
    FUN13(VAR11);
    if (VAR16)
        FUN14(VAR11);
    VAR11->VAR15->VAR17->VAR18[15] = 0;
    if (VAR3)
    {
        VAR8->VAR3 = VAR3;
        VAR8->VAR4 = VAR4;
        VAR8->VAR5 = VAR5;
        FUN15(VAR11->VAR15->VAR17, VAR8);
        FUN16(VAR19, VAR11);
        FUN17(VAR11);
    }
    if (VAR20[0] && (VAR2[0] == '' || !VAR3))
    {
        int VAR21;
        uint8_t VAR22[0x10000];
        VAR11->VAR15->VAR17->VAR18[15] = VAR23 + 0x400000;
        VAR21 = FUN18(VAR20[0], VAR23 + 0x400000, VAR12 - 0x400000);
        FUN19("", VAR21);
        FUN20(VAR22);
        FUN21(VAR24, VAR22, 0x10000);
    }
    VAR14 = FUN22();
    VAR14->VAR25 = FUN23(VAR14, 800, 480);
    FUN24(VAR14);
}