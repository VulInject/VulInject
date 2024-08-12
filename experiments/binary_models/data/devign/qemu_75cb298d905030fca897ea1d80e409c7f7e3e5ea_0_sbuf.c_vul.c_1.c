FUN1(struct socket *VAR1, struct VAR2 *VAR3)
{
    int VAR4 = 0;
    FUN2("");
    FUN3("", VAR1);
    FUN3("", VAR3);
    FUN3("", VAR3->VAR5);
    if (VAR3->VAR5 <= 0)
    {
        FUN4(VAR3);
        return;
    }
    if (VAR1->VAR6)
    {
        FUN5(&VAR1->VAR7, VAR3);
        FUN4(VAR3);
        FUN6(VAR1);
        return;
    }
    if (!VAR1->VAR7.VAR8)
        VAR4 = FUN7(VAR1, VAR3->VAR9, VAR3->VAR5, 0);
    if (VAR4 <= 0)
    {
        FUN5(&VAR1->VAR7, VAR3);
    }
    else if (VAR4 != VAR3->VAR5)
    {
        VAR3->VAR5 -= VAR4;
        VAR3->VAR9 += VAR4;
        FUN5(&VAR1->VAR7, VAR3);
    }
    FUN4(VAR3);
}