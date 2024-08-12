static int FUN1(int VAR1)
{
    struct sockaddr_in VAR2;
    int VAR3, VAR4, VAR5;
    VAR3 = socket(VAR6, VAR7, 0);
    if (VAR3 < 0)
    {
        FUN2("");
        return -1;
    }
    FUN3(VAR3, VAR8, VAR9);
    VAR4 = 1;
    FUN4(VAR3, VAR10, VAR11, (char *)&VAR4, sizeof(VAR4));
    VAR2.VAR12 = VAR13;
    VAR2.VAR14 = FUN5(VAR1);
    VAR2.VAR15.VAR16 = 0;
    VAR5 = FUN6(VAR3, (struct VAR2 *)&VAR2, sizeof(VAR2));
    if (VAR5 < 0)
    {
        FUN2("");
        return -1;
    }
    VAR5 = FUN7(VAR3, 0);
    if (VAR5 < 0)
    {
        FUN2("");
        return -1;
    }
    return VAR3;