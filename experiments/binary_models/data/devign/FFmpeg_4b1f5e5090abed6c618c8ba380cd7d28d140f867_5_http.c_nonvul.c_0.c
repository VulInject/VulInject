static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    const char *VAR5, *VAR6, *VAR7 = "", *VAR8;
    char VAR9[1024], VAR10[1024], VAR11[10];
    char VAR12[1024], VAR13[1024] = "";
    char VAR14[VAR15];
    char VAR16[1024], VAR17[VAR15];
    int VAR18, VAR19, VAR20, VAR21 = 0;
    VAR22 *VAR23 = VAR2->VAR24;
    FUN2(VAR11, sizeof(VAR11), VAR12, sizeof(VAR12), VAR9, sizeof(VAR9), &VAR18, VAR14, sizeof(VAR14), VAR23->VAR25);
    FUN3(VAR10, sizeof(VAR10), NULL, NULL, VAR9, VAR18, NULL);
    VAR6 = getenv(""); VAR19 = ! FUN4 ( getenv ( "" ) , VAR9 ) && VAR6 && FUN5 ( VAR6 , ""VAR26""VAR27""/""%VAR23" , VAR14 ) ; VAR5 = VAR17 ; FUN2 ( NULL , 0 , VAR13 , sizeof ( VAR13 ) , VAR9 , sizeof ( VAR9 ) , & VAR18 , NULL , 0 , VAR6 ) ; } FUN3 ( VAR16 , sizeof ( VAR16 ) , VAR7 , NULL , VAR9 , VAR18 , NULL ) ; if ( ! VAR23 -> VAR28 ) { VAR20 = FUN6 ( & VAR23 -> VAR28 , VAR16 , VAR29 , & VAR2 -> VAR30 , VAR4 ) ; if ( VAR20 < 0 ) return VAR20 ; } VAR20 = FUN7 ( VAR2 , VAR5 , VAR8 , VAR10 , VAR12 , VAR13 , & VAR21 ) ; if ( VAR20 < 0 ) return VAR20 ; return VAR21 ; }