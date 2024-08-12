static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14;
    VAR6 *VAR15 = NULL;
    const char *VAR16;
    double VAR17;
    static int VAR18 = 0;
    if (VAR5 & VAR19)
    {
        FUN2(VAR7, "");
        return -VAR20;
    }
    VAR14 = FUN3(&VAR21, NULL, 0, &VAR22);
    FUN4(VAR14, VAR4, &VAR15);
    if (VAR15)
    {
        FUN5(VAR7, VAR15);
        goto VAR23;
    }
    VAR9->VAR24 = FUN6(VAR14, VAR25, VAR26);
    if ((VAR9->VAR24 & 0x1ff) != 0)
    {
        FUN2(VAR7, "", VAR9->VAR24);
        goto VAR23;
    }
    VAR16 = FUN7(VAR14, VAR27);
    if (VAR16 == NULL)
    {
        FUN2(VAR7, "");
        goto VAR23;
    }
    if (!VAR18)
    {
        FUN8(VAR28);
        VAR18 = 1;
    }
    FUN9("", VAR16);
    VAR9->VAR29 = FUN10(VAR16);
    VAR12 = FUN11(VAR9);
    if (!VAR12)
        goto VAR23;
    VAR9->VAR30 = false;
    FUN12(VAR12->VAR31, VAR32, 1);
    FUN12(VAR12->VAR31, VAR33, VAR34);
    FUN12(VAR12->VAR31, VAR35, VAR9);
    if (FUN13(VAR12->VAR31))
        goto VAR36;
    FUN14(VAR12->VAR31, VAR37, &VAR17);
    if (VAR17)
        VAR9->VAR38 = (VAR39)VAR17;
    else if (!VAR9->VAR38)
        goto VAR36; if ( ( ! FUN15 ( VAR9 -> VAR29 , ""VAR40: && ! VAR9 -> VAR30 ) {
        FUN16(VAR12->VAR41, VAR42, "");
        goto VAR36; } FUN9 ( "" , VAR9 -> VAR38 ) ; FUN17 ( VAR12 ) ; FUN18 ( VAR12 -> VAR31 ) ; VAR12 -> VAR31 = NULL ; FUN19 ( FUN20 ( VAR2 ) , & VAR9 -> VAR43 , VAR44 , VAR45 , VAR46 , VAR9 ) ; VAR9 -> VAR47 = FUN21 ( ) ; FUN22 ( VAR9 -> VAR47 , VAR48 , VAR49 ) ; FUN22 ( VAR9 -> VAR47 , VAR50 , VAR9 ) ; FUN22 ( VAR9 -> VAR47 , VAR51 , VAR52 ) ; FUN23 ( VAR14 ) ; return 0 ; VAR36 : FUN2 ( VAR7 , "" , VAR12 -> VAR41 ) ; FUN18 ( VAR12 -> VAR31 ) ; VAR12 -> VAR31 = NULL ; VAR23 : FUN24 ( VAR9 -> VAR29 ) ; FUN23 ( VAR14 ) ; return - VAR53 ;