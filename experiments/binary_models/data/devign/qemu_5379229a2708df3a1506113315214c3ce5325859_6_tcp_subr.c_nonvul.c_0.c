int FUN1(struct socket *VAR1)
{
    int VAR2 = 0;
    FUN2("");
    FUN3("", VAR1);
    if ((VAR2 = VAR1->VAR3 = FUN4(VAR4, VAR5, 0)) >= 0)
    {
        int VAR6, VAR3 = VAR1->VAR3;
        struct sockaddr_storage VAR7;
        FUN5(VAR3);
        FUN6(VAR3);
        VAR6 = 1;
        FUN7(VAR3, VAR8, VAR9, &VAR6, sizeof(VAR6));
        VAR7 = VAR1->VAR10.VAR11;
        FUN2("")
        FUN8(VAR1, &VAR7);
        VAR2 = connect(VAR3, (struct VAR12 *)&VAR7, sizeof(VAR7));
        FUN9(VAR1);
    }
    return (VAR2);
}