FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR3 = VAR2->VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    enum AVPixelFormat VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    int VAR13 = 0;
    int VAR14;
    int VAR15;
    char *VAR16, *VAR17;
    int VAR18 = 0;
    Colormap VAR19;
    XColor VAR20[256];
    int VAR21;
    VAR16 = FUN2(VAR2->VAR22);
    if (!VAR16)
        goto VAR23;
    VAR17 = strchr(VAR16, '');
    if (VAR17)
    {
        sscanf(VAR17, "", &VAR12, &VAR13);
        if (strstr(VAR17, ""))
        {
            FUN3(VAR2, VAR24, ""
                                       "");
            VAR3->VAR25 = 0;
        }
        *VAR17 = 0;
    }
    FUN3(VAR2, VAR26, "", VAR2->VAR22, VAR16, VAR12, VAR13, VAR3->VAR27, VAR3->VAR28);
    VAR6 = FUN4(VAR16);
    FUN5(&VAR16);
    if (!VAR6)
    {
        FUN3(VAR2, VAR29, "");
        VAR18 = FUN6(VAR30);
        goto VAR23;
    }
    VAR8 = FUN7(VAR2, NULL);
    if (!VAR8)
    {
        VAR18 = FUN6(VAR31);
        goto VAR23;
    }
    FUN8(VAR8, 64, 1, 1000000);
    VAR14 = FUN9(VAR6);
    if (VAR3->VAR32)
    {
        int VAR33, VAR34;
        Window VAR35;
        VAR33 = FUN10(VAR6, VAR14);
        VAR34 = FUN11(VAR6, VAR14);
        FUN12(VAR6, FUN13(VAR6, VAR14), &VAR35, &VAR35, &VAR12, &VAR13, &VAR18, &VAR18, &VAR18);
        VAR12 -= VAR3->VAR27 / 2;
        VAR13 -= VAR3->VAR28 / 2;
        VAR12 = FUN14(FUN15(VAR12, 0), VAR33 - VAR3->VAR27);
        VAR13 = FUN14(FUN15(VAR13, 0), VAR34 - VAR3->VAR28);
        FUN3(VAR2, VAR26, "", VAR12, VAR13);
    }
    VAR15 = FUN16(VAR6);
    FUN3(VAR2, VAR26, "", VAR15 ? "" : "");
    if (VAR15)
    {
        int VAR36 = FUN17(VAR6);
        VAR11 = FUN18(VAR6, FUN19(VAR6, VAR36), FUN20(VAR6, VAR36), VAR37, NULL, &VAR3->VAR38, VAR3->VAR27, VAR3->VAR28);
        VAR3->VAR38.VAR39 = FUN21(VAR40, VAR11->VAR41 * VAR11->VAR28, VAR42 | 0777);
        if (VAR3->VAR38.VAR39 == -1)
        {
            FUN3(VAR2, VAR29, "");
            VAR18 = FUN6(VAR31);
            goto VAR23;
        }
        VAR3->VAR38.VAR43 = VAR11->VAR44 = FUN22(VAR3->VAR38.VAR39, 0, 0);
        VAR3->VAR38.VAR45 = VAR46;
        if (!FUN23(VAR6, &VAR3->VAR38))
        {
            FUN3(VAR2, VAR29, "");
            VAR18 = FUN6(VAR30);
            goto VAR23;
        }
    }
    else
    {
        VAR11 = FUN24(VAR6, FUN13(VAR6, VAR14), VAR12, VAR13, VAR3->VAR27, VAR3->VAR28, VAR47, VAR37);
    }
    switch (VAR11->VAR48)
    {
    case 8:
        FUN3(VAR2, VAR49, "");
        VAR9 = VAR50;
        VAR19 = FUN25(VAR6, VAR14);
        for (VAR21 = 0; VAR21 < 256; ++VAR21)
            VAR20[VAR21].VAR51 = VAR21;
        FUN26(VAR6, VAR19, VAR20, 256);
        for (VAR21 = 0; VAR21 < 256; ++VAR21)
            VAR3->VAR52[VAR21] = (VAR20[VAR21].VAR53 & 0xFF00) << 8 | (VAR20[VAR21].VAR54 & 0xFF00) | (VAR20[VAR21].VAR55 & 0xFF00) >> 8;
        VAR3->VAR56 = 1;
        break;
    case 16:
        if (VAR11->VAR57 == 0xf800 && VAR11->VAR58 == 0x07e0 && VAR11->VAR59 == 0x001f)
        {
            FUN3(VAR2, VAR49, "");
            VAR9 = VAR60;
        }
        else if (VAR11->VAR57 == 0x7c00 && VAR11->VAR58 == 0x03e0 && VAR11->VAR59 == 0x001f)
        {
            FUN3(VAR2, VAR49, "");
            VAR9 = VAR61;
        }
        else
        {
            FUN3(VAR2, VAR29, "", VAR11->VAR48);
            FUN3(VAR2, VAR29, "", VAR11->VAR57, VAR11->VAR58, VAR11->VAR59);
            VAR18 = VAR62;
            goto VAR23;
        }
        break;
    case 24:
        if (VAR11->VAR57 == 0xff0000 && VAR11->VAR58 == 0x00ff00 && VAR11->VAR59 == 0x0000ff)
        {
            VAR9 = VAR63;
        }
        else if (VAR11->VAR57 == 0x0000ff && VAR11->VAR58 == 0x00ff00 && VAR11->VAR59 == 0xff0000)
        {
            VAR9 = VAR64;
        }
        else
        {
            FUN3(VAR2, VAR29, "", VAR11->VAR48);
            FUN3(VAR2, VAR29, "", VAR11->VAR57, VAR11->VAR58, VAR11->VAR59);
            VAR18 = VAR62;
            goto VAR23;
        }
        break;
    case 32:
        if (VAR11->VAR57 == 0xff0000 && VAR11->VAR58 == 0x00ff00 && VAR11->VAR59 == 0x0000ff)
        {
            VAR9 = VAR65;
        }
        else
        {
            FUN3(VAR2, VAR29, "", VAR11->VAR48);
            FUN3(VAR2, VAR29, "", VAR11->VAR57, VAR11->VAR58, VAR11->VAR59);
            VAR18 = VAR62;
            goto VAR23;
        }
        break;
    default:
        FUN3(VAR2, VAR29, "", VAR11->VAR48);
        VAR18 = VAR62;
        goto VAR23;
    }
    VAR3->VAR66 = VAR3->VAR27 * VAR3->VAR28 * VAR11->VAR48 / 8;
    VAR3->VAR6 = VAR6;
    VAR3->VAR67 = FUN27(VAR3->VAR68);
    VAR3->VAR69 = FUN28() / FUN29(VAR3->VAR67);
    VAR3->VAR12 = VAR12;
    VAR3->VAR13 = VAR13;
    VAR3->VAR11 = VAR11;
    VAR3->VAR15 = VAR15;
    VAR8->VAR70->VAR71 = VAR72;
    VAR8->VAR70->VAR73 = VAR74;
    VAR8->VAR70->VAR27 = VAR3->VAR27;
    VAR8->VAR70->VAR28 = VAR3->VAR28;
    VAR8->VAR70->VAR75 = VAR9;
    VAR8->VAR70->VAR67 = VAR3->VAR67;
    VAR8->VAR70->VAR76 = VAR3->VAR66 * 1 / FUN29(VAR3->VAR67) * 8;
VAR23:
    FUN30(VAR16);
    return VAR18;
}