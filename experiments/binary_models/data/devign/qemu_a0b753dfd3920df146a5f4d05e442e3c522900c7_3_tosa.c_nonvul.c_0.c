static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7)
{
    struct VAR8 *VAR9;
    struct VAR10 *VAR11;
    struct VAR12 *VAR13, *VAR14;
    if (!VAR7)
        VAR7 = "";
    VAR9 = FUN2(VAR15.VAR1);
    FUN3(0, VAR16, FUN4(VAR16) | VAR17);
    VAR11 = FUN5(0x10000000, FUN6(VAR9->VAR18)[VAR19]);
    VAR13 = FUN7(VAR9, 0, 0x08800000);
    VAR14 = FUN7(VAR9, 1, 0x14800040);
    FUN8(VAR9, VAR13, VAR14, VAR11);
    FUN9(VAR9);
    FUN10(VAR9);
    VAR9->VAR20->VAR21[15] = VAR15.VAR22;
    VAR15.VAR4 = VAR4;
    VAR15.VAR5 = VAR5;
    VAR15.VAR6 = VAR6;
    VAR15.VAR23 = 0x208;
    FUN11(VAR9->VAR20, &VAR15);
    FUN12(VAR24);
}