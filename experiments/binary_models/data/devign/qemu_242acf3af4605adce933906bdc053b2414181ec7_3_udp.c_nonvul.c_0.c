int FUN1(struct socket *VAR1, struct VAR2 *VAR3, struct VAR4 *VAR5)
{
    struct sockaddr_in VAR6, VAR7;
    VAR6 = *VAR5;
    if ((VAR1->VAR8.VAR9 & FUN2(0xffffff00)) == VAR10.VAR9)
    {
        if ((VAR1->VAR8.VAR9 & FUN2(0x000000ff)) == FUN2(0xff))
            VAR6.VAR11.VAR9 = VAR12.VAR9;
        else if (VAR5->VAR11.VAR9 == VAR13.VAR9 || (FUN3(VAR1->VAR8.VAR9) & 0xff) != VAR14)
            VAR6.VAR11.VAR9 = VAR1->VAR8.VAR9;
    }
    VAR7.VAR11 = VAR1->VAR15;
    VAR7.VAR16 = VAR1->VAR17;
    return FUN4(VAR1, VAR3, &VAR6, &VAR7, VAR1->VAR18);
}