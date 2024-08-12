static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3());
    VAR7 *VAR8 = FUN4(VAR2);
    VAR9 *VAR10 = FUN5(VAR8);
    VAR11 *VAR12 = FUN6(VAR8);
    VAR13 *VAR14 = FUN7(VAR8);
    char *VAR15;
    int VAR16;
    VAR17 *VAR18;
    uint64_t VAR19 = 4096;
    if (VAR10->VAR20 != (VAR21)-1)
    {
        hwaddr VAR22;
        if ((VAR10->VAR23 != (VAR24)-1) || (VAR10->VAR25 != (VAR21)-1) || (VAR10->VAR26 != (VAR27)-1) || (VAR10->VAR28 != (VAR27)-1))
        {
            FUN8(VAR4, ""VAR20\""
                             "");
            return;
        }
        if (VAR10->VAR20 > VAR29)
        {
            FUN8(VAR4, ""VAR20\"", VAR29);
            return;
        }
        VAR10->VAR23 = VAR30 + VAR10->VAR20;
        VAR10->VAR25 = FUN9(VAR10->VAR20, 0);
        VAR22 = VAR31 + VAR10->VAR20 * VAR32;
        VAR10->VAR26 = VAR22 + VAR33;
        VAR10->VAR28 = VAR22 + VAR34;
    }
    if (VAR10->VAR23 == (VAR24)-1)
    {
        FUN8(VAR4, "");
        return;
    }
    if (VAR10->VAR25 == (VAR21)-1)
    {
        FUN8(VAR4, "");
        return;
    }
    if (VAR10->VAR26 == (VAR27)-1)
    {
        FUN8(VAR4, "");
        return;
    }
    if (VAR10->VAR28 == (VAR27)-1)
    {
        FUN8(VAR4, "");
        return;
    }
    if (FUN10(VAR6, VAR10->VAR23))
    {
        FUN8(VAR4, "");
        return;
    }
    VAR10->VAR35 = FUN11("" VAR36, VAR10->VAR23);
    VAR15 = alloca(strlen(VAR10->VAR35) + 32);
    sprintf(VAR15, "", VAR10->VAR35);
    FUN12(&VAR10->VAR37, FUN13(VAR10), VAR15, VAR38);
    sprintf(VAR15, "", VAR10->VAR35);
    FUN14(&VAR10->VAR39, FUN13(VAR10), VAR15, &VAR10->VAR37, VAR40, VAR10->VAR41);
    FUN15(FUN16(), VAR10->VAR26, &VAR10->VAR39);
    sprintf(VAR15, "", VAR10->VAR35);
    FUN12(&VAR10->VAR42, FUN13(VAR10), VAR15, VAR43);
    sprintf(VAR15, "", VAR10->VAR35);
    FUN14(&VAR10->VAR44, FUN13(VAR10), VAR15, &VAR10->VAR42, 0, VAR43);
    FUN15(FUN16(), VAR10->VAR28, &VAR10->VAR44);
    VAR18 = FUN17(VAR2, NULL, VAR45, VAR46, VAR10, &VAR10->VAR37, &VAR10->VAR42, FUN18(0, 0), VAR47, VAR48);
    VAR12->VAR18 = VAR18;
    FUN19(FUN20(VAR12->VAR18), FUN21(VAR10), NULL);
    sprintf(VAR15, "", VAR10->VAR35);
    FUN12(&VAR10->VAR49, FUN13(VAR10), VAR15, VAR38);
    FUN22(&VAR10->VAR50, &VAR10->VAR49, VAR10->VAR35);
    if (FUN23())
    {
        VAR19 = FUN24();
    }
    FUN25(&VAR10->VAR51, NULL, &VAR52, VAR6, "", VAR19);
    FUN15(&VAR10->VAR49, VAR53, &VAR10->VAR51);
    FUN26(VAR18, VAR54, VAR10);
    FUN27(VAR18, VAR55);
    FUN28(&VAR6->VAR56, VAR10, VAR57);
    for (VAR16 = 0; VAR16 < VAR47; VAR16++)
    {
        uint32_t VAR58;
        VAR58 = FUN29(VAR6->VAR59, 0, 1, true, false);
        if (!VAR58)
        {
            FUN8(VAR4, "");
            return;
        }
        VAR10->VAR60[VAR16].VAR58 = VAR58;
    }
    if (VAR10->VAR61)
    {
        for (VAR16 = 0; VAR16 < VAR62 * 8; VAR16++)
        {
            FUN30(FUN13(VAR12), VAR63, (VAR10->VAR20 << 16) | VAR16);
        }
    }
    if (!VAR14->VAR64)
    {
        FUN8(VAR4, "");
        return;
    }
    VAR14->FUN31(VAR10, VAR4);
    VAR10->VAR65 = FUN32(VAR66, VAR67, VAR68, VAR68);
}