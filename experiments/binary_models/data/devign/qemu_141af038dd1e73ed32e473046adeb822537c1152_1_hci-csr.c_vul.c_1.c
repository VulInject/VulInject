static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    struct VAR6 *VAR7 = (struct VAR6 *)VAR2->VAR8;
    int VAR9 = VAR7->VAR10;
    if (!VAR7->VAR11)
        return 0;
    VAR7->VAR10 += VAR5;
    memcpy(VAR7->VAR12 + VAR9, VAR4, VAR5);
    while (1)
    {
        if (VAR7->VAR10 >= 2 && VAR9 < 2)
            VAR7->VAR13 = FUN2(VAR7->VAR12) + 1;
        if (VAR7->VAR10 >= VAR7->VAR13 && VAR9 < VAR7->VAR13)
            VAR7->VAR14 = FUN3(VAR7->VAR12) + VAR7->VAR13;
        if (VAR7->VAR10 >= VAR7->VAR14)
        {
            FUN4(VAR7, VAR7->VAR12);
            memmove(VAR7->VAR12, VAR7->VAR12 + VAR7->VAR10, VAR7->VAR10 - VAR7->VAR14);
            VAR7->VAR10 -= VAR7->VAR14;
            VAR7->VAR13 = VAR15;
            VAR7->VAR14 = VAR15;
            VAR9 = 0;
        }
        else
            break;
    }
    return VAR5;
}