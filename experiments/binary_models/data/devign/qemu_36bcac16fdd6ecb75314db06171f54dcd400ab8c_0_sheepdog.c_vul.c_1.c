static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    int VAR8, VAR9;
    uint32_t VAR10 = 0;
    VAR11 *VAR12 = VAR2->VAR13;
    char VAR14[VAR15], VAR16[VAR17];
    uint32_t VAR18;
    char *VAR19 = NULL;
    VAR20 *VAR21;
    VAR6 *VAR22 = NULL;
    const char *VAR23;
    VAR12->VAR2 = VAR2;
    VAR12->VAR24 = FUN2(VAR2);
    VAR21 = FUN3(&VAR25, NULL, 0, &VAR26);
    FUN4(VAR21, VAR4, &VAR22);
    if (VAR22)
    {
        FUN5(VAR7, VAR22);
        VAR8 = -VAR27;
        goto VAR28;
    }
    VAR23 = FUN6(VAR21, "");
    FUN7(&VAR12->VAR29);
    FUN7(&VAR12->VAR30);
    FUN7(&VAR12->VAR31);
    VAR12->VAR9 = -1;
    memset(VAR14, 0, sizeof(VAR14));
    memset(VAR16, 0, sizeof(VAR16)); if ( strstr ( VAR23 , ""VAR32''t read snapshot VAR33" ) ; goto VAR34 ; } memcpy ( & VAR12 -> VAR33 , VAR19 , sizeof ( VAR12 -> VAR33 ) ) ; VAR2 -> VAR35 = VAR12 -> VAR33 . VAR36 / VAR37 ; FUN8 ( VAR12 -> VAR38 , sizeof ( VAR12 -> VAR38 ) , VAR14 ) ; FUN9 ( & VAR12 -> VAR39 ) ; FUN10 ( & VAR12 -> VAR40 ) ; FUN11 ( VAR21 ) ; FUN12 ( VAR19 ) ; return 0 ; VAR34 : FUN13 ( FUN2 ( VAR2 ) , VAR12 -> VAR9 , false , NULL , NULL , NULL , NULL ) ; FUN14 ( VAR12 -> VAR9 ) ; VAR28 : FUN11 ( VAR21 ) ; FUN12 ( VAR19 ) ; return VAR8 ; }