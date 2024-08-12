FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    enum PixelFormat VAR12;
    VAR13 *VAR14;
    int VAR15 = 0;
    int VAR16 = 0;
    int VAR17;
    char *VAR18, *VAR19;
    int VAR20 = 0;
    AVRational VAR21;
    VAR18 = FUN2(VAR2->VAR22);
    VAR19 = strchr(VAR18, '');
    if (VAR19)
    {
        sscanf(VAR19, "", &VAR15, &VAR16);
        VAR6->VAR23 = !strstr(VAR19, "");
        *VAR19 = 0;
    }
    if ((VAR20 = FUN3(&VAR6->VAR24, &VAR6->VAR25, VAR6->VAR26)) < 0)
    {
        FUN4(VAR2, VAR27, "");
        goto VAR28;
    }
    if ((VAR20 = FUN5(&VAR21, VAR6->VAR21)) < 0)
    {
        FUN4(VAR2, VAR27, "", VAR6->VAR21);
        goto VAR28;
    }
    if (VAR4->VAR24 > 0)
        VAR6->VAR24 = VAR4->VAR24;
    if (VAR4->VAR25 > 0)
        VAR6->VAR25 = VAR4->VAR25;
    if (VAR4->VAR29.VAR30)
        VAR21 = (VAR31){VAR4->VAR29.VAR32, VAR4->VAR29.VAR30};
    FUN4(VAR2, VAR33, "", VAR2->VAR22, VAR18, VAR15, VAR16, VAR6->VAR24, VAR6->VAR25);
    VAR9 = FUN6(VAR18);
    if (!VAR9)
    {
        FUN4(VAR2, VAR27, "");
        VAR20 = FUN7(VAR34);
        goto VAR28;
    }
    VAR11 = FUN8(VAR2, 0);
    if (!VAR11)
    {
        VAR20 = FUN7(VAR35);
        goto VAR28;
    }
    FUN9(VAR11, 64, 1, 1000000);
    VAR17 = FUN10(VAR9);
    FUN4(VAR2, VAR33, "", VAR17 ? "" : "");
    if (VAR17)
    {
        int VAR36 = FUN11(VAR9);
        VAR14 = FUN12(VAR9, FUN13(VAR9, VAR36), FUN14(VAR9, VAR36), VAR37, NULL, &VAR6->VAR38, VAR6->VAR24, VAR6->VAR25);
        VAR6->VAR38.VAR39 = FUN15(VAR40, VAR14->VAR41 * VAR14->VAR25, VAR42 | 0777);
        if (VAR6->VAR38.VAR39 == -1)
        {
            FUN4(VAR2, VAR27, "");
            VAR20 = FUN7(VAR35);
            goto VAR28;
        }
        VAR6->VAR38.VAR43 = VAR14->VAR44 = FUN16(VAR6->VAR38.VAR39, 0, 0);
        VAR6->VAR38.VAR45 = VAR46;
        if (!FUN17(VAR9, &VAR6->VAR38))
        {
            FUN4(VAR2, VAR27, "");
            VAR20 = FUN7(VAR34);
            goto VAR28;
        }
    }
    else
    {
        VAR14 = FUN18(VAR9, FUN19(VAR9, FUN20(VAR9)), VAR15, VAR16, VAR6->VAR24, VAR6->VAR25, VAR47, VAR37);
    }
    switch (VAR14->VAR48)
    {
    case 8:
        FUN4(VAR2, VAR49, "");
        VAR12 = VAR50;
        break;
    case 16:
        if (VAR14->VAR51 == 0xf800 && VAR14->VAR52 == 0x07e0 && VAR14->VAR53 == 0x001f)
        {
            FUN4(VAR2, VAR49, "");
            VAR12 = VAR54;
        }
        else if (VAR14->VAR51 == 0x7c00 && VAR14->VAR52 == 0x03e0 && VAR14->VAR53 == 0x001f)
        {
            FUN4(VAR2, VAR49, "");
            VAR12 = VAR55;
        }
        else
        {
            FUN4(VAR2, VAR27, "", VAR14->VAR48);
            FUN4(VAR2, VAR27, "", VAR14->VAR51, VAR14->VAR52, VAR14->VAR53);
            VAR20 = FUN7(VAR34);
            goto VAR28;
        }
        break;
    case 24:
        if (VAR14->VAR51 == 0xff0000 && VAR14->VAR52 == 0x00ff00 && VAR14->VAR53 == 0x0000ff)
        {
            VAR12 = VAR56;
        }
        else if (VAR14->VAR51 == 0x0000ff && VAR14->VAR52 == 0x00ff00 && VAR14->VAR53 == 0xff0000)
        {
            VAR12 = VAR57;
        }
        else
        {
            FUN4(VAR2, VAR27, "", VAR14->VAR48);
            FUN4(VAR2, VAR27, "", VAR14->VAR51, VAR14->VAR52, VAR14->VAR53);
            VAR20 = FUN7(VAR34);
            goto VAR28;
        }
        break;
    case 32:
        VAR12 = VAR58;
        break;
    default:
        FUN4(VAR2, VAR27, "", VAR14->VAR48);
        VAR20 = FUN7(VAR59);
        goto VAR28;
    }
    VAR6->VAR60 = VAR6->VAR24 * VAR6->VAR25 * VAR14->VAR48 / 8;
    VAR6->VAR9 = VAR9;
    VAR6->VAR29 = (VAR31){VAR21.VAR32, VAR21.VAR30};
    VAR6->VAR61 = FUN21() / FUN22(VAR6->VAR29);
    VAR6->VAR15 = VAR15;
    VAR6->VAR16 = VAR16;
    VAR6->VAR14 = VAR14;
    VAR6->VAR17 = VAR17;
    VAR11->VAR62->VAR63 = VAR64;
    VAR11->VAR62->VAR65 = VAR66;
    VAR11->VAR62->VAR24 = VAR6->VAR24;
    VAR11->VAR62->VAR25 = VAR6->VAR25;
    VAR11->VAR62->VAR67 = VAR12;
    VAR11->VAR62->VAR29 = VAR6->VAR29;
    VAR11->VAR62->VAR68 = VAR6->VAR60 * 1 / FUN22(VAR6->VAR29) * 8;
VAR28:
    return VAR20;
}