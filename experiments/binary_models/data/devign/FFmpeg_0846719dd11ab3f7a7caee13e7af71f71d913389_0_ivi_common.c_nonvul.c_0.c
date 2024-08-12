int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    uint8_t VAR21[8];
    int32_t VAR22, VAR23[64];
    uint32_t VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    VAR31 *VAR32;
    VAR33 *VAR34 = VAR4->VAR35;
    void (*VAR36)(VAR37 * VAR38, const VAR37 *VAR39, uint32_t VAR40, int VAR17);
    void (*VAR41)(VAR37 * VAR38, const VAR37 *VAR39, uint32_t VAR40, int VAR17);
    const VAR42 *VAR43;
    const VAR44 *VAR45;
    VAR22 = 0;
    VAR11 = VAR4->VAR11;
    VAR20 = VAR11 - 1;
    VAR9 = (VAR4->VAR46 != VAR11) ? 4 : 1;
    VAR10 = VAR11 * VAR11;
    if (VAR11 == 8)
    {
        VAR36 = VAR47;
        VAR41 = VAR48;
    }
    else
    {
        VAR36 = VAR49;
        VAR41 = VAR50;
    }
    for (VAR7 = 0, VAR32 = VAR6->VAR51; VAR7 < VAR6->VAR52; VAR32++, VAR7++)
    {
        VAR16 = !VAR32->VAR53;
        VAR24 = VAR32->VAR24;
        VAR29 = VAR32->VAR29;
        VAR28 = FUN2(VAR4->VAR54 + VAR32->VAR55, 0, 23);
        VAR43 = VAR16 ? VAR4->VAR56 : VAR4->VAR57;
        VAR45 = VAR16 ? VAR4->VAR58 : VAR4->VAR59;
        if (VAR45)
            VAR28 = VAR45[VAR28];
        if (!VAR16)
        {
            VAR18 = VAR32->VAR18;
            VAR19 = VAR32->VAR19;
            if (!VAR4->VAR60)
            {
                VAR17 = 0;
            }
            else
            {
                VAR17 = ((VAR19 & 1) << 1) | (VAR18 & 1);
                VAR18 >>= 1;
                VAR19 >>= 1;
            }
        }
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            if (VAR8 & 1)
            {
                VAR29 += VAR11;
            }
            else if (VAR8 == 2)
            {
                VAR29 -= VAR11;
                VAR29 += VAR11 * VAR4->VAR40;
            }
            if (VAR24 & 1)
            {
                VAR12 = -1;
                memset(VAR23, 0, VAR10 * sizeof(VAR23[0]));
                memset(VAR21, 0, sizeof(VAR21));
                while (VAR12 <= VAR10)
                {
                    VAR25 = FUN3(VAR2, VAR4->VAR61.VAR62->VAR63, VAR64, 1);
                    if (VAR25 == VAR34->VAR65)
                        break;
                    if (VAR25 == VAR34->VAR66)
                    {
                        VAR13 = FUN3(VAR2, VAR4->VAR61.VAR62->VAR63, VAR64, 1) + 1;
                        VAR26 = FUN3(VAR2, VAR4->VAR61.VAR62->VAR63, VAR64, 1);
                        VAR27 = FUN3(VAR2, VAR4->VAR61.VAR62->VAR63, VAR64, 1);
                        VAR14 = FUN4((VAR27 << 6) | VAR26);
                    }
                    else
                    {
                        if (VAR25 >= 256U)
                        {
                            FUN5(NULL, VAR67, "", VAR25);
                            return -1;
                        }
                        VAR13 = VAR34->VAR68[VAR25];
                        VAR14 = VAR34->VAR69[VAR25];
                    }
                    VAR12 += VAR13;
                    if (VAR12 >= VAR10)
                        break;
                    VAR15 = VAR4->VAR70[VAR12];
                    if (!VAR14)
                        FUN6(NULL, "");
                    VAR30 = (VAR43[VAR15] * VAR28) >> 9;
                    if (VAR30 > 1)
                        VAR14 = VAR14 * VAR30 + FUN7(VAR14) * (((VAR30 ^ 1) - 1) >> 1);
                    VAR23[VAR15] = VAR14;
                    VAR21[VAR15 & VAR20] |= !!VAR14;
                }
                if (VAR12 >= VAR10 && VAR25 != VAR34->VAR65)
                    return -1;
                if (VAR16 && VAR4->VAR71)
                {
                    VAR22 += VAR23[0];
                    VAR23[0] = VAR22;
                    VAR21[0] |= !!VAR22;
                }
                if (VAR4->VAR72 > VAR4->VAR11)
                {
                    FUN5(0, VAR67, "");
                    return VAR73;
                }
                VAR4->FUN8(VAR23, VAR4->VAR38 + VAR29, VAR4->VAR40, VAR21);
                if (!VAR16)
                    FUN9(VAR4->VAR38 + VAR29, VAR4->VAR39 + VAR29 + VAR19 * VAR4->VAR40 + VAR18, VAR4->VAR40, VAR17);
            }
            else
            {
                if (VAR16 && VAR4->VAR74)
                {
                    VAR4->FUN10(&VAR22, VAR4->VAR38 + VAR29, VAR4->VAR40, VAR11);
                }
                else
                    FUN11(VAR4->VAR38 + VAR29, VAR4->VAR39 + VAR29 + VAR19 * VAR4->VAR40 + VAR18, VAR4->VAR40, VAR17);
            }
            VAR24 >>= 1;
        }
    }
    FUN12(VAR2);
    return 0;
}