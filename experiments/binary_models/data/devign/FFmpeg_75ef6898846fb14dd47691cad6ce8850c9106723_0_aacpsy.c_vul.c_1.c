static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    int VAR11 = VAR3->VAR12->VAR13 / VAR3->VAR12->VAR14;
    int VAR15 = VAR11 <= 16000 ? 18 : 10;
    VAR16 *VAR17 = (VAR16 *)VAR3->VAR18;
    VAR19 *VAR20 = &VAR17->VAR21[VAR7];
    uint8_t VAR22 = 0;
    FFPsyWindowInfo VAR23;
    memset(&VAR23, 0, sizeof(VAR23));
    if (VAR6)
    {
        float VAR24[8], VAR25;
        int VAR26 = 0;
        float VAR27 = 0.0, VAR28 = 0.0;
        int VAR29 = 0;
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            for (VAR10 = 0; VAR10 < 128; VAR10++)
            {
                VAR25 = FUN2(VAR6[(VAR9 * 128 + VAR10) * VAR3->VAR12->VAR14], VAR20->VAR30);
                VAR27 += VAR25 * VAR25;
            }
            VAR24[VAR9] = VAR27;
            VAR28 += VAR27;
        }
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            if (VAR24[VAR9] > VAR20->VAR31 * VAR15)
            {
                VAR29 = VAR9 + 1;
                VAR26 = 1;
                break;
            }
        }
        VAR20->VAR31 = VAR20->VAR31 * 7 / 8 + VAR28 / 64;
        VAR23.VAR32[1] = VAR8;
        switch (VAR8)
        {
        case VAR33:
            VAR23.VAR32[0] = VAR26 ? VAR34 : VAR33;
            break;
        case VAR34:
            VAR23.VAR32[0] = VAR35;
            VAR22 = VAR20->VAR36;
            break;
        case VAR37:
            VAR23.VAR32[0] = VAR33;
            break;
        case VAR35:
            VAR23.VAR32[0] = VAR26 ? VAR35 : VAR37;
            VAR22 = VAR26 ? VAR20->VAR36 : 0;
            break;
        }
        VAR20->VAR36 = VAR38[VAR29];
    }
    else
    {
        for (VAR9 = 0; VAR9 < 3; VAR9++)
            VAR23.VAR32[VAR9] = VAR8;
        VAR22 = (VAR8 == VAR35) ? VAR38[0] : 0;
    }
    VAR23.VAR39 = 1;
    if (VAR23.VAR32[0] != VAR35)
    {
        VAR23.VAR40 = 1;
        VAR23.VAR22[0] = 1;
    }
    else
    {
        int VAR41 = 0;
        VAR23.VAR40 = 8;
        for (VAR9 = 0; VAR9 < 8; VAR9++)
        {
            if (!((VAR22 >> VAR9) & 1))
                VAR41 = VAR9;
            VAR23.VAR22[VAR41]++;
        }
    }
    return VAR23;
}