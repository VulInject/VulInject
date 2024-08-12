static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    int VAR9;
    char VAR10[200], VAR11[200];
    int VAR12 = 0;
    struct addrinfo VAR13 = {0}, *VAR14 = NULL;
    const char *VAR15;
    int VAR16;
    FUN2();
    FUN3(NULL, 0, NULL, 0, VAR11, sizeof(VAR11), &VAR9, NULL, 0, VAR3);
    FUN4(VAR10, sizeof(VAR10), "", NULL, VAR11, VAR9, NULL);
    VAR13.VAR17 = VAR18;
    if (!getaddrinfo(VAR11, NULL, &VAR13, &VAR14))
    {
        VAR12 = 1;
        FUN5(VAR14);
    }
    VAR15 = getenv(""); VAR16 = ! FUN6 ( getenv ( "" ) , VAR11 ) && VAR15 != NULL && FUN7 ( VAR15 , ""VAR19""/%VAR20""VAR21""%VAR20\VAR22""%VAR20\VAR22""Unable to negotiate VAR23/SSL VAR24\VAR22" ) ; VAR8 = FUN8 ( VAR25 ) ; goto VAR26 ; } if ( ( VAR8 = FUN9 ( VAR2 , VAR8 ) ) < 0 ) goto VAR26 ; } return 0 ; VAR26 : FUN10 ( VAR6 ) ; if ( VAR6 -> VAR27 ) FUN11 ( VAR6 -> VAR27 ) ; FUN12 ( ) ; return VAR8 ; }