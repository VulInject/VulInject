static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, PreallocMode VAR7, VAR8 *VAR9, int VAR10, int VAR11, VAR12 **VAR13)
{
    int VAR14;
    VAR14 = FUN2(VAR6);
    if (VAR14 < VAR15 || VAR14 > VAR16 || (1 << VAR14) != VAR6)
    {
        FUN3(VAR13, ""
                         "",
                   1 << VAR15, 1 << (VAR16 - 10));
        return -VAR17;
    }
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    VAR12 *VAR24 = NULL;
    int VAR25;
    if (VAR7 == VAR26 || VAR7 == VAR27)
    {
        int64_t VAR28 = 0;
        uint64_t VAR29, VAR30, VAR31, VAR32;
        int64_t VAR33 = FUN4(VAR2, VAR6);
        int VAR34, VAR35;
        double VAR36 = (1 << VAR11) / 8.;
        VAR34 = VAR14 - (VAR11 - 3);
        VAR35 = 1 << VAR34;
        VAR28 += VAR6;
        VAR32 = VAR33 / VAR6;
        VAR32 = FUN4(VAR32, VAR6 / sizeof(VAR22));
        VAR28 += VAR32 * sizeof(VAR22);
        VAR31 = VAR32 * sizeof(VAR22) / VAR6;
        VAR31 = FUN4(VAR31, VAR6 / sizeof(VAR22));
        VAR28 += VAR31 * sizeof(VAR22);
        VAR30 = (VAR33 + VAR28 + VAR6) / (VAR6 - VAR36 - VAR36 * sizeof(VAR22) / VAR6);
        VAR28 += FUN5(VAR30, VAR35) * VAR6;
        VAR29 = VAR30 / VAR35;
        VAR29 = FUN4(VAR29, VAR6 / sizeof(VAR22));
        VAR28 += VAR29 * sizeof(VAR22);
        FUN6(VAR9, VAR37, VAR33 + VAR28, &VAR38);
        FUN7(VAR9, VAR39, VAR40[VAR7], &VAR38);
    }
    VAR25 = FUN8(VAR1, VAR9, &VAR24);
    if (VAR25 < 0)
    {
        FUN9(VAR13, VAR24);
        return VAR25;
    }
    VAR19 = NULL;
    VAR25 = FUN10(&VAR19, VAR1, NULL, NULL, VAR41 | VAR42, NULL, &VAR24);
    if (VAR25 < 0)
    {
        FUN9(VAR13, VAR24);
        return VAR25;
    }
    FUN11((1 << VAR15) < sizeof(*VAR21));
    VAR21 = FUN12(VAR6);
    *VAR21 = (VAR20){
        .VAR43 = FUN13(VAR44),
        .VAR10 = FUN13(VAR10),
        .VAR14 = FUN13(VAR14),
        .VAR45 = FUN14(0),
        .VAR46 = FUN14(0),
        .VAR47 = FUN13(0),
        .VAR48 = FUN14(VAR6),
        .VAR49 = FUN13(1),
        .VAR11 = FUN13(VAR11),
        .VAR50 = FUN13(sizeof(*VAR21)),
    };
    if (VAR5 & VAR51)
    {
        VAR21->VAR52 = FUN13(VAR53);
    }
    else
    {
        VAR21->VAR52 = FUN13(VAR54);
    }
    if (VAR5 & VAR55)
    {
        VAR21->VAR56 |= FUN14(VAR57);
    }
    VAR25 = FUN15(VAR19, 0, VAR21, VAR6);
    FUN16(VAR21);
    if (VAR25 < 0)
    {
        FUN17(VAR13, -VAR25, "");
        goto VAR58;
    }
    VAR23 = FUN12(2 * VAR6);
    VAR23[0] = FUN14(2 * VAR6);
    VAR25 = FUN15(VAR19, VAR6, VAR23, 2 * VAR6);
    FUN16(VAR23);
    if (VAR25 < 0)
    {
        FUN17(VAR13, -VAR25, "");
        goto VAR58;
    }
    FUN18(VAR19);
    VAR19 = NULL;
    VAR25 = FUN10(&VAR19, VAR1, NULL, NULL, VAR41 | VAR59 | VAR60, &VAR61, &VAR24);
    if (VAR25 < 0)
    {
        FUN9(VAR13, VAR24);
        goto VAR58;
    }
    VAR25 = FUN19(VAR19, 3 * VAR6);
    if (VAR25 < 0)
    {
        FUN17(VAR13, -VAR25, ""
                                     "");
        goto VAR58;
    }
    else if (VAR25 != 0)
    {
        FUN20("");
        FUN21();
    }
    VAR25 = FUN22(VAR19, VAR2);
    if (VAR25 < 0)
    {
        FUN17(VAR13, -VAR25, "");
        goto VAR58;
    }
    if (VAR3)
    {
        VAR25 = FUN23(VAR19, VAR3, VAR4);
        if (VAR25 < 0)
        {
            FUN17(VAR13, -VAR25, ""
                                         "",
                             VAR3, VAR4);
            goto VAR58;
        }
    }
    if (VAR7 != VAR62)
    {
        VAR63 *VAR64 = VAR19->VAR65;
        FUN24(&VAR64->VAR66);
        VAR25 = FUN25(VAR19);
        FUN26(&VAR64->VAR66);
        if (VAR25 < 0)
        {
            FUN17(VAR13, -VAR25, "");
            goto VAR58;
        }
    }
    FUN18(VAR19);
    VAR19 = NULL;
    VAR25 = FUN10(&VAR19, VAR1, NULL, NULL, VAR41 | VAR59 | VAR67, &VAR61, &VAR24);
    if (VAR24)
    {
        FUN9(VAR13, VAR24);
        goto VAR58;
    }
    VAR25 = 0;
VAR58:
    if (VAR19)
    {
        FUN18(VAR19);
    }
    return VAR25;
}