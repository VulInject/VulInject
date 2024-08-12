static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5 = FUN2(VAR3, VAR2, VAR2);
    VAR6 *VAR7;
    char VAR8[VAR9], VAR10[VAR9], *VAR11;
    ssize_t VAR12;
    struct stat VAR13;
    int VAR14;
    int VAR15;
    snprintf(VAR8, sizeof(VAR8), "", VAR5->VAR16.VAR17, VAR5->VAR16.VAR18, VAR5->VAR16.VAR19, VAR5->VAR16.VAR20);
    if (FUN3(VAR8, &VAR13) < 0)
    {
        FUN4("", VAR8);
        return -VAR21;
    }
    strncat(VAR8, "", sizeof(VAR8) - strlen(VAR8) - 1);
    VAR12 = readlink(VAR8, VAR10, VAR9);
    if (VAR12 <= 0)
    {
        FUN4("");
        return -VAR21;
    }
    VAR10[VAR12] = 0;
    VAR11 = FUN5(VAR10);
    if (sscanf(VAR11, "", &VAR14) != 1)
    {
        FUN4("", VAR8);
        return -VAR21;
    }
    FUN6("", VAR22, VAR5->VAR16.VAR17, VAR5->VAR16.VAR18, VAR5->VAR16.VAR19, VAR5->VAR16.VAR20, VAR14);
    VAR7 = FUN7(VAR14);
    if (!VAR7)
    {
        FUN4("", VAR14);
        return -VAR23;
    }
    snprintf(VAR8, sizeof(VAR8), "", VAR5->VAR16.VAR17, VAR5->VAR16.VAR18, VAR5->VAR16.VAR19, VAR5->VAR16.VAR20);
    FUN8(VAR4, &VAR7->VAR24, VAR25)
    {
        if (VAR4->VAR16.VAR17 == VAR5->VAR16.VAR17 && VAR4->VAR16.VAR18 == VAR5->VAR16.VAR18 && VAR4->VAR16.VAR19 == VAR5->VAR16.VAR19 && VAR4->VAR16.VAR20 == VAR5->VAR16.VAR20)
        {
            FUN4("", VAR8);
            FUN9(VAR7);
            return -VAR26;
        }
    }
    VAR15 = FUN10(VAR7, VAR8, VAR5);
    if (VAR15)
    {
        FUN4("", VAR8);
        FUN9(VAR7);
        return VAR15;
    }
    VAR15 = pread(VAR5->VAR27, VAR5->VAR2.VAR28, FUN11(FUN12(&VAR5->VAR2), VAR5->VAR29), VAR5->VAR30);
    if (VAR15 < (int)FUN11(FUN12(&VAR5->VAR2), VAR5->VAR29))
    {
        VAR15 = VAR15 < 0 ? -VAR21 : -VAR31;
        FUN4("");
        goto VAR32;
    }
    VAR5->VAR33 = FUN13(VAR5->VAR29);
    memset(VAR5->VAR33 + VAR34, 0xff, 4);
    VAR5->VAR33[VAR35] = VAR36;
    if (VAR5->VAR2.VAR37 & VAR38)
    {
        VAR5->VAR2.VAR28[VAR35] |= VAR36;
    }
    else
    {
        VAR5->VAR2.VAR28[VAR35] &= ~VAR36;
    }
    memset(&VAR5->VAR2.VAR28[VAR39], 0, 24);
    memset(&VAR5->VAR2.VAR28[VAR34], 0, 4);
    FUN14(VAR5);
    VAR15 = FUN15(VAR5);
    if (VAR15)
    {
        goto VAR32;
    }
    FUN16(VAR5);
    VAR15 = FUN17(VAR5);
    if (VAR15)
    {
        goto VAR40;
    }
    if (VAR2->VAR37 & VAR41)
    {
        memset(VAR5->VAR33 + VAR2->VAR42, 0xff, VAR43);
    }
    if (VAR2->VAR37 & VAR44)
    {
        memset(VAR5->VAR33 + VAR2->VAR45, 0xff, VAR5->VAR46);
    }
    if (FUN18(&VAR5->VAR2, VAR47, 1))
    {
        VAR5->VAR48.VAR49 = FUN19(VAR50, VAR51, VAR5);
        FUN20(&VAR5->VAR2, VAR52);
        VAR15 = FUN21(VAR5);
        if (VAR15)
        {
            goto VAR40;
        }
    }
    FUN22(VAR5->VAR53, &VAR2->VAR54, NULL);
    FUN23(VAR5);
    return 0;
VAR40:
    FUN20(&VAR5->VAR2, NULL);
    FUN24(VAR5);
    FUN25(VAR5);
VAR32:
    FUN26(VAR5->VAR33);
    FUN27(VAR5);
    FUN9(VAR7);
    return VAR15;
}