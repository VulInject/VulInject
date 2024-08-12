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
    VAR9->VAR24 = FUN6(VAR14, "", VAR25);
    if ((VAR9->VAR24 & 0x1ff) != 0)
    {
        FUN2(VAR7, "", VAR9->VAR24);
        goto VAR23;
    }
    VAR16 = FUN7(VAR14, "");
    if (VAR16 == NULL)
    {
        FUN2(VAR7, "");
        goto VAR23;
    }
    if (!VAR18)
    {
        FUN8(VAR26);
        VAR18 = 1;
    }
    FUN9("", VAR16);
    VAR9->VAR27 = FUN10(VAR16);
    VAR12 = FUN11(VAR9);
    if (!VAR12)
        goto VAR23;
    VAR9->VAR28 = false;
    FUN12(VAR12->VAR29, VAR30, 1);
    FUN12(VAR12->VAR29, VAR31, VAR32);
    FUN12(VAR12->VAR29, VAR33, VAR9);
    if (FUN13(VAR12->VAR29))
        goto VAR34;
    FUN14(VAR12->VAR29, VAR35, &VAR17);
    if (VAR17)
        VAR9->VAR36 = (VAR37)VAR17;
    else if (!VAR9->VAR36)
        goto VAR34; if ( ( ! FUN15 ( VAR9 -> VAR27 , ""VAR38: && ! VAR9 -> VAR28 ) {
        FUN16(VAR12->VAR39, VAR40, "");
        goto VAR34; } FUN9 ( "" , VAR9 -> VAR36 ) ; FUN17 ( VAR12 ) ; FUN18 ( VAR12 -> VAR29 ) ; VAR12 -> VAR29 = NULL ; FUN19 ( FUN20 ( VAR2 ) , & VAR9 -> VAR41 , VAR42 , VAR43 , VAR44 , VAR9 ) ; VAR9 -> VAR45 = FUN21 ( ) ; FUN22 ( VAR9 -> VAR45 , VAR46 , VAR47 ) ; FUN22 ( VAR9 -> VAR45 , VAR48 , VAR9 ) ; FUN22 ( VAR9 -> VAR45 , VAR49 , VAR50 ) ; FUN23 ( VAR14 ) ; return 0 ; VAR34 : FUN2 ( VAR7 , "" , VAR12 -> VAR39 ) ; FUN18 ( VAR12 -> VAR29 ) ; VAR12 -> VAR29 = NULL ; VAR23 : FUN24 ( VAR9 -> VAR27 ) ; FUN23 ( VAR14 ) ; return - VAR51 ;
}