VAR1 *FUN1(uint32_t VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR9 = FUN2(NULL, VAR16);
    FUN3(VAR9);
    VAR11 = FUN4(VAR9);
    VAR13 = FUN5(VAR9);
    VAR15 = FUN6(VAR9);
    FUN7(&VAR15->VAR17, FUN8(VAR11), "", 0x100000000ULL);
    FUN9(&VAR15->VAR18, FUN8(VAR11), "", &VAR15->VAR17, 0x80000000ULL, 0x7e000000ULL);
    FUN10(VAR6, 0x80000000ULL, &VAR15->VAR18);
    VAR13->VAR19 = FUN11(VAR9, NULL, VAR20, VAR21, VAR4, &VAR15->VAR17, VAR7, 0, 4, VAR22);
    FUN12(VAR13->VAR19, 0, "");
    FUN13(VAR11, 0, VAR2);
    FUN13(VAR11, 1, VAR2 + 0x00200000);
    return VAR13->VAR19;
}