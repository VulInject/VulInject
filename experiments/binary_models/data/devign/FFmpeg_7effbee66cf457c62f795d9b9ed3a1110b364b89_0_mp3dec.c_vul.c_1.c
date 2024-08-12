static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR6 = VAR7;
    VAR5 = FUN2(VAR2->VAR8, VAR4, VAR6);
    VAR4->VAR9 = 0;
    if (VAR5 <= 0)
    {
        if (VAR5 < 0)
            return VAR5;
        return VAR10;
    }
    if (VAR5 > VAR11 && memcmp(&VAR4->VAR12[VAR5 - VAR11], "", 3) == 0)
        VAR5 -= VAR11;
    VAR4->VAR6 = VAR5;
    return VAR5;