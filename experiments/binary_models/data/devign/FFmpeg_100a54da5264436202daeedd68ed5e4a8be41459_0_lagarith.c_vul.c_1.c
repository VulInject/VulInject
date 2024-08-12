static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, const VAR3 *VAR6, int VAR7, int VAR8)
{
    int VAR9 = 0;
    int VAR10;
    uint8_t VAR11 = 0;
    const VAR3 *VAR12 = VAR5;
    uint8_t VAR13 = -(VAR8 < 2);
    uint8_t VAR14 = -(VAR8 < 3);
    VAR3 *VAR15 = VAR4 + (VAR7 - 2);
VAR16:
    if (VAR2->VAR17)
    {
        VAR10 = FUN2(VAR2->VAR17, VAR7 - VAR9);
        if (VAR15 - VAR4 < VAR10)
        {
            FUN3(VAR2->VAR18, VAR19, "");
            return VAR20;
        }
        memset(VAR4, 0, VAR10);
        VAR2->VAR17 -= VAR10;
        VAR4 += VAR10;
    }
    while (VAR4 < VAR15)
    {
        VAR9 = 0;
        while (!VAR11 && VAR4 + VAR9 < VAR15)
        {
            VAR9++;
            if (VAR9 + 2 >= VAR6 - VAR5)
                return VAR20;
            VAR11 = !(VAR5[VAR9] | (VAR5[VAR9 + 1] & VAR13) | (VAR5[VAR9 + 2] & VAR14));
        }
        if (VAR11)
        {
            VAR11 = 0;
            VAR9 += VAR8;
            memcpy(VAR4, VAR5, VAR9);
            VAR4 += VAR9;
            VAR2->VAR17 = FUN4(VAR5[VAR9]);
            VAR5 += VAR9 + 1;
            goto VAR16;
        }
        else
        {
            memcpy(VAR4, VAR5, VAR9);
            VAR5 += VAR9;
            VAR4 += VAR9;
        }
    }
    return VAR5 - VAR12;