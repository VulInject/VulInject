FUN1(struct socket *VAR1, struct VAR2 *VAR3)
{
    int VAR4;
    struct sockaddr_storage VAR5;
    FUN2("");
    FUN3("", VAR1);
    FUN3("", VAR3);
    VAR5 = VAR1->VAR6.VAR7;
    FUN2("");
    FUN4(VAR1, &VAR5);
    VAR4 = sendto(VAR1->VAR8, VAR3->VAR9, VAR3->VAR10, 0, (struct VAR11 *)&VAR5, sizeof(VAR5));
    if (VAR4 < 0)
        return -1;
    if (VAR1->VAR12)
        VAR1->VAR12 = VAR13 + VAR14;
    VAR1->VAR15 &= VAR16;
    VAR1->VAR15 |= VAR17;
    return 0;
}