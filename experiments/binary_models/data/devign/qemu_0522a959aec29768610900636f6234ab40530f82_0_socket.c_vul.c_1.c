static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    struct sockaddr_in VAR9;
    int VAR10, VAR11;
    VAR12 *VAR13 = NULL;
    if (FUN2(&VAR9, VAR5, &VAR13) < 0)
    {
        FUN3(VAR13);
        return -1;
    }
    VAR10 = FUN4(VAR14, VAR15, 0);
    if (VAR10 < 0)
    {
        FUN5("");
        return -1;
    }
    FUN6(VAR10);
    FUN7(VAR10);
    VAR11 = FUN8(VAR10, (struct VAR16 *)&VAR9, sizeof(VAR9));
    if (VAR11 < 0)
    {
        FUN5("");
        FUN9(VAR10);
        return -1;
    }
    VAR11 = FUN10(VAR10, 0);
    if (VAR11 < 0)
    {
        FUN5("");
        FUN9(VAR10);
        return -1;
    }
    VAR6 = FUN11(&VAR17, VAR2, VAR3, VAR4);
    VAR8 = FUN12(VAR7, VAR6, VAR6);
    VAR8->VAR10 = -1;
    VAR8->VAR18 = VAR10;
    VAR8->VAR6.VAR19 = true;
    FUN13(&VAR8->VAR20, VAR21, false);
    FUN14(VAR8->VAR18, VAR22, NULL, VAR8);
    return 0;
}