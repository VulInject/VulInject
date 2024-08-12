static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, int VAR7, int VAR8)
{
    int VAR9;
    ram_addr_t VAR10, VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16 = -1;
    VAR17 *VAR18;
    VAR17 *VAR19;
    VAR17 *VAR20;
    VAR17 *VAR21;
    VAR17 *VAR22;
    VAR23 *VAR24;
    VAR25 *VAR26[VAR27 * VAR28];
    VAR29 *VAR30[VAR27];
    VAR31 *VAR32;
    FUN2(VAR6);
    if (VAR8)
    {
        FUN3();
    }
    FUN4(VAR1, VAR3, VAR4, VAR5, &VAR10, &VAR11);
    VAR18 = FUN5();
    VAR20 = FUN6(VAR18[0]);
    VAR24 = FUN7(sizeof(*VAR24));
    VAR24->VAR20 = VAR20;
    if (VAR7)
    {
        FUN8(VAR24);
    }
    VAR19 = FUN9(VAR33, VAR24, 24);
    if (VAR7)
    {
        VAR13 = FUN10(&VAR15, &VAR16, VAR19, VAR1);
    }
    else
    {
        VAR13 = NULL;
        VAR15 = NULL;
        FUN11(NULL);
    }
    FUN12(VAR19);
    FUN13(FUN14(13));
    FUN15(VAR7 ? VAR13 : NULL);
    FUN16(VAR19, &VAR32);
    for (VAR9 = 0; VAR9 < VAR34; VAR9++)
    {
        VAR35 *VAR36 = &VAR37[VAR9];
        if (!VAR7 || (VAR36->VAR38 && strcmp(VAR36->VAR38, "") == 0))
            FUN17(VAR36);
        else
            FUN18(VAR36, "", NULL);
    }
    if (FUN19(VAR39) >= VAR27)
    {
        fprintf(VAR40, "");
        FUN20(1);
    }
    for (VAR9 = 0; VAR9 < VAR27 * VAR28; VAR9++)
    {
        VAR26[VAR9] = FUN21(VAR39, VAR9 / VAR28, VAR9 % VAR28);
    }
    if (VAR7)
    {
        VAR41 *VAR42;
        VAR42 = FUN22(VAR13, VAR26, VAR16 + 1);
        VAR30[0] = FUN23(&VAR42->VAR43, "");
        VAR30[1] = FUN23(&VAR42->VAR43, "");
    }
    else
    {
        for (VAR9 = 0; VAR9 < VAR27; VAR9++)
        {
            VAR31 *VAR42;
            VAR42 = FUN24(VAR44[VAR9], VAR45[VAR9], VAR46[VAR9], VAR26[VAR28 * VAR9], VAR26[VAR28 * VAR9 + 1]);
            VAR30[VAR9] = FUN23(&VAR42->VAR43, "");
        }
    }
    FUN25(VAR19, VAR7 ? VAR13 : NULL);
    FUN26(VAR10, VAR11, VAR2, VAR30[0], VAR30[1], VAR32);
    if (VAR7 && VAR47)
    {
        FUN27(VAR13, VAR16 + 2);
    }
    if (VAR7 && VAR48)
    {
        VAR49 *VAR50 = FUN7(8 * 256);
        VAR51 *VAR52;
        VAR21 = FUN9(VAR53, VAR32, 1);
        VAR22 = FUN9(VAR54, VAR55, 1);
        VAR52 = FUN28(VAR13, VAR16 + 3, 0xb100, FUN14(9), *VAR21, *VAR22, FUN29());
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            VAR56 *VAR57;
            VAR57 = FUN30((VAR29 *)VAR52, "");
            FUN31(VAR57, "", 0x50 + VAR9);
            FUN32(VAR57, "", VAR50 + (VAR9 * 256));
            FUN33(VAR57);
        }
    }
    if (VAR15)
    {
        FUN34(VAR15);
    }
    if (VAR7)
    {
        FUN35(VAR13);
    }
}