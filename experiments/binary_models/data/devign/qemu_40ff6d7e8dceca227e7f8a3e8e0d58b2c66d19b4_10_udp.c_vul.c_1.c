FUN1(struct socket *VAR1)
{
    if ((VAR1->VAR2 = socket(VAR3, VAR4, 0)) != -1)
    {
        VAR1->VAR5 = VAR6 + VAR7;
        FUN2(VAR1, &VAR1->VAR8->VAR9);
    }
    return (VAR1->VAR2);
}