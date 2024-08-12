FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    enum PixelFormat VAR10;
    VAR11 *VAR12;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15;
    int VAR16;
    char *VAR17, *VAR18;
    int VAR19 = 0;
    AVRational VAR20;
    VAR17 = FUN2(VAR2->VAR21);
    if (!VAR17)
        goto VAR22;
    VAR18 = strchr(VAR17, '');
    if (VAR18)
    {
        sscanf(VAR18, "", &VAR13, &VAR14);
        VAR4->VAR23 = !strstr(VAR18, "");
        *VAR18 = 0;
    }
    if ((VAR19 = FUN3(&VAR4->VAR24, &VAR4->VAR25, VAR4->VAR26)) < 0)
    {
        FUN4(VAR2, VAR27, "");
        goto VAR22;
    }
    if ((VAR19 = FUN5(&VAR20, VAR4->VAR20)) < 0)
    {
        FUN4(VAR2, VAR27, "", VAR4->VAR20);
        goto VAR22;
    }
    FUN4(VAR2, VAR28, "", VAR2->VAR21, VAR17, VAR13, VAR14, VAR4->VAR24, VAR4->VAR25);
    VAR7 = FUN6(VAR17);
    if (!VAR7)
    {
        FUN4(VAR2, VAR27, "");
        VAR19 = FUN7(VAR29);
        goto VAR22;
    }
    VAR9 = FUN8(VAR2, NULL);
    if (!VAR9)
    {
        VAR19 = FUN7(VAR30);
        goto VAR22;
    }
    FUN9(VAR9, 64, 1, 1000000);
    VAR15 = FUN10(VAR7);
    if (VAR4->VAR31)
    {
        int VAR32, VAR33;
        Window VAR34;
        VAR32 = FUN11(VAR7, VAR15);
        VAR33 = FUN12(VAR7, VAR15);
        FUN13(VAR7, FUN14(VAR7, VAR15), &VAR34, &VAR34, &VAR13, &VAR14, &VAR19, &VAR19, &VAR19);
        VAR13 -= VAR4->VAR24 / 2;
        VAR14 -= VAR4->VAR25 / 2;
        VAR13 = FUN15(FUN16(VAR13, 0), VAR32 - VAR4->VAR24);
        VAR14 = FUN15(FUN16(VAR14, 0), VAR33 - VAR4->VAR25);
        FUN4(VAR2, VAR28, "", VAR13, VAR14);
    }
    VAR16 = FUN17(VAR7);
    FUN4(VAR2, VAR28, "", VAR16 ? "" : "");
    if (VAR16)
    {
        int VAR35 = FUN18(VAR7);
        VAR12 = FUN19(VAR7, FUN20(VAR7, VAR35), FUN21(VAR7, VAR35), VAR36, NULL, &VAR4->VAR37, VAR4->VAR24, VAR4->VAR25);
        VAR4->VAR37.VAR38 = FUN22(VAR39, VAR12->VAR40 * VAR12->VAR25, VAR41 | 0777);
        if (VAR4->VAR37.VAR38 == -1)
        {
            FUN4(VAR2, VAR27, "");
            VAR19 = FUN7(VAR30);
            goto VAR22;
        }
        VAR4->VAR37.VAR42 = VAR12->VAR43 = FUN23(VAR4->VAR37.VAR38, 0, 0);
        VAR4->VAR37.VAR44 = VAR45;
        if (!FUN24(VAR7, &VAR4->VAR37))
        {
            FUN4(VAR2, VAR27, "");
            VAR19 = FUN7(VAR29);
            goto VAR22;
        }
    }
    else
    {
        VAR12 = FUN25(VAR7, FUN14(VAR7, VAR15), VAR13, VAR14, VAR4->VAR24, VAR4->VAR25, VAR46, VAR36);
    }
    switch (VAR12->VAR47)
    {
    case 8:
        FUN4(VAR2, VAR48, "");
        VAR10 = VAR49;
        break;
    case 16:
        if (VAR12->VAR50 == 0xf800 && VAR12->VAR51 == 0x07e0 && VAR12->VAR52 == 0x001f)
        {
            FUN4(VAR2, VAR48, "");
            VAR10 = VAR53;
        }
        else if (VAR12->VAR50 == 0x7c00 && VAR12->VAR51 == 0x03e0 && VAR12->VAR52 == 0x001f)
        {
            FUN4(VAR2, VAR48, "");
            VAR10 = VAR54;
        }
        else
        {
            FUN4(VAR2, VAR27, "", VAR12->VAR47);
            FUN4(VAR2, VAR27, "", VAR12->VAR50, VAR12->VAR51, VAR12->VAR52);
            VAR19 = FUN7(VAR29);
            goto VAR22;
        }
        break;
    case 24:
        if (VAR12->VAR50 == 0xff0000 && VAR12->VAR51 == 0x00ff00 && VAR12->VAR52 == 0x0000ff)
        {
            VAR10 = VAR55;
        }
        else if (VAR12->VAR50 == 0x0000ff && VAR12->VAR51 == 0x00ff00 && VAR12->VAR52 == 0xff0000)
        {
            VAR10 = VAR56;
        }
        else
        {
            FUN4(VAR2, VAR27, "", VAR12->VAR47);
            FUN4(VAR2, VAR27, "", VAR12->VAR50, VAR12->VAR51, VAR12->VAR52);
            VAR19 = FUN7(VAR29);
            goto VAR22;
        }
        break;
    case 32:
        VAR10 = VAR57;
        break;
    default:
        FUN4(VAR2, VAR27, "", VAR12->VAR47);
        VAR19 = FUN7(VAR58);
        goto VAR22;
    }
    VAR4->VAR59 = VAR4->VAR24 * VAR4->VAR25 * VAR12->VAR47 / 8;
    VAR4->VAR7 = VAR7;
    VAR4->VAR60 = (VAR61){VAR20.VAR62, VAR20.VAR63};
    VAR4->VAR64 = FUN26() / FUN27(VAR4->VAR60);
    VAR4->VAR13 = VAR13;
    VAR4->VAR14 = VAR14;
    VAR4->VAR12 = VAR12;
    VAR4->VAR16 = VAR16;
    VAR9->VAR65->VAR66 = VAR67;
    VAR9->VAR65->VAR68 = VAR69;
    VAR9->VAR65->VAR24 = VAR4->VAR24;
    VAR9->VAR65->VAR25 = VAR4->VAR25;
    VAR9->VAR65->VAR70 = VAR10;
    VAR9->VAR65->VAR60 = VAR4->VAR60;
    VAR9->VAR65->VAR71 = VAR4->VAR59 * 1 / FUN27(VAR4->VAR60) * 8;
VAR22:
    return VAR19;