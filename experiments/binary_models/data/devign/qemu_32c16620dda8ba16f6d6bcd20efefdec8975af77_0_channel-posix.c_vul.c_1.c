static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = VAR5;
    int VAR8, VAR9;
    bool VAR10 = false;
    struct sockaddr_un VAR11;
    socklen_t VAR12 = sizeof(VAR11);
    FUN2(VAR3 != NULL);
    VAR9 = FUN3(FUN4(VAR3), (struct VAR13 *)&VAR11, &VAR12);
    if (VAR9 == -1)
    {
        FUN5("", strerror(VAR14));
        goto VAR15;
    }
    FUN6(VAR9, VAR16, VAR17);
    VAR8 = FUN7(VAR7, VAR9);
    if (VAR8)
    {
        FUN5("");
        goto VAR15;
    }
    VAR10 = true;
VAR15:
    return !VAR10;