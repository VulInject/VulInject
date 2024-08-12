FUN1(struct socket *VAR1)
{
    if ((VAR1->VAR2 & VAR3) == 0)
    {
        FUN2(VAR1->VAR4, 1);
    }
    VAR1->VAR2 &= ~(VAR5);
    if (VAR1->VAR2 & VAR6)
    {
        VAR1->VAR2 &= VAR7;
        VAR1->VAR2 |= VAR3;
    }
    else
    {
        VAR1->VAR2 |= VAR8;
    }
}