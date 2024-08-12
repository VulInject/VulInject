FUN1(struct socket *VAR1, struct VAR2 *VAR3)
{
    struct VAR2 *VAR4;
    int VAR5 = 1;
    FUN2("");
    FUN3("", (long)VAR1);
    FUN3("", (long)VAR3);
    if (VAR3->VAR6 & VAR7)
    {
        FUN4(VAR3);
        VAR3->VAR6 &= ~VAR7;
    }
    for (VAR4 = VAR8.VAR9; VAR4 != &VAR8; VAR4 = VAR4->VAR9)
    {
        if (VAR1 == VAR4->VAR10)
        {
            VAR3->VAR10 = VAR1;
            FUN5(VAR3, VAR4->VAR11);
            goto VAR12;
        }
    }
    if (VAR1 && (VAR1->VAR13 & VAR14))
    {
        VAR4 = VAR15.VAR9;
        VAR5 = 1;
        if (VAR4->VAR10 == VAR1)
        {
            VAR3->VAR10 = VAR1;
            FUN5(VAR3, VAR4->VAR11);
            goto VAR12;
        }
    }
    else
        VAR4 = VAR8.VAR9;
    VAR3->VAR10 = VAR1;
    FUN6(VAR3);
    FUN7(VAR3, VAR4);
VAR12:
    ++VAR16;
    if (VAR1)
    {
        VAR1->VAR17++;
        VAR1->VAR18++;
        if (VAR5 && ((VAR1->VAR18 >= 6) && (VAR1->VAR18 - VAR1->VAR17) >= 3))
        {
            FUN4(VAR3->VAR19);
            FUN7(VAR3->VAR19, &VAR8);
        }
    }
    FUN8();
}