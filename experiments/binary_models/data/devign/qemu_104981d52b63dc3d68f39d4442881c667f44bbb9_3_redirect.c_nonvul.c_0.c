static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR11, VAR12, VAR2);
    struct usb_redir_control_packet_header VAR13;
    VAR14 *VAR15;
    switch (VAR5)
    {
    case VAR16 | VAR17:
        FUN3("", VAR6);
        VAR12->VAR12.VAR18 = VAR6;
        return 0;
    case VAR16 | VAR19:
        return FUN4(VAR12, VAR4, VAR6 & 0xff);
    case VAR20 | VAR21:
        return FUN5(VAR12, VAR4);
    case VAR22 | VAR23:
        return FUN6(VAR12, VAR4, VAR7, VAR6);
    case VAR24 | VAR25:
        return FUN7(VAR12, VAR4, VAR7);
    }
    VAR15 = FUN8(VAR12, VAR4);
    FUN3("", VAR5 >> 8, VAR5 & 0xff, VAR6, VAR7, VAR8, VAR15->VAR26);
    VAR13.VAR5 = VAR5 & 0xFF;
    VAR13.VAR27 = VAR5 >> 8;
    VAR13.VAR28 = VAR13.VAR27 & VAR29;
    VAR13.VAR6 = VAR6;
    VAR13.VAR7 = VAR7;
    VAR13.VAR8 = VAR8;
    if (VAR13.VAR27 & VAR29)
    {
        FUN9(VAR12->VAR30, VAR15->VAR26, &VAR13, NULL, 0);
    }
    else
    {
        FUN10(VAR12, "", VAR10, VAR8);
        FUN9(VAR12->VAR30, VAR15->VAR26, &VAR13, VAR10, VAR8);
    }
    FUN11(VAR12->VAR30);
    return VAR31;
}