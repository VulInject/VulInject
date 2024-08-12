int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10 = 0;
    VAR11 *VAR12 = (VAR11 *)VAR6;
    VAR1 *VAR13[4], *VAR14 = &VAR2[2 * VAR15 + VAR4[0]];
    FUN2(VAR16);
    for (VAR9 = 1; VAR9 <= VAR5; VAR9++)
    {
        VAR13[0] = &VAR2[VAR4[VAR9]];
        VAR13[1] = VAR13[0] + 1 * VAR15;
        VAR13[2] = VAR13[0] + 2 * VAR15;
        VAR13[3] = VAR13[0] + 3 * VAR15;
        if ((VAR10 + 1) > VAR7)
            return VAR10;
        if (VAR17 && VAR14->VAR18)
        {
            int32_t VAR19 = 1;
            FUN3(VAR16, VAR14->VAR20);
            for (VAR8 = 0; VAR8 < (VAR17 >> 1) - 1; VAR8++)
            {
                VAR19 <<= 1;
                VAR19 |= (VAR16 >> (VAR21 - 2 * VAR8 - 2)) & 1;
            }
            VAR12[VAR10++] = VAR14->VAR18 * (VAR19 - 1);
        }
        memcpy(&VAR12[VAR10], VAR14->VAR22, VAR23 * sizeof(VAR11));
        VAR10 += VAR14->VAR24;
        FUN3(VAR16, VAR14->VAR25);
        VAR14 = VAR13[VAR14->VAR26 ? 3 : !VAR17 ? 2
                                             : VAR17 & 1];
    }
    return VAR10;