static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int32_t VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    VAR20 *VAR21, *VAR22;
    const VAR23 *VAR24;
    VAR23 *VAR25;
    void (*VAR26)(VAR23 * VAR27, const VAR23 *VAR28, uint32_t VAR29, int VAR16);
    if (VAR6->VAR30 != FUN2(VAR6->VAR31, VAR6->VAR32, VAR4->VAR33))
    {
        FUN3(VAR2, VAR34, ""
                                    "",
               VAR6->VAR30, FUN2(VAR6->VAR31, VAR6->VAR32, VAR4->VAR33));
        return VAR35;
    }
    VAR17 = VAR6->VAR36 * VAR4->VAR29 + VAR6->VAR37;
    VAR21 = VAR6->VAR38;
    VAR22 = VAR6->VAR39;
    VAR19 = VAR4->VAR33 * VAR4->VAR29;
    VAR10 = 0;
    for (VAR9 = VAR6->VAR36; VAR9 < (VAR6->VAR36 + VAR6->VAR32); VAR9 += VAR4->VAR33)
    {
        VAR18 = VAR17;
        for (VAR8 = VAR6->VAR37; VAR8 < (VAR6->VAR37 + VAR6->VAR31); VAR8 += VAR4->VAR33)
        {
            VAR21->VAR37 = VAR8;
            VAR21->VAR36 = VAR9;
            VAR21->VAR40 = VAR18;
            VAR21->VAR41 = 1;
            VAR21->VAR42 = 0;
            if (!VAR4->VAR43 && !VAR4->VAR44 && !VAR4->VAR45)
            {
                VAR21->VAR46 = VAR4->VAR47;
                VAR21->VAR14 = 0;
                VAR21->VAR15 = 0;
            }
            if (VAR4->VAR48 && VAR22)
                VAR21->VAR46 = VAR22->VAR46;
            if (VAR4->VAR49 && VAR22)
            {
                if (VAR7)
                {
                    VAR21->VAR14 = FUN4(VAR22->VAR14, VAR7);
                    VAR21->VAR15 = FUN4(VAR22->VAR15, VAR7);
                }
                else
                {
                    VAR21->VAR14 = VAR22->VAR14;
                    VAR21->VAR15 = VAR22->VAR15;
                }
                VAR10 |= VAR21->VAR14 || VAR21->VAR15;
            }
            VAR21++;
            if (VAR22)
                VAR22++;
            VAR18 += VAR4->VAR33;
        }
        VAR17 += VAR19;
    }
    if (VAR4->VAR49 && VAR10)
    {
        VAR13 = (VAR4->VAR33 != VAR4->VAR50) ? 4 : 1;
        VAR26 = (VAR4->VAR50 == 8) ? VAR51 : VAR52;
        for (VAR11 = 0, VAR21 = VAR6->VAR38; VAR11 < VAR6->VAR30; VAR21++, VAR11++)
        {
            VAR14 = VAR21->VAR14;
            VAR15 = VAR21->VAR15;
            if (!VAR4->VAR53)
            {
                VAR16 = 0;
            }
            else
            {
                VAR16 = ((VAR15 & 1) << 1) | (VAR14 & 1);
                VAR14 >>= 1;
                VAR15 >>= 1;
            }
            for (VAR12 = 0; VAR12 < VAR13; VAR12++)
            {
                VAR17 = VAR21->VAR40 + VAR4->VAR50 * ((VAR12 & 1) + !!(VAR12 & 2) * VAR4->VAR29);
                FUN5(VAR4->VAR27 + VAR17, VAR4->VAR28 + VAR17 + VAR15 * VAR4->VAR29 + VAR14, VAR4->VAR29, VAR16);
            }
        }
    }
    else
    {
        VAR24 = VAR4->VAR28 + VAR6->VAR36 * VAR4->VAR29 + VAR6->VAR37;
        VAR25 = VAR4->VAR27 + VAR6->VAR36 * VAR4->VAR29 + VAR6->VAR37;
        for (VAR9 = 0; VAR9 < VAR6->VAR32; VAR9++)
        {
            memcpy(VAR25, VAR24, VAR6->VAR31 * sizeof(VAR4->VAR27[0]));
            VAR24 += VAR4->VAR29;
            VAR25 += VAR4->VAR29;
        }
    }
    return 0;
}