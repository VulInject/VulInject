static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    struct VAR13 *VAR14;
    VAR15 *VAR16 = FUN2(VAR15, 1);
    VAR17 *VAR18;
    VAR19 *VAR20;
    int VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25;
    VAR15 *VAR26 = FUN3();
    VAR27 *VAR28;
    if (VAR3 == NULL)
    {
        VAR3 = "";
    }
    VAR8 = FUN4(VAR3);
    if (VAR8 == NULL)
    {
        fprintf(VAR29, "");
        FUN5(1);
    }
    VAR10 = &VAR8->VAR10;
    VAR12 = FUN6(sizeof(VAR11));
    VAR12->VAR8 = VAR8;
    VAR12->VAR30 = VAR10->VAR31;
    FUN7(VAR32, VAR12);
    FUN8(VAR16, NULL, "", VAR33, &VAR34);
    FUN9(VAR16);
    FUN10(VAR26, VAR35, VAR16);
    VAR14 = FUN11(VAR8, VAR26);
    VAR18 = FUN12(VAR26, 0x04000000, FUN13(VAR14));
    VAR23 = FUN14(NULL, "");
    VAR25 = FUN15(VAR23);
    FUN16(VAR23);
    VAR28 = FUN17(FUN18(VAR23, ""));
    FUN19(VAR25, 0, FUN20(0x1e200000));
    FUN19(VAR25, 1, FUN21(0x1e200000));
    FUN22(VAR25, 0, VAR18[VAR36]);
    FUN22(VAR25, 1, VAR18[VAR37]);
    FUN22(VAR25, 2, VAR18[VAR38]);
    FUN22(VAR25, 3, VAR18[VAR39]);
    FUN23(VAR26, 0x10000000, VAR40, VAR18[VAR41], VAR42[2]);
    VAR20 = FUN24(VAR43, 0, 0);
    VAR23 = FUN14(NULL, "");
    VAR25 = FUN15(VAR23);
    FUN22(VAR25, 0, VAR18[VAR44]);
    FUN25(VAR23, "", 1);
    FUN16(VAR23);
    FUN19(VAR25, 0, 0x14001000);
    FUN19(VAR25, 1, 0x1400080c);
    FUN26(VAR23, VAR20, NULL);
    VAR20 = FUN24(VAR45, 0, 0);
    FUN27(0x0, NULL, "", VAR46, VAR20 ? FUN28(VAR20) : NULL, (16 * 1024), VAR46 >> 16, 1, 4, 0x0000, 0x0000, 0x0000, 0x0000, 0x555, 0x2aa, 0);
    for (VAR21 = 0; VAR21 < VAR47; VAR21++)
        FUN29(&VAR48[VAR21], VAR28, "", VAR21 == 0 ? "" : NULL);
    FUN30("");
    memset(&VAR49, 0, sizeof(VAR49));
    if (VAR4)
    {
        int VAR50;
        VAR50 = FUN31(VAR4, VAR35 + VAR51, VAR52 - VAR51);
        if (VAR50 < 0)
        {
            fprintf(VAR29, "", VAR4);
            FUN5(1);
        }
        FUN32(&VAR53, VAR54, 1 << 3);
        FUN33(&VAR53, VAR55, 3 << (3 * 2));
        VAR12->VAR30 = (VAR35 + VAR51) | 0xa0000000;
    }
    if (VAR6)
    {
        int VAR56;
        VAR56 = FUN31(VAR6, VAR35 + VAR52, VAR33 - VAR52);
        if (VAR56 < 0)
        {
            fprintf(VAR29, "", VAR6);
            FUN5(1);
        }
        VAR49.VAR57 = 1;
        VAR49.VAR58 = VAR52;
        VAR49.VAR56 = VAR56;
    }
    if (VAR5)
    {
        strncpy(VAR49.VAR5, VAR5, sizeof(VAR49.VAR5));
    }
    FUN34("", &VAR49, sizeof(VAR49), VAR35 + VAR59);
}