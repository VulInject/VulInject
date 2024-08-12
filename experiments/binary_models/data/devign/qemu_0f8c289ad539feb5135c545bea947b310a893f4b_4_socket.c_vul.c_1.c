static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10;
    struct sockaddr_in VAR11, VAR12;
    if (FUN2(&VAR11, VAR6) < 0)
    {
        return -1;
    }
    if (FUN2(&VAR12, VAR5) < 0)
    {
        return -1;
    }
    VAR9 = FUN3(VAR13, VAR14, 0);
    if (VAR9 < 0)
    {
        FUN4("");
        return -1;
    }
    VAR10 = FUN5(VAR9);
    if (VAR10 < 0)
    {
        FUN6(VAR9);
        return -1;
    }
    VAR10 = FUN7(VAR9, (struct VAR15 *)&VAR11, sizeof(VAR11));
    if (VAR10 < 0)
    {
        FUN4("");
        FUN6(VAR9);
        return -1;
    }
    FUN8(VAR9);
    VAR8 = FUN9(VAR2, VAR3, VAR4, VAR9, 0);
    if (!VAR8)
    {
        return -1;
    }
    VAR8->VAR16 = VAR12;
    snprintf(VAR8->VAR17.VAR18, sizeof(VAR8->VAR17.VAR18), "", FUN10(VAR12.VAR19), FUN11(VAR12.VAR20));
    return 0;
}