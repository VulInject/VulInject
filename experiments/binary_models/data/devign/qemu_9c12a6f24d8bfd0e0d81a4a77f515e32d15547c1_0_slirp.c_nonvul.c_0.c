int FUN1(int VAR1, struct in_addr VAR2, int VAR3)
{
    struct socket *VAR4;
    struct socket *VAR5 = (VAR1 ? &VAR6 : &VAR7);
    struct sockaddr_in VAR8;
    int VAR9 = FUN2(VAR3);
    socklen_t VAR10;
    for (VAR4 = VAR5->VAR11; VAR4 != VAR5; VAR4 = VAR4->VAR11)
    {
        VAR10 = sizeof(VAR8);
        if ((VAR4->VAR12 & VAR13) && FUN3(VAR4->VAR14, (struct VAR15 *)&VAR8, &VAR10) == 0 && VAR8.VAR16.VAR17 == VAR2.VAR17 && VAR8.VAR18 == VAR9)
        {
            close(VAR4->VAR14);
            FUN4(VAR4);
            return 0;
        }
    }
    return -1;
}