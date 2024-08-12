FUN1(struct socket *VAR1)
{
    struct VAR2 *VAR3 = &VAR1->VAR4;
    char VAR5[2048];
    int VAR6, VAR7;
    FUN2("");
    FUN3("", VAR1);
    FUN3("", VAR3->VAR8);
    if (VAR1->VAR9 > 2048)
        VAR1->VAR9 = 2048;
    if (VAR3->VAR10 < VAR3->VAR11)
    {
        VAR6 = FUN4(VAR1, VAR3->VAR10, VAR1->VAR9, (VAR12));
    }
    else
    {
        uint32_t VAR13 = VAR1->VAR9;
        VAR7 = (VAR3->VAR14 + VAR3->VAR15) - VAR3->VAR10;
        if (VAR7 > VAR13)
        {
            VAR7 = VAR13;
        }
        memcpy(VAR5, VAR3->VAR10, VAR7);
        VAR13 -= VAR7;
        if (VAR13)
        {
            VAR6 = VAR3->VAR11 - VAR3->VAR14;
            if (VAR6 > VAR13)
            {
                VAR6 = VAR13;
            }
            memcpy((VAR5 + VAR7), VAR3->VAR14, VAR6);
            VAR7 += VAR6;
        }
        VAR6 = FUN4(VAR1, VAR5, VAR7, (VAR12));
    }
    if (VAR6 != VAR7)
    {
        FUN5((VAR16, ""));
    }
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR1->VAR9 -= VAR6;
    FUN6((VAR16, "", VAR6, VAR1->VAR9));
    VAR3->VAR8 -= VAR6;
    VAR3->VAR10 += VAR6;
    if (VAR3->VAR10 >= (VAR3->VAR14 + VAR3->VAR15))
        VAR3->VAR10 -= VAR3->VAR15;
    return VAR6;
}