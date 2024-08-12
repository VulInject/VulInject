static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    int VAR10;
    if (VAR5)
    {
        if (VAR7->VAR11)
        {
            VAR10 = FUN2(VAR7->VAR12, VAR5, VAR2->VAR13, VAR7->VAR14 + VAR7->VAR15, VAR16 - VAR7->VAR15);
        }
        else
        {
            VAR10 = FUN3(VAR7->VAR12, VAR5, VAR5, VAR2->VAR13, VAR7->VAR14 + VAR7->VAR15, VAR16 - VAR7->VAR15);
        }
    }
    else
    {
        VAR10 = FUN4(VAR7->VAR12, VAR7->VAR14 + VAR7->VAR15, VAR16 - VAR7->VAR15);
    }
    if (VAR10 < 0)
    {
        if (VAR10 == -1)
        {
            FUN5(VAR2, VAR17, "", VAR7->VAR15, VAR16 - VAR7->VAR15);
        }
        return -1;
    }
    VAR7->VAR15 += VAR10;
    if (VAR7->VAR15 < 4)
        return 0;
    VAR9 = FUN6(VAR7->VAR14, NULL, NULL);
    if (VAR9 <= VAR7->VAR15)
    {
        memcpy(VAR3, VAR7->VAR14, VAR9);
        VAR7->VAR15 -= VAR9;
        memmove(VAR7->VAR14, VAR7->VAR14 + VAR9, VAR7->VAR15);
        return VAR9;
    }
    else
        return 0;
}