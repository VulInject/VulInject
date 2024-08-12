static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    struct video_tuner VAR19;
    struct video_audio VAR20;
    struct video_picture VAR21;
    int VAR22;
    int VAR23 = sizeof(VAR24) / sizeof(VAR24[0]);
    if (VAR4->VAR10 <= 0 || VAR4->VAR11 <= 0 || VAR4->VAR25.VAR26 <= 0)
    {
        FUN2(VAR2, VAR27, "", VAR4->VAR10, VAR4->VAR11, VAR4->VAR25.VAR26);
        return -1;
    }
    VAR10 = VAR4->VAR10;
    VAR11 = VAR4->VAR11;
    VAR15 = VAR4->VAR25.VAR26;
    VAR16 = VAR4->VAR25.VAR28;
    if ((unsigned)VAR10 > 32767 || (unsigned)VAR11 > 32767)
    {
        FUN2(VAR2, VAR27, "", VAR10, VAR11);
        return -1;
    }
    VAR9 = FUN3(VAR2, 0);
    if (!VAR9)
        return FUN4(VAR29);
    FUN5(VAR9, 64, 1, 1000000);
    VAR6->VAR10 = VAR10;
    VAR6->VAR11 = VAR11;
    VAR6->VAR15 = VAR15;
    VAR6->VAR16 = VAR16;
    VAR12 = open(VAR2->VAR30, VAR31);
    if (VAR12 < 0)
    {
        FUN2(VAR2, VAR27, "", VAR2->VAR30, strerror(VAR32));
        goto VAR33;
    }
    if (FUN6(VAR12, VAR34, &VAR6->VAR35) < 0)
    {
        FUN2(VAR2, VAR27, "", strerror(VAR32));
        goto VAR33;
    }
    if (!(VAR6->VAR35.VAR36 & VAR37))
    {
        FUN2(VAR2, VAR27, "");
        goto VAR33;
    }
    VAR17 = -1;
    VAR18 = -1;
    for (VAR22 = 0; VAR22 < VAR23; VAR22++)
    {
        if (VAR4->VAR38 == VAR24[VAR22].VAR38)
        {
            VAR17 = VAR24[VAR22].VAR39;
            VAR18 = VAR24[VAR22].VAR40;
            break;
        }
    }
    if (VAR4->VAR41 && !FUN6(VAR12, VAR42, &VAR19))
    {
        if (!FUN7(VAR4->VAR41, ""))
            VAR19.VAR43 = VAR44;
        else if (!FUN7(VAR4->VAR41, ""))
            VAR19.VAR43 = VAR45;
        else
            VAR19.VAR43 = VAR46;
        FUN6(VAR12, VAR47, &VAR19);
    }
    VAR20.VAR20 = 0;
    FUN6(VAR12, VAR48, &VAR20);
    memcpy(&VAR6->VAR49, &VAR20, sizeof(VAR20));
    VAR20.VAR50 &= ~VAR51;
    FUN6(VAR12, VAR52, &VAR20);
    FUN6(VAR12, VAR53, &VAR21);
    FUN8("", VAR21.VAR54, VAR21.VAR55, VAR21.VAR56, VAR21.VAR57, VAR21.VAR58);
    VAR21.VAR39 = VAR17;
    VAR21.VAR40 = VAR18;
    if (VAR17 == -1 || (VAR14 = FUN6(VAR12, VAR59, &VAR21)) < 0)
    {
        for (VAR22 = 0; VAR22 < VAR23; VAR22++)
        {
            VAR21.VAR39 = VAR24[VAR22].VAR39;
            VAR21.VAR40 = VAR24[VAR22].VAR40;
            if (-1 != FUN6(VAR12, VAR59, &VAR21))
                break;
        }
        if (VAR22 >= VAR23)
            goto VAR60;
    }
    VAR14 = FUN6(VAR12, VAR61, &VAR6->VAR62);
    if (VAR14 < 0)
    {
        struct video_window VAR63;
        int VAR64;
        VAR63.VAR65 = 0;
        VAR63.VAR66 = 0;
        VAR63.VAR10 = VAR10;
        VAR63.VAR11 = VAR11;
        VAR63.VAR67 = -1;
        VAR63.VAR50 = 0;
        FUN6(VAR12, VAR68, &VAR63);
        VAR6->VAR69 = VAR21.VAR39;
        VAR64 = 1;
        FUN6(VAR12, VAR70, &VAR64);
        VAR6->VAR71 = FUN9() * VAR6->VAR15 / VAR6->VAR16;
        VAR6->VAR72 = 0;
    }
    else
    {
        VAR6->VAR73 = FUN10(0, VAR6->VAR62.VAR74, VAR75 | VAR76, VAR77, VAR12, 0);
        if ((unsigned char *)-1 == VAR6->VAR73)
        {
            VAR6->VAR73 = FUN10(0, VAR6->VAR62.VAR74, VAR75 | VAR76, VAR78, VAR12, 0);
            if ((unsigned char *)-1 == VAR6->VAR73)
            {
                FUN2(VAR2, VAR27, "", strerror(VAR32));
                goto VAR33;
            }
        }
        VAR6->VAR79 = 0;
        VAR6->VAR71 = FUN9() * VAR6->VAR15 / VAR6->VAR16;
        VAR6->VAR80.VAR81 = VAR6->VAR79 % VAR6->VAR62.VAR82;
        VAR6->VAR80.VAR11 = VAR11;
        VAR6->VAR80.VAR10 = VAR10;
        VAR6->VAR80.VAR83 = VAR21.VAR39;
        VAR14 = FUN6(VAR12, VAR84, &VAR6->VAR80);
        if (VAR14 < 0)
        {
            if (VAR32 != VAR85)
            {
            VAR60:
                FUN2(VAR2, VAR27, "");
            }
            else
            {
                FUN2(VAR2, VAR27, "");
            }
            goto VAR33;
        }
        for (VAR22 = 1; VAR22 < VAR6->VAR62.VAR82; VAR22++)
        {
            VAR6->VAR80.VAR81 = VAR22;
            FUN6(VAR12, VAR84, &VAR6->VAR80);
        }
        VAR6->VAR69 = VAR6->VAR80.VAR83;
        VAR6->VAR72 = 1;
    }
    for (VAR22 = 0; VAR22 < VAR23; VAR22++)
    {
        if (VAR6->VAR69 == VAR24[VAR22].VAR39)
        {
            VAR13 = VAR10 * VAR11 * VAR24[VAR22].VAR40 / 8;
            VAR9->VAR86->VAR38 = VAR24[VAR22].VAR38;
            break;
        }
    }
    if (VAR22 >= VAR23)
        goto VAR33;
    VAR6->VAR87 = VAR12;
    VAR6->VAR13 = VAR13;
    VAR9->VAR86->VAR88 = VAR89;
    VAR9->VAR86->VAR90 = VAR91;
    VAR9->VAR86->VAR10 = VAR10;
    VAR9->VAR86->VAR11 = VAR11;
    VAR9->VAR86->VAR25.VAR26 = VAR15;
    VAR9->VAR86->VAR25.VAR28 = VAR16;
    VAR9->VAR86->VAR92 = VAR13 * 1 / FUN11(VAR9->VAR86->VAR25) * 8;
    return 0;
VAR33:
    if (VAR12 >= 0)
        close(VAR12);
    FUN12(VAR9);
    return FUN4(VAR93);
}