int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    uint8_t VAR9 = VAR2->VAR10 & 0xFF;
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR2->VAR12->VAR13; VAR11++)
    {
        VAR14 *VAR12 = &VAR2->VAR12->VAR15.VAR16.VAR12[VAR11];
        target_ulong VAR17 = VAR12->VAR18 | ~(VAR19 << 1);
        target_ulong VAR20 = VAR6 & ~VAR17;
        target_ulong VAR21 = VAR12->VAR21 & ~VAR17;
        VAR20 &= VAR2->VAR22;
        if ((VAR12->VAR23 == 1 || VAR12->VAR9 == VAR9) && VAR21 == VAR20 && !VAR12->VAR24)
        {
            int VAR25 = !!(VAR6 & VAR17 & ~(VAR17 >> 1));
            if (!(VAR25 ? VAR12->VAR26 : VAR12->VAR27))
            {
                return VAR28;
            }
            if (VAR7 == VAR29 && (VAR25 ? VAR12->VAR30 : VAR12->VAR31))
            {
                return VAR32;
            }
            if (VAR7 == VAR33 && (VAR25 ? VAR12->VAR34 : VAR12->VAR35))
            {
                return VAR36;
            }
            if (VAR7 != VAR37 || (VAR25 ? VAR12->VAR38 : VAR12->VAR39))
            {
                *VAR4 = VAR12->VAR40[VAR25] | (VAR6 & (VAR17 >> 1));
                *VAR5 = VAR41;
                if (VAR25 ? VAR12->VAR38 : VAR12->VAR39)
                    *VAR5 |= VAR42;
                return VAR43;
            }
            return VAR44;
        }
    }
    return VAR45;
}