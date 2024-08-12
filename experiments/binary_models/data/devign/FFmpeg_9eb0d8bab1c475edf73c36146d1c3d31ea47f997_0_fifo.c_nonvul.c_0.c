int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int (*VAR5)(void *, void *, int))
{
    int VAR6 = VAR4;
    uint32_t VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    do
    {
        int VAR10 = FUN2(VAR2->VAR11 - VAR9, VAR4);
        if (VAR5)
        {
            if (FUN3(VAR3, VAR9, VAR10) <= 0)
                break;
        }
        else
        {
            memcpy(VAR9, VAR3, VAR10);
            VAR3 = (VAR8 *)VAR3 + VAR10;
        }
        VAR9 += VAR10;
        if (VAR9 >= VAR2->VAR11)
            VAR9 = VAR2->VAR12;
        VAR7 += VAR10;
        VAR4 -= VAR10;
    } while (VAR4 > 0);
    VAR2->VAR7 = VAR7;
    VAR2->VAR9 = VAR9;
    return VAR6 - VAR4;
}