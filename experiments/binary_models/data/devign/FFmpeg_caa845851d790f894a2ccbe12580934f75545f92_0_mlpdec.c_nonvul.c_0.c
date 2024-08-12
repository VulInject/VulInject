static int FUN1(VAR1 *VAR2, unsigned int VAR3, VAR4 *VAR5, unsigned int *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10[VAR3];
    unsigned int VAR11, VAR12 = 0;
    VAR13 *VAR14 = (VAR13 *)VAR5;
    VAR15 *VAR16 = (VAR15 *)VAR5;
    if (VAR2->VAR17->VAR18 != VAR9->VAR19 + 1)
    {
        FUN2(VAR2->VAR17, VAR20, "");
        return VAR21;
    }
    if (*VAR6 < VAR2->VAR17->VAR18 * VAR9->VAR22 * (VAR7 ? 4 : 2))
        return -1;
    for (VAR11 = 0; VAR11 < VAR9->VAR22; VAR11++)
    {
        for (VAR12 = 0; VAR12 <= VAR9->VAR19; VAR12++)
        {
            int VAR23 = VAR9->VAR24[VAR12];
            int32_t VAR25 = VAR2->VAR26[VAR11][VAR23] << VAR9->VAR27[VAR23];
            VAR9->VAR28 ^= (VAR25 & 0xffffff) << VAR23;
            if (VAR7)
                *VAR14++ = VAR25 << 8;
            else
                *VAR16++ = VAR25 >> 8;
        }
    }
    *VAR6 = VAR11 * VAR12 * (VAR7 ? 4 : 2);
    return 0;
}