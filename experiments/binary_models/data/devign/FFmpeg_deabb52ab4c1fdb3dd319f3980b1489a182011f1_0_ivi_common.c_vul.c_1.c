static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19 = 0, VAR20, VAR21, VAR22;
    uint8_t VAR23[8];
    int32_t VAR24, VAR25[64];
    uint32_t VAR26, VAR27, VAR28, VAR29, VAR30, VAR31, VAR32;
    VAR33 *VAR34;
    VAR35 *VAR36 = VAR4->VAR37;
    void (*VAR38)(VAR39 * VAR40, const VAR39 *VAR41, uint32_t VAR42, int VAR19);
    void (*VAR43)(VAR39 * VAR40, const VAR39 *VAR41, uint32_t VAR42, int VAR19);
    const VAR44 *VAR45;
    const VAR46 *VAR47;
    VAR24 = 0;
    VAR13 = VAR4->VAR13;
    VAR22 = VAR13 - 1;
    VAR11 = (VAR4->VAR48 != VAR13) ? 4 : 1;
    VAR12 = VAR13 * VAR13;
    if (VAR13 == 8)
    {
        VAR38 = VAR49;
        VAR43 = VAR50;
    }
    else
    {
        VAR38 = VAR51;
        VAR43 = VAR52;
        for (VAR9 = 0, VAR34 = VAR6->VAR53; VAR9 < VAR6->VAR54; VAR34++, VAR9++)
        {
            VAR18 = !VAR34->VAR55;
            VAR26 = VAR34->VAR26;
            VAR31 = VAR34->VAR31;
            VAR30 = FUN2(VAR4->VAR56 + VAR34->VAR57, 0, 23);
            VAR45 = VAR18 ? VAR4->VAR58 : VAR4->VAR59;
            VAR47 = VAR18 ? VAR4->VAR60 : VAR4->VAR61;
            if (VAR47)
                VAR30 = VAR47[VAR30];
            if (!VAR18)
            {
                VAR20 = VAR34->VAR20;
                VAR21 = VAR34->VAR21;
                if (VAR4->VAR62)
                {
                    VAR19 = ((VAR21 & 1) << 1) | (VAR20 & 1);
                    VAR20 >>= 1;
                    VAR21 >>= 1;
                    if (VAR34->VAR55)
                    {
                        int VAR63, VAR64, VAR65, VAR66;
                        VAR63 = VAR34->VAR20 >> VAR4->VAR62;
                        VAR64 = VAR34->VAR21 >> VAR4->VAR62;
                        VAR65 = VAR34->VAR20 & VAR4->VAR62;
                        VAR66 = VAR34->VAR21 & VAR4->VAR62;
                        if (VAR34->VAR67 + VAR63 < 0 || VAR34->VAR67 + VAR63 + VAR4->VAR48 + VAR65 > VAR4->VAR42 || VAR34->VAR68 + VAR64 < 0 || VAR34->VAR68 + VAR64 + VAR4->VAR48 + VAR66 > VAR4->VAR69)
                        {
                            for (VAR10 = 0; VAR10 < VAR11; VAR10++)
                            {
                                if (VAR10 & 1)
                                {
                                    VAR31 += VAR13;
                                }
                                else if (VAR10 == 2)
                                {
                                    VAR31 -= VAR13;
                                    VAR31 += VAR13 * VAR4->VAR42;
                                    if (VAR26 & 1)
                                    {
                                        VAR14 = -1;
                                        memset(VAR25, 0, VAR12 * sizeof(VAR25[0]));
                                        memset(VAR23, 0, sizeof(VAR23));
                                        while (VAR14 <= VAR12)
                                        {
                                            VAR27 = FUN3(VAR2, VAR4->VAR70.VAR71->VAR72, VAR73, 1);
                                            if (VAR27 == VAR36->VAR74)
                                                break;
                                            if (VAR27 == VAR36->VAR75)
                                            {
                                                VAR15 = FUN3(VAR2, VAR4->VAR70.VAR71->VAR72, VAR73, 1) + 1;
                                                VAR28 = FUN3(VAR2, VAR4->VAR70.VAR71->VAR72, VAR73, 1);
                                                VAR29 = FUN3(VAR2, VAR4->VAR70.VAR71->VAR72, VAR73, 1);
                                                VAR16 = FUN4((VAR29 << 6) | VAR28);
                                            }
                                            else
                                            {
                                                if (VAR27 >= 256U)
                                                {
                                                    FUN5(VAR8, VAR76, "", VAR27);
                                                    return -1;
                                                    VAR15 = VAR36->VAR77[VAR27];
                                                    VAR16 = VAR36->VAR78[VAR27];
                                                    VAR14 += VAR15;
                                                    if (VAR14 >= VAR12)
                                                        break;
                                                    VAR17 = VAR4->VAR79[VAR14];
                                                    if (!VAR16)
                                                        FUN6(VAR8, "");
                                                    VAR32 = (VAR45[VAR17] * VAR30) >> 9;
                                                    if (VAR32 > 1)
                                                        VAR16 = VAR16 * VAR32 + FUN7(VAR16) * (((VAR32 ^ 1) - 1) >> 1);
                                                    VAR25[VAR17] = VAR16;
                                                    VAR23[VAR17 & VAR22] |= !!VAR16;
                                                }
                                                if (VAR14 >= VAR12 && VAR27 != VAR36->VAR74)
                                                    return -1;
                                                if (VAR18 && VAR4->VAR80)
                                                {
                                                    VAR24 += VAR25[0];
                                                    VAR25[0] = VAR24;
                                                    VAR23[0] |= !!VAR24;
                                                    VAR4->FUN8(VAR25, VAR4->VAR40 + VAR31, VAR4->VAR42, VAR23);
                                                    if (!VAR18)
                                                        FUN9(VAR4->VAR40 + VAR31, VAR4->VAR41 + VAR31 + VAR21 * VAR4->VAR42 + VAR20, VAR4->VAR42, VAR19);
                                                }
                                                else
                                                {
                                                    if (VAR18 && VAR4->VAR81)
                                                    {
                                                        VAR4->FUN10(&VAR24, VAR4->VAR40 + VAR31, VAR4->VAR42, VAR13);
                                                    }
                                                    else
                                                        FUN11(VAR4->VAR40 + VAR31, VAR4->VAR41 + VAR31 + VAR21 * VAR4->VAR42 + VAR20, VAR4->VAR42, VAR19);
                                                    VAR26 >>= 1;
                                                }
                                            }
                                            FUN12(VAR2);
                                            return 0