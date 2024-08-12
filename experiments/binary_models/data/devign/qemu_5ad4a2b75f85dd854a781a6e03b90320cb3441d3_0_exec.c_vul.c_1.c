bool FUN1(VAR1 *VAR2, hwaddr VAR3, int VAR4, bool VAR5)
{
    VAR6 *VAR7;
    hwaddr VAR8, VAR9;
    FUN2();
    while (VAR4 > 0)
    {
        VAR8 = VAR4;
        VAR7 = FUN3(VAR2, VAR3, &VAR9, &VAR8, VAR5);
        if (!FUN4(VAR7, VAR5))
        {
            VAR8 = FUN5(VAR7, VAR8, VAR3);
            if (!FUN6(VAR7, VAR9, VAR8, VAR5))
            {
                return false;
            }
        }
        VAR4 -= VAR8;
        VAR3 += VAR8;
    }
    return true;