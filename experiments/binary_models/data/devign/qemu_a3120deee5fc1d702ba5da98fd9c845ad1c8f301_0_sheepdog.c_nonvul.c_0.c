static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    uint32_t VAR7 = 0;
    char *VAR8 = NULL;
    VAR9 *VAR10;
    char VAR11[VAR12];
    uint32_t VAR13;
    bool VAR14 = false;
    VAR4 *VAR15 = NULL;
    VAR10 = FUN2(sizeof(VAR9));
    memset(VAR11, 0, sizeof(VAR11)); if ( strstr ( VAR1 , ""VAR16""VAR17""Invalid preallocation VAR18: ''""too big image VAR19""VAR20""backing_file must be a sheepdog VAR21""cannot clone from a non snapshot VAR22" ) ; FUN3 ( VAR23 ) ; VAR6 = - VAR24 ; goto VAR25 ; } FUN3 ( VAR23 ) ; } VAR6 = FUN4 ( VAR10 , & VAR7 , 0 ) ; if ( ! VAR14 || VAR6 ) { goto VAR25 ; } VAR6 = FUN5 ( VAR1 ) ; VAR25 : FUN6 ( VAR10 ) ; return VAR6 ; }