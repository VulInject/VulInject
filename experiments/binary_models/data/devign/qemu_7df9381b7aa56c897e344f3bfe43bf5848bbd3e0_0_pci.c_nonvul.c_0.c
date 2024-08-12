static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8;
    char *VAR9, VAR10[VAR11], *VAR12;
    ssize_t VAR13;
    struct stat VAR14;
    int VAR15;
    int VAR16;
    if (!VAR4->VAR17.VAR18)
    {
        VAR4->VAR17.VAR18 = FUN3("", VAR4->VAR19.VAR20, VAR4->VAR19.VAR21, VAR4->VAR19.VAR22, VAR4->VAR19.VAR23);
    }
    if (FUN4(VAR4->VAR17.VAR18, &VAR14) < 0)
    {
        FUN5("", VAR4->VAR17.VAR18);
        return -VAR24;
    }
    VAR4->VAR17.VAR25 = FUN6(FUN7(VAR4->VAR17.VAR18));
    VAR4->VAR17.VAR26 = &VAR27;
    VAR4->VAR17.VAR28 = VAR29;
    VAR9 = FUN3("", VAR4->VAR17.VAR18);
    VAR13 = readlink(VAR9, VAR10, sizeof(VAR10));
    FUN8(VAR9);
    if (VAR13 <= 0 || VAR13 >= sizeof(VAR10))
    {
        FUN5("");
        return VAR13 < 0 ? -VAR24 : -VAR30;
    }
    VAR10[VAR13] = 0;
    VAR12 = FUN7(VAR10);
    if (sscanf(VAR12, "", &VAR15) != 1)
    {
        FUN5("", VAR10);
        return -VAR24;
    }
    FUN9(VAR4->VAR17.VAR25, VAR15);
    VAR8 = FUN10(VAR15, FUN11(VAR2));
    if (!VAR8)
    {
        FUN5("", VAR15);
        return -VAR31;
    }
    FUN12(VAR6, &VAR8->VAR32, VAR33)
    {
        if (strcmp(VAR6->VAR25, VAR4->VAR17.VAR25) == 0)
        {
            FUN5("", VAR4->VAR17.VAR25);
            FUN13(VAR8);
            return -VAR34;
        }
    }
    VAR16 = FUN14(VAR8, VAR4->VAR17.VAR25, &VAR4->VAR17);
    if (VAR16)
    {
        FUN5("", VAR4->VAR17.VAR25);
        FUN13(VAR8);
        return VAR16;
    }
    VAR16 = FUN15(VAR4);
    if (VAR16)
    {
        return VAR16;
    }
    VAR16 = pread(VAR4->VAR17.VAR35, VAR4->VAR2.VAR36, FUN16(FUN17(&VAR4->VAR2), VAR4->VAR37), VAR4->VAR38);
    if (VAR16 < (int)FUN16(FUN17(&VAR4->VAR2), VAR4->VAR37))
    {
        VAR16 = VAR16 < 0 ? -VAR24 : -VAR39;
        FUN5("");
        return VAR16;
    }
    VAR4->VAR40 = FUN18(VAR4->VAR37);
    memset(VAR4->VAR40 + VAR41, 0xff, 4);
    if (VAR4->VAR42 != VAR43)
    {
        if (VAR4->VAR42 >= 0xffff)
        {
            FUN5("");
            return -VAR44;
        }
        FUN19(VAR4, VAR45, VAR4->VAR42, ~0);
        FUN20(VAR4->VAR17.VAR25, VAR4->VAR42);
    }
    else
    {
        VAR4->VAR42 = FUN21(VAR2->VAR36 + VAR45);
    }
    if (VAR4->VAR46 != VAR43)
    {
        if (VAR4->VAR46 > 0xffff)
        {
            FUN5("");
            return -VAR44;
        }
        FUN19(VAR4, VAR47, VAR4->VAR46, ~0);
        FUN22(VAR4->VAR17.VAR25, VAR4->VAR46);
    }
    else
    {
        VAR4->VAR46 = FUN21(VAR2->VAR36 + VAR47);
    }
    if (VAR4->VAR48 != VAR43)
    {
        if (VAR4->VAR48 > 0xffff)
        {
            FUN5("");
            return -VAR44;
        }
        FUN19(VAR4, VAR49, VAR4->VAR48, ~0);
        FUN23(VAR4->VAR17.VAR25, VAR4->VAR48);
    }
    if (VAR4->VAR50 != VAR43)
    {
        if (VAR4->VAR50 > 0xffff)
        {
            FUN5("");
            return -VAR44;
        }
        FUN19(VAR4, VAR51, VAR4->VAR50, ~0);
        FUN24(VAR4->VAR17.VAR25, VAR4->VAR50);
    }
    VAR4->VAR40[VAR52] = VAR53;
    if (VAR4->VAR2.VAR54 & VAR55)
    {
        VAR4->VAR2.VAR36[VAR52] |= VAR53;
    }
    else
    {
        VAR4->VAR2.VAR36[VAR52] &= ~VAR53;
    }
    memset(&VAR4->VAR2.VAR36[VAR56], 0, 24);
    memset(&VAR4->VAR2.VAR36[VAR41], 0, 4);
    FUN25(VAR4);
    VAR16 = FUN26(VAR4);
    if (VAR16)
    {
        return VAR16;
    }
    FUN27(VAR4);
    VAR16 = FUN28(VAR4);
    if (VAR16)
    {
        goto VAR57;
    }
    if (VAR2->VAR54 & VAR58)
    {
        memset(VAR4->VAR40 + VAR2->VAR59, 0xff, VAR60);
    }
    if (VAR2->VAR54 & VAR61)
    {
        memset(VAR4->VAR40 + VAR2->VAR62, 0xff, VAR4->VAR63);
    }
    if (FUN29(&VAR4->VAR2, VAR64, 1))
    {
        VAR4->VAR65.VAR66 = FUN30(VAR67, VAR68, VAR4);
        FUN31(&VAR4->VAR2, VAR69);
        VAR16 = FUN32(VAR4);
        if (VAR16)
        {
            goto VAR57;
        }
    }
    FUN33(VAR4);
    FUN34(VAR4);
    FUN35(VAR4);
    return 0;
VAR57:
    FUN31(&VAR4->VAR2, NULL);
    FUN36(VAR4);
    FUN37(VAR4);
    return VAR16;
}