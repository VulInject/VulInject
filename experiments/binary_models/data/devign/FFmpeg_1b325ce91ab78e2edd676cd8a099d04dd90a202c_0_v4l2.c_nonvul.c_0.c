static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8 = 0;
    uint32_t VAR9;
    enum AVCodecID VAR10 = VAR11;
    enum AVPixelFormat VAR12 = VAR13;
    VAR7 = FUN2(VAR2, NULL);
    if (!VAR7)
        return FUN3(VAR14);
    VAR4->VAR15 = FUN4(VAR2);
    if (VAR4->VAR15 < 0)
        return VAR4->VAR15;
    if (VAR4->VAR16)
    {
        FUN5(VAR2, VAR4->VAR15, VAR4->VAR16);
        return VAR17;
    }
    FUN6(VAR7, 64, 1, 1000000);
    if (VAR4->VAR18)
    {
        VAR19 *VAR20 = FUN7(VAR4->VAR18);
        if (VAR20)
            VAR2->VAR21 = VAR20->VAR22;
        VAR12 = FUN8(VAR4->VAR18);
        if (VAR12 == VAR13 && !VAR20)
        {
            FUN9(VAR2, VAR23, "", VAR4->VAR18);
            return FUN3(VAR24);
        }
    }
    if (!VAR4->VAR25 && !VAR4->VAR26)
    {
        struct v4l2_format VAR27;
        FUN9(VAR2, VAR28, "");
        VAR27.VAR29 = VAR30;
        if (FUN10(VAR4->VAR15, VAR31, &VAR27) < 0)
        {
            FUN9(VAR2, VAR23, "", strerror(VAR32));
            return FUN3(VAR32);
        }
        VAR4->VAR25 = VAR27.VAR27.VAR33.VAR25;
        VAR4->VAR26 = VAR27.VAR27.VAR33.VAR26;
        FUN9(VAR2, VAR28, "", VAR4->VAR25, VAR4->VAR26);
    }
    VAR9 = FUN11(VAR2, VAR12, &VAR4->VAR25, &VAR4->VAR26, &VAR10);
    if (VAR10 != VAR11 && VAR2->VAR21 == VAR11)
        VAR2->VAR21 = VAR10;
    if (VAR9 == 0)
    {
        FUN9(VAR2, VAR23, ""
                                 "",
               FUN12(VAR2->VAR21), VAR2->VAR21, (char *)FUN13(FUN14(VAR12), ""), VAR12);
        FUN15(VAR4->VAR15);
        return FUN3(VAR34);
    }
    if ((VAR8 = FUN16(VAR4->VAR25, VAR4->VAR26, 0, VAR2)) < 0)
        return VAR8;
    VAR4->VAR35 = VAR9;
    if ((VAR8 = FUN17(VAR2)) < 0)
        return VAR8;
    VAR7->VAR20->VAR12 = FUN18(VAR9, VAR10);
    VAR4->VAR36 = FUN19(VAR7->VAR20->VAR12, VAR4->VAR25, VAR4->VAR26);
    if ((VAR8 = FUN20(VAR2)) || (VAR8 = FUN21(VAR2)) < 0)
    {
        FUN15(VAR4->VAR15);
        return VAR8;
    }
    VAR4->VAR37 = FUN22(VAR4->VAR15);
    VAR7->VAR20->VAR38 = VAR39;
    VAR7->VAR20->VAR10 = VAR10;
    if (VAR10 == VAR40)
        VAR7->VAR20->VAR41 = FUN23(VAR7->VAR20->VAR12);
    if (VAR9 == VAR42)
        VAR7->VAR20->VAR41 = FUN24('', '', '', '');
    VAR7->VAR20->VAR25 = VAR4->VAR25;
    VAR7->VAR20->VAR26 = VAR4->VAR26;
    VAR7->VAR20->VAR43 = VAR4->VAR36 * FUN25(VAR7->VAR44) * 8;
    return 0;
}