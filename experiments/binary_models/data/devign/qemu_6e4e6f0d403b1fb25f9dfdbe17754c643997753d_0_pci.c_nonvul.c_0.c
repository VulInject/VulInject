static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10;
    char *VAR11, VAR12[VAR13], *VAR14;
    VAR3 *VAR15 = NULL;
    ssize_t VAR16;
    struct stat VAR17;
    int VAR18;
    int VAR19, VAR20;
    if (!VAR6->VAR21.VAR22)
    {
        if (!(~VAR6->VAR23.VAR24 || ~VAR6->VAR23.VAR25 || ~VAR6->VAR23.VAR26 || ~VAR6->VAR23.VAR27))
        {
            FUN3(VAR4, "");
            FUN4(VAR4, ""
                                    "");
            return;
        }
        VAR6->VAR21.VAR22 = FUN5("", VAR6->VAR23.VAR24, VAR6->VAR23.VAR25, VAR6->VAR23.VAR26, VAR6->VAR23.VAR27);
    }
    if (FUN6(VAR6->VAR21.VAR22, &VAR17) < 0)
    {
        FUN7(VAR4, VAR28, "");
        FUN8(VAR4, VAR29, VAR6->VAR21.VAR22);
        return;
    }
    VAR6->VAR21.VAR30 = FUN9(FUN10(VAR6->VAR21.VAR22));
    VAR6->VAR21.VAR31 = &VAR32;
    VAR6->VAR21.VAR33 = VAR34;
    VAR11 = FUN5("", VAR6->VAR21.VAR22);
    VAR16 = readlink(VAR11, VAR12, sizeof(VAR12));
    FUN11(VAR11);
    if (VAR16 <= 0 || VAR16 >= sizeof(VAR12))
    {
        FUN7(VAR4, VAR16 < 0 ? VAR28 : VAR35, "");
        goto VAR36;
    }
    VAR12[VAR16] = 0;
    VAR14 = FUN10(VAR12);
    if (sscanf(VAR14, "", &VAR18) != 1)
    {
        FUN7(VAR4, VAR28, "", VAR12);
        goto VAR36;
    }
    FUN12(VAR6->VAR21.VAR30, VAR18);
    VAR10 = FUN13(VAR18, FUN14(VAR2), VAR4);
    if (!VAR10)
    {
        goto VAR36;
    }
    FUN15(VAR8, &VAR10->VAR37, VAR38)
    {
        if (strcmp(VAR8->VAR30, VAR6->VAR21.VAR30) == 0)
        {
            FUN3(VAR4, "");
            FUN16(VAR10);
            goto VAR36;
        }
    }
    VAR20 = FUN17(VAR10, VAR6->VAR21.VAR30, &VAR6->VAR21, VAR4);
    if (VAR20)
    {
        FUN16(VAR10);
        goto VAR36;
    }
    FUN18(VAR6, &VAR15);
    if (VAR15)
    {
        FUN19(VAR4, VAR15);
        goto VAR36;
    }
    VAR20 = pread(VAR6->VAR21.VAR39, VAR6->VAR2.VAR40, FUN20(FUN21(&VAR6->VAR2), VAR6->VAR41), VAR6->VAR42);
    if (VAR20 < (int)FUN20(FUN21(&VAR6->VAR2), VAR6->VAR41))
    {
        VAR20 = VAR20 < 0 ? -VAR28 : -VAR43;
        FUN7(VAR4, -VAR20, "");
        goto VAR36;
    }
    VAR6->VAR44 = FUN22(VAR6->VAR41);
    memset(VAR6->VAR44 + VAR45, 0xff, 4);
    if (VAR6->VAR46 != VAR47)
    {
        if (VAR6->VAR46 >= 0xffff)
        {
            FUN3(VAR4, "");
            goto VAR36;
        }
        FUN23(VAR6, VAR48, VAR6->VAR46, ~0);
        FUN24(VAR6->VAR21.VAR30, VAR6->VAR46);
    }
    else
    {
        VAR6->VAR46 = FUN25(VAR2->VAR40 + VAR48);
    }
    if (VAR6->VAR49 != VAR47)
    {
        if (VAR6->VAR49 > 0xffff)
        {
            FUN3(VAR4, "");
            goto VAR36;
        }
        FUN23(VAR6, VAR50, VAR6->VAR49, ~0);
        FUN26(VAR6->VAR21.VAR30, VAR6->VAR49);
    }
    else
    {
        VAR6->VAR49 = FUN25(VAR2->VAR40 + VAR50);
    }
    if (VAR6->VAR51 != VAR47)
    {
        if (VAR6->VAR51 > 0xffff)
        {
            FUN3(VAR4, "");
            goto VAR36;
        }
        FUN23(VAR6, VAR52, VAR6->VAR51, ~0);
        FUN27(VAR6->VAR21.VAR30, VAR6->VAR51);
    }
    if (VAR6->VAR53 != VAR47)
    {
        if (VAR6->VAR53 > 0xffff)
        {
            FUN3(VAR4, "");
            goto VAR36;
        }
        FUN23(VAR6, VAR54, VAR6->VAR53, ~0);
        FUN28(VAR6->VAR21.VAR30, VAR6->VAR53);
    }
    VAR6->VAR44[VAR55] = VAR56;
    if (VAR6->VAR2.VAR57 & VAR58)
    {
        VAR6->VAR2.VAR40[VAR55] |= VAR56;
    }
    else
    {
        VAR6->VAR2.VAR40[VAR55] &= ~VAR56;
    }
    memset(&VAR6->VAR2.VAR40[VAR59], 0, 24);
    memset(&VAR6->VAR2.VAR40[VAR45], 0, 4);
    FUN29(VAR6);
    FUN30(VAR6, &VAR15);
    if (VAR15)
    {
        FUN19(VAR4, VAR15);
        goto VAR36;
    }
    FUN31(VAR6);
    VAR20 = FUN32(VAR6, VAR4);
    if (VAR20)
    {
        goto VAR60;
    }
    if (VAR6->VAR61)
    {
        FUN33(VAR6);
    }
    for (VAR19 = 0; VAR19 < VAR62; VAR19++)
    {
        FUN34(VAR6, VAR19);
    }
    if (!VAR6->VAR63 && VAR6->VAR64 & VAR65)
    {
        struct VAR66 *VAR67;
        if (VAR6->VAR2.VAR68.VAR69)
        {
            FUN3(VAR4, ""
                             "");
            goto VAR60;
        }
        VAR20 = FUN35(&VAR6->VAR21, VAR70 | VAR71, VAR72, &VAR67);
        if (VAR20)
        {
            FUN7(VAR4, -VAR20, "");
            goto VAR60;
        }
        VAR20 = FUN36(VAR6, VAR67, VAR4);
        FUN11(VAR67);
        if (VAR20)
        {
            goto VAR60;
        }
    }
    if (VAR2->VAR57 & VAR73)
    {
        memset(VAR6->VAR44 + VAR2->VAR74, 0xff, VAR75);
    }
    if (VAR2->VAR57 & VAR76)
    {
        memset(VAR6->VAR44 + VAR2->VAR77, 0xff, VAR6->VAR78);
    }
    if (FUN37(&VAR6->VAR2, VAR79, 1))
    {
        VAR6->VAR80.VAR81 = FUN38(VAR82, VAR83, VAR6);
        FUN39(&VAR6->VAR2, VAR84);
        VAR20 = FUN40(VAR6, VAR4);
        if (VAR20)
        {
            goto VAR60;
        }
    }
    FUN41(VAR6);
    FUN42(VAR6);
    FUN43(VAR6);
    return;
VAR60:
    FUN39(&VAR6->VAR2, NULL);
    FUN44(VAR6);
    FUN45(VAR6);
VAR36:
    FUN8(VAR4, VAR29, VAR6->VAR21.VAR30);
}