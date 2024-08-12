void FUN1(VAR1 *VAR2, const VAR3 *VAR4[4], const int VAR5[4], const VAR6 *VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    AVComponentDescriptor VAR13 = VAR7->VAR13[VAR10];
    int VAR14 = VAR13.VAR14;
    int VAR15 = VAR13.VAR16 + 1;
    int VAR17 = (1 << VAR15) - 1;
    int VAR18 = VAR13.VAR18;
    int VAR19 = VAR13.VAR20 + 1;
    int VAR21 = VAR7->VAR21;
    if (VAR21 & VAR22)
    {
        int VAR23 = VAR8 * VAR19 + VAR13.VAR24 - 1;
        const VAR3 *VAR25 = VAR4[VAR14] + VAR9 * VAR5[VAR14] + (VAR23 >> 3);
        int VAR18 = 8 - VAR15 - (VAR23 & 7);
        while (VAR11--)
        {
            int VAR26 = (*VAR25 >> VAR18) & VAR17;
            if (VAR12)
                VAR26 = VAR4[1][4 * VAR26 + VAR10];
            VAR18 -= VAR19;
            VAR25 -= VAR18 >> 3;
            VAR18 &= 7;
            *VAR2++ = VAR26;
        }
    }
    else
    {
        const VAR3 *VAR25 = VAR4[VAR14] + VAR9 * VAR5[VAR14] + VAR8 * VAR19 + VAR13.VAR24 - 1;
        while (VAR11--)
        {
            int VAR26 = VAR21 & VAR27 ? FUN2(VAR25) : FUN3(VAR25);
            VAR26 = (VAR26 >> VAR18) & VAR17;
            if (VAR12)
                VAR26 = VAR4[1][4 * VAR26 + VAR10];
            VAR25 += VAR19;
            *VAR2++ = VAR26;
        }
    }
}