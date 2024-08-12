int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    int VAR8;
    const char *VAR9;
    char VAR10[200], VAR11[50] = "";
    struct addrinfo VAR12 = {0}, *VAR13 = NULL;
    const char *VAR14;
    int VAR15;
    FUN2(VAR2, VAR5);
    if (VAR2->VAR16)
        snprintf(VAR11, sizeof(VAR11), "");
    FUN3(NULL, 0, NULL, 0, VAR2->VAR17, sizeof(VAR2->VAR17), &VAR8, NULL, 0, VAR5);
    VAR9 = strchr(VAR5, '');
    if (!VAR9)
    {
        VAR9 = VAR11;
    }
    else
    {
        if (FUN4(VAR11, sizeof(VAR11), "", VAR9))
            VAR2->VAR16 = 1;
    }
    FUN5(VAR10, sizeof(VAR10), "", NULL, VAR2->VAR17, VAR8, "", VAR9);
    VAR12.VAR18 = VAR19;
    if (!getaddrinfo(VAR2->VAR17, NULL, &VAR12, &VAR13))
    {
        VAR2->VAR20 = 1;
        FUN6(VAR13);
    }
    VAR14 = getenv(""); VAR15 = ! FUN7 ( getenv ( "" ) , VAR2 -> VAR17 ) && VAR14 && FUN8 ( VAR14 , ""VAR21""/%VAR22" , VAR23 ) ; } return FUN9 ( & VAR2 -> VAR24 , VAR10 , VAR25 , & VAR4 -> VAR26 , VAR7 ) ; }