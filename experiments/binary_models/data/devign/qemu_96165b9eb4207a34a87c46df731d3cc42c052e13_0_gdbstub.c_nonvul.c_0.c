static int FUN1(int VAR1)
{
    struct sockaddr_in VAR2;
    int VAR3, VAR4;
    VAR3 = socket(VAR5, VAR6, 0);
    if (VAR3 < 0)
    {
        FUN2("");
        return -1;
    }
    FUN3(VAR3, VAR7, VAR8);
    FUN4(VAR3);
    VAR2.VAR9 = VAR10;
    VAR2.VAR11 = FUN5(VAR1);
    VAR2.VAR12.VAR13 = 0;
    VAR4 = FUN6(VAR3, (struct VAR2 *)&VAR2, sizeof(VAR2));
    if (VAR4 < 0)
    {
        FUN2("");
        close(VAR3);
        return -1;
    }
    VAR4 = FUN7(VAR3, 1);
    if (VAR4 < 0)
    {
        FUN2("");
        close(VAR3);
        return -1;
    }
    return VAR3;
}