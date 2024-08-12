static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    struct pollfd VAR12 = {VAR7->VAR13, VAR14, 0};
    VAR10 = VAR5;
    while (VAR5 > 0)
    {
        if (FUN2())
            return FUN3(VAR15);
        VAR9 = FUN4(&VAR12, 1, 100);
        if (VAR9 == 1 && VAR12.VAR16 & VAR14)
        {
            VAR11 = send(VAR7->VAR13, VAR4, VAR5, 0);
            if (VAR11 < 0)
            {
                if (FUN5() != FUN6(VAR15) && FUN5() != FUN6(VAR17))
                    return FUN5();
                continue;
            }
            VAR5 -= VAR11;
            VAR4 += VAR11;
        }
        else if (VAR9 < 0)
        {
            if (FUN5() == FUN6(VAR15))
                continue;
            return -1;
        }
    }
    return VAR10 - VAR5;
}