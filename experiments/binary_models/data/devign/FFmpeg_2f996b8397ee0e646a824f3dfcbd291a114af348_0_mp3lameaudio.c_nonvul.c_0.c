int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    if (VAR7->VAR11)
    {
        VAR7->VAR12 += FUN2(VAR7->VAR13, VAR5, VAR14, VAR7->VAR15 + VAR7->VAR12, VAR16 - VAR7->VAR12);
    }
    else
    {
        VAR7->VAR12 += FUN3(VAR7->VAR13, VAR5, VAR5, VAR14, VAR7->VAR15 + VAR7->VAR12, VAR16 - VAR7->VAR12);
    }
    if (VAR7->VAR12 < 4)
        return 0;
    VAR9 = FUN4(VAR7->VAR15, NULL, NULL);
    if (VAR9 <= VAR7->VAR12)
    {
        memcpy(VAR3, VAR7->VAR15, VAR9);
        VAR7->VAR12 -= VAR9;
        memmove(VAR7->VAR15, VAR7->VAR15 + VAR9, VAR7->VAR12);
        return VAR9;
    }
    else
        return 0;
}