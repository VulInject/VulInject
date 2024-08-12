static int FUN1(VAR1 *VAR2, int *VAR3, const VAR4 *VAR5, int VAR6, int VAR7)
{
    uint32_t VAR8 = 0;
    int VAR9 = FUN2(VAR2->VAR10, VAR6);
    int VAR11;
    *VAR3 = 0;
    for (VAR11 = VAR9 - 1; VAR11 >= 0; VAR11--)
    {
        VAR8 |= (*VAR5 & 1) << VAR11;
        VAR5 += VAR7;
    }
    VAR2->VAR12 = (VAR2->VAR12 << VAR9) | VAR8;
    VAR2->VAR10 -= VAR9;
    if (VAR2->VAR10 > 0)
        return VAR9;
    VAR8 = (VAR2->VAR12 ^ VAR2->VAR12 >> 5 ^ VAR2->VAR12 >> 23);
    if (VAR2->VAR13)
    {
        if ((VAR8 & 0xffffffc8) == 0x0fa00500)
        {
            VAR2->VAR14 = (VAR8 & 255) + (VAR8 & 7);
            *VAR3 = 1;
            VAR2->VAR15++;
        }
        if (((VAR8 ^ (~VAR8 >> 8 & 255)) & 0xffff00ff) == 0xa0060000)
        {
            VAR2->VAR14 = VAR8 >> 8 & 255;
            *VAR3 = 1;
            VAR2->VAR16++;
        }
        VAR2->VAR13 = 0;
    }
    if (VAR8 == 0x7e0fa005 || VAR8 == 0x7e0fa006)
    {
        VAR2->VAR10 = (VAR8 & 3) * 8;
        VAR2->VAR13 = 1;
        VAR2->VAR17++;
    }
    else
    {
        if (VAR8)
            VAR2->VAR10 = VAR18[VAR8 & ~((unsigned)-1 << 8)];
        else
            VAR2->VAR10 = 31;
    }
    return VAR9;
}