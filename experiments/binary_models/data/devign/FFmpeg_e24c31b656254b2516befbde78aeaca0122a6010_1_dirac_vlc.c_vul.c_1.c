int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10 = 0;
    VAR11 *VAR12 = (VAR11 *)VAR6;
    VAR1 *VAR13[4], *VAR14 = &VAR2[2 * VAR15 + VAR4[0]];
    FUN2(VAR16, 0, 0);
    VAR17 |= VAR18 >> (VAR17##VAR19);
    VAR17##VAR19 += (VAR18##VAR19) for (VAR9 = 1; VAR9 <= VAR5; VAR9++)
    {
        VAR13[0] = &VAR2[VAR4[VAR9]];
        VAR13[1] = VAR13[0] + 1 * VAR15;
        VAR13[2] = VAR13[0] + 2 * VAR15;
        VAR13[3] = VAR13[0] + 3 * VAR15;
        if ((VAR10 + 1) > VAR7)
            return VAR10;
        if (VAR20 && VAR14->VAR21)
        {
            int32_t VAR22 = 1;
            FUN3(VAR16, VAR14->VAR23);
            for (VAR8 = 0; VAR8 < (VAR20 >> 1) - 1; VAR8++)
            {
                VAR22 <<= 1;
                VAR22 |= (VAR16 >> (VAR24 - 2 * VAR8 - 2)) & 1;
            }
            VAR12[VAR10++] = VAR14->VAR21 * (VAR22 - 1);
            VAR20 = VAR16 = 0;
        }
        for (VAR8 = 0; VAR8 < VAR25; VAR8++)
            VAR12[VAR10 + VAR8] = VAR14->VAR26[VAR8];
        VAR10 += VAR14->VAR27;
        FUN3(VAR16, VAR14->VAR28);
        VAR14 = VAR13[VAR14->VAR29 ? 3 : !VAR20 ? 2
                                             : VAR20 & 1];
    }
    return VAR10;
}