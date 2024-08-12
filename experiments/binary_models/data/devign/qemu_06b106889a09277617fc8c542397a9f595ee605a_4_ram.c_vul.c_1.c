static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    VAR1 *VAR7 = NULL;
    FUN2(&VAR3->VAR8);
    if (!FUN3(&VAR3->VAR9))
    {
        struct VAR10 *VAR11 = FUN4(&VAR3->VAR9);
        VAR7 = VAR11->VAR12;
        *VAR5 = VAR11->VAR5;
        *VAR6 = (VAR11->VAR5 + VAR11->VAR12->VAR5) & VAR13;
        if (VAR11->VAR14 > VAR15)
        {
            VAR11->VAR14 -= VAR15;
            VAR11->VAR5 += VAR15;
        }
        else
        {
            FUN5(VAR7->VAR16);
            FUN6(&VAR3->VAR9, VAR17);
            FUN7(VAR11);
        }
    }
    FUN8(&VAR3->VAR8);
    return VAR7;
}