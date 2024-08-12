static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    VAR9 = VAR7->VAR10 - VAR7->VAR11;
    if (VAR9 > 0)
    {
        if (VAR9 > VAR5)
            VAR9 = VAR5;
        memcpy(VAR4, VAR7->VAR11, VAR9);
        VAR7->VAR11 += VAR9;
    }
    else
    {
        VAR9 = FUN2(VAR7->VAR12, VAR4, VAR5);
    }
    return VAR9;
}