static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    struct sockaddr_in VAR11;
    if (FUN2(&VAR11, VAR5) < 0)
        return -1;
    VAR7 = FUN3(sizeof(VAR6));
    VAR8 = FUN4(VAR12, VAR13, 0);
    if (VAR8 < 0)
    {
        FUN5("");
        FUN6(VAR7);
        return -1;
    }
    FUN7(VAR8);
    VAR9 = 1;
    FUN8(VAR8, VAR14, VAR15, (const char *)&VAR9, sizeof(VAR9));
    VAR10 = FUN9(VAR8, (struct VAR16 *)&VAR11, sizeof(VAR11));
    if (VAR10 < 0)
    {
        FUN5("");
        FUN6(VAR7);
        return -1;
    }
    VAR10 = FUN10(VAR8, 0);
    if (VAR10 < 0)
    {
        FUN5("");
        FUN6(VAR7);
        return -1;
    }
    VAR7->VAR2 = VAR2;
    VAR7->VAR3 = FUN11(VAR3);
    VAR7->VAR4 = VAR4 ? FUN11(VAR4) : NULL;
    VAR7->VAR8 = VAR8;
    FUN12(VAR8, VAR17, NULL, VAR7);
    return 0;