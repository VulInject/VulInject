static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8 = 0;
    uint32_t VAR9;
    enum AVCodecID VAR10 = VAR11;
    enum AVPixelFormat VAR12 = VAR13;
    struct v4l2_input VAR14 = {0};
    VAR7 = FUN2(VAR2, NULL);
    if (!VAR7)
        return FUN3(VAR15);
    if (VAR4->VAR16)
        VAR17 = fopen("", "");
    VAR4->VAR18 = FUN4(VAR2);
    if (VAR4->VAR18 < 0)
        return VAR4->VAR18;
    if (VAR4->VAR19 != -1)
    {
        FUN5(VAR2, VAR20, "", VAR4->VAR19);
        if (FUN6(VAR4->VAR18, VAR21, &VAR4->VAR19) < 0)
        {
            VAR8 = FUN3(VAR22);
            FUN5(VAR2, VAR23, "", FUN7(VAR8));
            goto VAR24;
        }
    }
    else
    {
        if (FUN6(VAR4->VAR18, VAR25, &VAR4->VAR19) < 0)
        {
            VAR8 = FUN3(VAR22);
            FUN5(VAR2, VAR23, "", FUN7(VAR8));
            goto VAR24;
        }
    }
    VAR14.VAR26 = VAR4->VAR19;
    if (FUN6(VAR4->VAR18, VAR27, &VAR14) < 0)
    {
        VAR8 = FUN3(VAR22);
        FUN5(VAR2, VAR23, "", FUN7(VAR8));
        goto VAR24;
    }
    VAR4->VAR28 = VAR14.VAR29;
    FUN5(VAR2, VAR20, "" VAR30 "", VAR4->VAR19, VAR14.VAR31, (VAR32)VAR14.VAR29);
    if (VAR4->VAR33)
    {
        FUN8(VAR2, VAR4->VAR33);
        VAR8 = VAR34;
        goto VAR24;
    }
    if (VAR4->VAR35)
    {
        FUN9(VAR2);
        VAR8 = VAR34;
        goto VAR24;
    }
    FUN10(VAR7, 64, 1, 1000000);
    if ((VAR8 = FUN11(VAR2)) < 0)
        goto VAR24;
    if (VAR4->VAR36)
    {
        VAR37 *VAR38 = FUN12(VAR4->VAR36);
        if (VAR38)
            VAR2->VAR39 = VAR38->VAR40;
        VAR12 = FUN13(VAR4->VAR36);
        if (VAR12 == VAR13 && !VAR38)
        {
            FUN5(VAR2, VAR23, "", VAR4->VAR36);
            VAR8 = FUN3(VAR41);
            goto VAR24;
        }
    }
    if (!VAR4->VAR42 && !VAR4->VAR43)
    {
        struct v4l2_format VAR44 = {.VAR45 = VAR46};
        FUN5(VAR2, VAR47, "");
        if (FUN6(VAR4->VAR18, VAR48, &VAR44) < 0)
        {
            VAR8 = FUN3(VAR22);
            FUN5(VAR2, VAR23, "", FUN7(VAR8));
            goto VAR24;
        }
        VAR4->VAR42 = VAR44.VAR44.VAR49.VAR42;
        VAR4->VAR43 = VAR44.VAR44.VAR49.VAR43;
        FUN5(VAR2, VAR47, "", VAR4->VAR42, VAR4->VAR43);
    }
    VAR8 = FUN14(VAR2, VAR12, &VAR4->VAR42, &VAR4->VAR43, &VAR9, &VAR10);
    if (VAR8 < 0)
        goto VAR24;
    if (VAR10 != VAR11 && VAR2->VAR39 == VAR11)
        VAR2->VAR39 = VAR10;
    if ((VAR8 = FUN15(VAR4->VAR42, VAR4->VAR43, 0, VAR2)) < 0)
        goto VAR24;
    VAR4->VAR50 = VAR9;
    VAR7->VAR38->VAR12 = FUN16(VAR9, VAR10);
    VAR4->VAR51 = FUN17(VAR7->VAR38->VAR12, VAR4->VAR42, VAR4->VAR43);
    if ((VAR8 = FUN18(VAR2)) || (VAR8 = FUN19(VAR2)) < 0)
        goto VAR24;
    VAR4->VAR52 = FUN20(VAR4);
    VAR7->VAR38->VAR53 = VAR54;
    VAR7->VAR38->VAR10 = VAR10;
    if (VAR10 == VAR55)
        VAR7->VAR38->VAR56 = FUN21(VAR7->VAR38->VAR12);
    else if (VAR10 == VAR57)
    {
        VAR7->VAR58 = VAR59;
    }
    if (VAR9 == VAR60)
        VAR7->VAR38->VAR56 = FUN22('', '', '', '');
    else if (VAR9 == VAR61)
        VAR7->VAR38->VAR56 = FUN22('', '', '', '');
    VAR7->VAR38->VAR42 = VAR4->VAR42;
    VAR7->VAR38->VAR43 = VAR4->VAR43;
    if (VAR7->VAR62.VAR63)
        VAR7->VAR38->VAR64 = VAR4->VAR51 * FUN23(VAR7->VAR62) * 8;
    return 0;
VAR24:
    FUN24(VAR4->VAR18);
    return VAR8;
}