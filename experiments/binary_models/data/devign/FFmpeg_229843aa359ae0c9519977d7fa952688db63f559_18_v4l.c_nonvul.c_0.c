static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10;
    int VAR11, VAR12;
    struct video_tuner VAR13;
    struct video_audio VAR14;
    struct video_picture VAR15;
    int VAR16;
    int VAR17 = FUN2(VAR18);
    FUN3(VAR2, VAR19, "");
    if (VAR4->VAR20.VAR21 <= 0)
    {
        FUN3(VAR2, VAR22, "", VAR4->VAR20.VAR21);
        return -1;
    }
    VAR6->VAR20 = VAR4->VAR20;
    VAR6->VAR23.VAR24 = VAR4->VAR24;
    VAR6->VAR23.VAR25 = VAR4->VAR25;
    VAR9 = FUN4(VAR2, NULL);
    if (!VAR9)
        return FUN5(VAR26);
    FUN6(VAR9, 64, 1, 1000000);
    VAR10 = open(VAR2->VAR27, VAR28);
    if (VAR10 < 0)
    {
        FUN3(VAR2, VAR22, "", VAR2->VAR27, strerror(VAR29));
        goto VAR30;
    }
    if (FUN7(VAR10, VAR31, &VAR6->VAR32) < 0)
    {
        FUN3(VAR2, VAR22, "", strerror(VAR29));
        goto VAR30;
    }
    if (!(VAR6->VAR32.VAR33 & VAR34))
    {
        FUN3(VAR2, VAR22, "");
        goto VAR30;
    }
    if (VAR6->VAR23.VAR24 <= 0 || VAR6->VAR23.VAR25 <= 0)
    {
        if (FUN7(VAR10, VAR35, &VAR6->VAR23, sizeof(VAR6->VAR23)) < 0)
        {
            FUN3(VAR2, VAR22, "", strerror(VAR29));
            goto VAR30;
        }
    }
    if (FUN8(VAR6->VAR23.VAR24, VAR6->VAR23.VAR25, 0, VAR2) < 0)
        return -1;
    VAR11 = -1;
    VAR12 = -1;
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        if (VAR4->VAR36 == VAR18[VAR16].VAR36)
        {
            VAR11 = VAR18[VAR16].VAR37;
            VAR12 = VAR18[VAR16].VAR38;
            break;
        }
    }
    if (!FUN7(VAR10, VAR39, &VAR13))
    {
        VAR13.VAR40 = VAR6->VAR41;
        FUN7(VAR10, VAR42, &VAR13);
    }
    VAR14.VAR14 = 0;
    FUN7(VAR10, VAR43, &VAR14);
    memcpy(&VAR6->VAR44, &VAR14, sizeof(VAR14));
    VAR14.VAR45 &= ~VAR46;
    FUN7(VAR10, VAR47, &VAR14);
    FUN7(VAR10, VAR48, &VAR15);
    FUN9(VAR2, "", VAR15.VAR49, VAR15.VAR50, VAR15.VAR51, VAR15.VAR52, VAR15.VAR53);
    VAR15.VAR37 = VAR11;
    VAR15.VAR38 = VAR12;
    if (VAR11 == -1 || FUN7(VAR10, VAR54, &VAR15) < 0)
    {
        for (VAR16 = 0; VAR16 < VAR17; VAR16++)
        {
            VAR15.VAR37 = VAR18[VAR16].VAR37;
            VAR15.VAR38 = VAR18[VAR16].VAR38;
            if (-1 != FUN7(VAR10, VAR54, &VAR15))
                break;
        }
        if (VAR16 >= VAR17)
            goto VAR55;
    }
    if (FUN7(VAR10, VAR56, &VAR6->VAR57) < 0)
    {
        int VAR58;
        VAR6->VAR23.VAR59 = 0;
        VAR6->VAR23.VAR60 = 0;
        VAR6->VAR23.VAR61 = -1;
        VAR6->VAR23.VAR45 = 0;
        if (FUN7(VAR10, VAR62, VAR6->VAR23) < 0)
        {
            FUN3(VAR2, VAR22, "", strerror(VAR29));
            goto VAR30;
        }
        VAR6->VAR63 = VAR15.VAR37;
        VAR58 = 1;
        if (FUN7(VAR10, VAR64, &VAR58) < 0)
        {
            FUN3(VAR2, VAR22, "", strerror(VAR29));
            goto VAR30;
        }
        VAR6->VAR65 = FUN10() * VAR6->VAR20.VAR21 / VAR6->VAR20.VAR66;
        VAR6->VAR67 = 0;
    }
    else
    {
        VAR6->VAR68 = FUN11(0, VAR6->VAR57.VAR69, VAR70 | VAR71, VAR72, VAR10, 0);
        if ((unsigned char *)-1 == VAR6->VAR68)
        {
            VAR6->VAR68 = FUN11(0, VAR6->VAR57.VAR69, VAR70 | VAR71, VAR73, VAR10, 0);
            if ((unsigned char *)-1 == VAR6->VAR68)
            {
                FUN3(VAR2, VAR22, "", strerror(VAR29));
                goto VAR30;
            }
        }
        VAR6->VAR74 = 0;
        VAR6->VAR65 = FUN10() * VAR6->VAR20.VAR21 / VAR6->VAR20.VAR66;
        VAR6->VAR75.VAR76 = VAR6->VAR74 % VAR6->VAR57.VAR77;
        VAR6->VAR75.VAR25 = VAR6->VAR23.VAR25;
        VAR6->VAR75.VAR24 = VAR6->VAR23.VAR24;
        VAR6->VAR75.VAR78 = VAR15.VAR37;
        if (FUN7(VAR10, VAR79, &VAR6->VAR75) < 0)
        {
            if (VAR29 != VAR80)
            {
            VAR55:
                FUN3(VAR2, VAR22, "", strerror(VAR29));
            }
            else
            {
                FUN3(VAR2, VAR22, "");
            }
            goto VAR30;
        }
        for (VAR16 = 1; VAR16 < VAR6->VAR57.VAR77; VAR16++)
        {
            VAR6->VAR75.VAR76 = VAR16;
            FUN7(VAR10, VAR79, &VAR6->VAR75);
        }
        VAR6->VAR63 = VAR6->VAR75.VAR78;
        VAR6->VAR67 = 1;
    }
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        if (VAR6->VAR63 == VAR18[VAR16].VAR37)
        {
            VAR6->VAR81 = VAR6->VAR23.VAR24 * VAR6->VAR23.VAR25 * VAR18[VAR16].VAR38 / 8;
            VAR9->VAR82->VAR36 = VAR18[VAR16].VAR36;
            break;
        }
    }
    if (VAR16 >= VAR17)
        goto VAR30;
    VAR6->VAR83 = VAR10;
    VAR9->VAR82->VAR84 = VAR85;
    VAR9->VAR82->VAR86 = VAR87;
    VAR9->VAR82->VAR24 = VAR6->VAR23.VAR24;
    VAR9->VAR82->VAR25 = VAR6->VAR23.VAR25;
    VAR9->VAR82->VAR20 = VAR6->VAR20;
    VAR9->VAR82->VAR88 = VAR6->VAR81 * 1 / FUN12(VAR9->VAR82->VAR20) * 8;
    return 0;
VAR30:
    if (VAR10 >= 0)
        close(VAR10);
    return FUN5(VAR89);
}