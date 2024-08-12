static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6, int VAR7)
{
    int VAR8 = 0;
    int VAR9;
    uint8_t VAR10 = 0;
    const VAR3 *VAR11 = VAR5;
    uint8_t VAR12 = -(VAR7 < 2);
    uint8_t VAR13 = -(VAR7 < 3);
    VAR3 *VAR14 = VAR4 + (VAR6 - 2);
VAR15:
    if (VAR2->VAR16)
    {
        VAR9 = FUN2(VAR2->VAR16, VAR6 - VAR8);
        memset(VAR4, 0, VAR9);
        VAR2->VAR16 -= VAR9;
        VAR4 += VAR9;
    }
    while (VAR4 < VAR14)
    {
        VAR8 = 0;
        while (!VAR10 && VAR4 + VAR8 < VAR14)
        {
            VAR8++;
            VAR10 = !(VAR5[VAR8] | (VAR5[VAR8 + 1] & VAR12) | (VAR5[VAR8 + 2] & VAR13));
        }
        if (VAR10)
        {
            VAR10 = 0;
            VAR8 += VAR7;
            memcpy(VAR4, VAR5, VAR8);
            VAR4 += VAR8;
            VAR2->VAR16 = FUN3(VAR5[VAR8]);
            VAR5 += VAR8 + 1;
            goto VAR15;
        }
        else
        {
            memcpy(VAR4, VAR5, VAR8);
            VAR5 += VAR8;
        }
    }
    return VAR11 - VAR5;
}