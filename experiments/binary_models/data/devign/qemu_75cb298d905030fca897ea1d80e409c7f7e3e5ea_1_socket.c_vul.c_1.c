FUN1(struct socket *VAR1)
{
    int VAR2, VAR3;
    struct VAR4 *VAR5 = &VAR1->VAR6;
    int VAR7 = VAR5->VAR8;
    struct iovec VAR9[2];
    FUN2("");
    FUN3("", VAR1);
    if (VAR1->VAR10)
    {
        FUN4(VAR1);
        if (VAR5->VAR8 == 0)
            return 0;
    }
    VAR9[0].VAR11 = VAR5->VAR12;
    VAR9[1].VAR11 = NULL;
    VAR9[1].VAR13 = 0;
    if (VAR5->VAR12 < VAR5->VAR14)
    {
        VAR9[0].VAR13 = VAR5->VAR14 - VAR5->VAR12;
        if (VAR9[0].VAR13 > VAR7)
            VAR9[0].VAR13 = VAR7;
        VAR2 = 1;
    }
    else
    {
        VAR9[0].VAR13 = (VAR5->VAR15 + VAR5->VAR16) - VAR5->VAR12;
        if (VAR9[0].VAR13 > VAR7)
            VAR9[0].VAR13 = VAR7;
        VAR7 -= VAR9[0].VAR13;
        if (VAR7)
        {
            VAR9[1].VAR11 = VAR5->VAR15;
            VAR9[1].VAR13 = VAR5->VAR14 - VAR5->VAR15;
            if (VAR9[1].VAR13 > VAR7)
                VAR9[1].VAR13 = VAR7;
            VAR2 = 2;
        }
        else
            VAR2 = 1;
    }
    VAR3 = FUN5(VAR1->VAR17, (const struct VAR18 *)VAR9, VAR2);
    FUN6((VAR19, "", VAR3));
    VAR3 = FUN7(VAR1, VAR9[0].VAR11, VAR9[0].VAR13, 0);
    if (VAR3 < 0 && (VAR20 == VAR21 || VAR20 == VAR22))
        return 0;
    if (VAR3 <= 0)
    {
        FUN6((VAR19, "", VAR1->VAR23, VAR20));
        FUN8(VAR1);
        FUN9(FUN10(VAR1));
        return -1;
    }
    if (VAR2 == 2 && VAR3 == VAR9[0].VAR13)
    {
        int VAR24;
        VAR24 = FUN7(VAR1, VAR9[1].VAR11, VAR9[1].VAR13, 0);
        if (VAR24 > 0)
            VAR3 += VAR24;
    }
    FUN6((VAR19, "", VAR3));
    VAR5->VAR8 -= VAR3;
    VAR5->VAR12 += VAR3;
    if (VAR5->VAR12 >= (VAR5->VAR15 + VAR5->VAR16))
        VAR5->VAR12 -= VAR5->VAR16;
    if ((VAR1->VAR23 & VAR25) && VAR5->VAR8 == 0)
        FUN8(VAR1);
    return VAR3;
}