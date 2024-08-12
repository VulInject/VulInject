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
    VAR16 = fopen("", "");
    VAR4->VAR17 = FUN4(VAR2);
    if (VAR4->VAR17 < 0)
        return VAR4->VAR17;
    if (VAR4->VAR18 != -1)
    {
        FUN5(VAR2, VAR19, "", VAR4->VAR18);
        if (FUN6(VAR4->VAR17, VAR20, &VAR4->VAR18) < 0)
        {
            VAR8 = FUN3(VAR21);
            FUN5(VAR2, VAR22, "", FUN7(VAR8));
            return VAR8;
        }
    }
    else
    {
        if (FUN6(VAR4->VAR17, VAR23, &VAR4->VAR18) < 0)
        {
            VAR8 = FUN3(VAR21);
            FUN5(VAR2, VAR22, "", FUN7(VAR8));
            return VAR8;
        }
    }
    VAR14.VAR24 = VAR4->VAR18;
    if (FUN6(VAR4->VAR17, VAR25, &VAR14) < 0)
    {
        VAR8 = FUN3(VAR21);
        FUN5(VAR2, VAR22, "", FUN7(VAR8));
        return VAR8;
    }
    VAR4->VAR26 = VAR14.VAR27;
    FUN5(VAR2, VAR19, "", VAR4->VAR18, VAR14.VAR28);
    if (VAR4->VAR29)
    {
        FUN8(VAR2, VAR4->VAR17, VAR4->VAR29);
        return VAR30;
    }
    if (VAR4->VAR31)
    {
        FUN9(VAR2);
        return VAR30;
    }
    FUN10(VAR7, 64, 1, 1000000);
    if (VAR4->VAR32)
    {
        VAR33 *VAR34 = FUN11(VAR4->VAR32);
        if (VAR34)
            VAR2->VAR35 = VAR34->VAR36;
        VAR12 = FUN12(VAR4->VAR32);
        if (VAR12 == VAR13 && !VAR34)
        {
            FUN5(VAR2, VAR22, "", VAR4->VAR32);
            return FUN3(VAR37);
        }
    }
    if (!VAR4->VAR38 && !VAR4->VAR39)
    {
        struct v4l2_format VAR40;
        FUN5(VAR2, VAR41, "");
        VAR40.VAR42 = VAR43;
        if (FUN6(VAR4->VAR17, VAR44, &VAR40) < 0)
        {
            VAR8 = FUN3(VAR21);
            FUN5(VAR2, VAR22, "", FUN7(VAR8));
            return VAR8;
        }
        VAR4->VAR38 = VAR40.VAR40.VAR45.VAR38;
        VAR4->VAR39 = VAR40.VAR40.VAR45.VAR39;
        FUN5(VAR2, VAR41, "", VAR4->VAR38, VAR4->VAR39);
    }
    VAR8 = FUN13(VAR2, VAR12, &VAR4->VAR38, &VAR4->VAR39, &VAR9, &VAR10);
    if (VAR8 < 0)
    {
        FUN14(VAR4->VAR17);
        return VAR8;
    }
    if (VAR10 != VAR11 && VAR2->VAR35 == VAR11)
        VAR2->VAR35 = VAR10;
    if ((VAR8 = FUN15(VAR4->VAR38, VAR4->VAR39, 0, VAR2)) < 0)
        return VAR8;
    VAR4->VAR46 = VAR9;
    if ((VAR8 = FUN16(VAR2)) < 0)
        return VAR8;
    VAR7->VAR34->VAR12 = FUN17(VAR9, VAR10);
    VAR4->VAR47 = FUN18(VAR7->VAR34->VAR12, VAR4->VAR38, VAR4->VAR39);
    if ((VAR8 = FUN19(VAR2)) || (VAR8 = FUN20(VAR2)) < 0)
    {
        FUN14(VAR4->VAR17);
        return VAR8;
    }
    VAR4->VAR48 = FUN21(VAR4->VAR17);
    VAR7->VAR34->VAR49 = VAR50;
    VAR7->VAR34->VAR10 = VAR10;
    if (VAR10 == VAR51)
        VAR7->VAR34->VAR52 = FUN22(VAR7->VAR34->VAR12);
    if (VAR9 == VAR53)
        VAR7->VAR34->VAR52 = FUN23('', '', '', '');
    else if (VAR9 == VAR54)
        VAR7->VAR34->VAR52 = FUN23('', '', '', '');
    VAR7->VAR34->VAR38 = VAR4->VAR38;
    VAR7->VAR34->VAR39 = VAR4->VAR39;
    VAR7->VAR34->VAR55 = VAR4->VAR47 * FUN24(VAR7->VAR56) * 8;
    return 0;
}