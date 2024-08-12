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
    if (VAR7->VAR20 > VAR21 - VAR22)
    {
        FUN2(VAR2, VAR23, "" VAR24 "", VAR7->VAR20);
        return VAR19;
    }
    if ((!VAR7->VAR25 || VAR7->VAR25 == VAR26) && !(VAR7->VAR27 & VAR28))
    {
        int VAR29, VAR30;
        int VAR31;
        VAR13 *VAR32 = VAR7->VAR15 + VAR7->VAR16;
        VAR13 *VAR33 = VAR32;
        VAR31 = 0;
        VAR29 = VAR7->VAR34;
        VAR30 = FUN3(VAR32, VAR7->VAR18);
        if (VAR30 < 0)
        {
            VAR7->VAR35 |= VAR36;
            return 0;
        }
        VAR31 += VAR30;
        VAR32 = VAR33 = VAR33 + VAR7->VAR18;
        for (; VAR29 < VAR7->VAR37; VAR29++)
        {
            VAR33 += VAR7->VAR38[VAR29];
            if (VAR7->VAR38[VAR29] < 255 && VAR33 != VAR32)
            {
                int VAR30 = FUN3(VAR32, VAR33 - VAR32);
                if (VAR30 > 0)
                    VAR31 += VAR30;
                VAR32 = VAR33;
            }
        }
        VAR7->VAR25 = VAR7->VAR39 = VAR7->VAR20 - VAR31;
    }
    if ((VAR17 = FUN3(VAR14, VAR7->VAR18)) < 0)
        return VAR17;
    VAR7->VAR40 = VAR17;
    if (VAR7->VAR25 != VAR26)
    {
        if (VAR10->VAR41 == VAR26)
            VAR10->VAR41 = VAR7->VAR25;
        VAR12->VAR42 = VAR7->VAR39 = VAR7->VAR25 -= VAR12->VAR43;
    }
    VAR12->VAR42 += VAR7->VAR40;
    if ((VAR7->VAR27 & VAR28))
    {
        int64_t VAR44 = VAR12->VAR42 - VAR7->VAR20 + VAR12->VAR43;
        VAR44 = FUN4(VAR44, VAR7->VAR40);
        if (VAR44 > 0)
        {
            VAR7->VAR40 = VAR44 < VAR7->VAR40 ? VAR7->VAR40 - VAR44 : 1;
            VAR7->VAR45 = VAR44;
            FUN2(VAR2, VAR46, "", VAR7->VAR40);
        }
    }
    return 0;
}