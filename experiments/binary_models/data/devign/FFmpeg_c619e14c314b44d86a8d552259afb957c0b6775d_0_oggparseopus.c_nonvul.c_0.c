static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = &VAR4->VAR8[VAR3];
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    struct VAR11 *VAR12 = VAR7->private;
    VAR13 *VAR14 = VAR7->VAR15 + VAR7->VAR16;
    int VAR17;
    if (!VAR7->VAR18)
        return VAR19;
    if ((!VAR7->VAR20 || VAR7->VAR20 == VAR21) && !(VAR7->VAR22 & VAR23))
    {
        int VAR24, VAR25;
        int VAR26;
        VAR13 *VAR27 = VAR7->VAR15 + VAR7->VAR16;
        VAR13 *VAR28 = VAR27;
        VAR26 = 0;
        VAR24 = VAR7->VAR29;
        VAR25 = FUN2(VAR27, VAR7->VAR18);
        if (VAR25 < 0)
        {
            VAR7->VAR30 |= VAR31;
            return 0;
        }
        VAR26 += VAR25;
        VAR27 = VAR28 = VAR28 + VAR7->VAR18;
        for (; VAR24 < VAR7->VAR32; VAR24++)
        {
            if (VAR7->VAR33[VAR24] < 255)
            {
                int VAR25 = FUN2(VAR27, VAR7->VAR33[VAR24]);
                if (VAR25 < 0)
                {
                    VAR26 = VAR7->VAR34;
                    break;
                }
                VAR26 += VAR25;
                VAR27 = VAR28 + VAR7->VAR33[VAR24];
            }
            VAR28 += VAR7->VAR33[VAR24];
        }
        VAR7->VAR20 = VAR7->VAR35 = VAR7->VAR34 - VAR26;
    }
    if ((VAR17 = FUN2(VAR14, VAR7->VAR18)) < 0)
        return VAR17;
    VAR7->VAR36 = VAR17;
    if (VAR7->VAR20 != VAR21)
    {
        if (VAR10->VAR37 == VAR21)
            VAR10->VAR37 = VAR7->VAR20;
        VAR12->VAR38 = VAR7->VAR35 = VAR7->VAR20 -= VAR12->VAR39;
    }
    VAR12->VAR38 += VAR7->VAR36;
    if ((VAR7->VAR22 & VAR23))
    {
        int64_t VAR40 = VAR12->VAR38 - VAR7->VAR34 + VAR12->VAR39;
        VAR40 = FUN3(VAR40, VAR7->VAR36);
        if (VAR40 > 0)
        {
            VAR7->VAR36 = VAR40 < VAR7->VAR36 ? VAR7->VAR36 - VAR40 : 1;
            VAR7->VAR41 = VAR40;
            FUN4(VAR2, VAR42, "", VAR7->VAR36);
        }
    }
    return 0;
}