static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15 = 0;
    int VAR16 = 0, VAR17 = 0;
    int32_t VAR18;
    uint32_t VAR19, VAR20, VAR21;
    VAR22 *VAR23;
    ivi_mc_func VAR24, VAR25;
    const VAR26 *VAR27;
    VAR18 = 0;
    VAR12 = VAR4->VAR12;
    VAR11 = (VAR4->VAR28 != VAR12) ? 4 : 1;
    if (VAR12 == 8)
    {
        VAR24 = VAR29;
        VAR25 = VAR30;
    }
    else
    {
        VAR24 = VAR31;
        VAR25 = VAR32;
    }
    for (VAR9 = 0, VAR23 = VAR6->VAR33; VAR9 < VAR6->VAR34; VAR23++, VAR9++)
    {
        VAR14 = !VAR23->VAR35;
        VAR19 = VAR23->VAR19;
        VAR21 = VAR23->VAR21;
        VAR20 = VAR4->VAR36 + VAR23->VAR37;
        if (VAR8->VAR38 == VAR39)
            VAR20 = FUN2(VAR20, 0, 31);
        else
            VAR20 = FUN2(VAR20, 0, 23);
        VAR27 = VAR14 ? VAR4->VAR40 : VAR4->VAR41;
        if (VAR27)
            VAR20 = VAR27[VAR20];
        if (!VAR14)
        {
            VAR16 = VAR23->VAR16;
            VAR17 = VAR23->VAR17;
            if (VAR4->VAR42)
            {
                VAR15 = ((VAR17 & 1) << 1) | (VAR16 & 1);
                VAR16 >>= 1;
                VAR17 >>= 1;
            }
            if (VAR23->VAR35)
            {
                int VAR43, VAR44, VAR45, VAR46;
                VAR43 = VAR23->VAR16 >> VAR4->VAR42;
                VAR44 = VAR23->VAR17 >> VAR4->VAR42;
                VAR45 = VAR23->VAR16 & VAR4->VAR42;
                VAR46 = VAR23->VAR17 & VAR4->VAR42;
                if (VAR23->VAR47 + VAR43 < 0 || VAR23->VAR47 + VAR43 + VAR4->VAR28 + VAR45 > VAR4->VAR48 || VAR23->VAR49 + VAR44 < 0 || VAR23->VAR49 + VAR44 + VAR4->VAR28 + VAR46 > VAR4->VAR50)
                {
                    return VAR51;
                }
            }
        }
        for (VAR10 = 0; VAR10 < VAR11; VAR10++)
        {
            if (VAR10 & 1)
            {
                VAR21 += VAR12;
            }
            else if (VAR10 == 2)
            {
                VAR21 -= VAR12;
                VAR21 += VAR12 * VAR4->VAR48;
            }
            if (VAR19 & 1)
            {
                VAR13 = FUN3(VAR2, VAR4, VAR24, VAR16, VAR17, &VAR18, VAR14, VAR15, VAR20, VAR21, VAR8);
                if (VAR13 < 0)
                    return VAR13;
            }
            else
            {
                if (VAR14)
                {
                    VAR13 = FUN4(VAR4, &VAR18, VAR21, VAR12);
                    if (VAR13 < 0)
                        return VAR13;
                }
                else
                {
                    VAR13 = FUN5(VAR25, VAR4->VAR52, VAR4->VAR53, VAR21, VAR16, VAR17, VAR4->VAR48, VAR15);
                    if (VAR13 < 0)
                        return VAR13;
                }
            }
            VAR19 >>= 1;
        }
    }
    FUN6(VAR2);
    return 0;
}