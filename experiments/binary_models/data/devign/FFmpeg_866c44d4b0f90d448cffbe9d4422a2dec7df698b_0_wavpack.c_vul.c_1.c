static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, void *VAR6, const int VAR7)
{
    int VAR8, VAR9, VAR10 = 0;
    int VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19 = VAR2->VAR19;
    uint32_t VAR20 = VAR2->VAR21.VAR20;
    uint32_t VAR22 = VAR2->VAR23.VAR20;
    VAR24 *VAR25 = VAR5;
    VAR24 *VAR26 = VAR6;
    VAR27 *VAR28 = VAR5;
    VAR27 *VAR29 = VAR6;
    float *VAR30 = VAR5;
    float *VAR31 = VAR6;
    VAR2->VAR32 = VAR2->VAR33 = VAR2->VAR34 = 0;
    do
    {
        VAR15 = FUN2(VAR2, VAR4, 0, &VAR11);
        if (VAR11)
            break;
        VAR17 = FUN2(VAR2, VAR4, 1, &VAR11);
        if (VAR11)
            break;
        for (VAR8 = 0; VAR8 < VAR2->VAR35; VAR8++)
        {
            VAR12 = VAR2->VAR36[VAR8].VAR37;
            if (VAR12 > 0)
            {
                if (VAR12 > 8)
                {
                    if (VAR12 & 1)
                    {
                        VAR13 = 2 * VAR2->VAR36[VAR8].VAR38[0] - VAR2->VAR36[VAR8].VAR38[1];
                        VAR14 = 2 * VAR2->VAR36[VAR8].VAR39[0] - VAR2->VAR36[VAR8].VAR39[1];
                    }
                    else
                    {
                        VAR13 = (3 * VAR2->VAR36[VAR8].VAR38[0] - VAR2->VAR36[VAR8].VAR38[1]) >> 1;
                        VAR14 = (3 * VAR2->VAR36[VAR8].VAR39[0] - VAR2->VAR36[VAR8].VAR39[1]) >> 1;
                        VAR2->VAR36[VAR8].VAR38[1] = VAR2->VAR36[VAR8].VAR38[0];
                        VAR2->VAR36[VAR8].VAR39[1] = VAR2->VAR36[VAR8].VAR39[0];
                        VAR9 = 0;
                    }
                    else
                    {
                        VAR13 = VAR2->VAR36[VAR8].VAR38[VAR19];
                        VAR14 = VAR2->VAR36[VAR8].VAR39[VAR19];
                        VAR9 = (VAR19 + VAR12) & 7;
                        if (VAR7 != VAR40)
                        {
                            VAR16 = VAR15 + ((VAR2->VAR36[VAR8].VAR41 * (VAR42)VAR13 + 512) >> 10);
                            VAR18 = VAR17 + ((VAR2->VAR36[VAR8].VAR43 * (VAR42)VAR14 + 512) >> 10);
                        }
                        else
                        {
                            VAR16 = VAR15 + ((VAR2->VAR36[VAR8].VAR41 * VAR13 + 512) >> 10);
                            VAR18 = VAR17 + ((VAR2->VAR36[VAR8].VAR43 * VAR14 + 512) >> 10);
                            if (VAR13 && VAR15)
                                VAR2->VAR36[VAR8].VAR41 -= ((((VAR15 ^ VAR13) >> 30) & 2) - 1) * VAR2->VAR36[VAR8].VAR44;
                            if (VAR14 && VAR17)
                                VAR2->VAR36[VAR8].VAR43 -= ((((VAR17 ^ VAR14) >> 30) & 2) - 1) * VAR2->VAR36[VAR8].VAR44;
                            VAR2->VAR36[VAR8].VAR38[VAR9] = VAR15 = VAR16;
                            VAR2->VAR36[VAR8].VAR39[VAR9] = VAR17 = VAR18;
                        }
                        else if (VAR12 == -1)
                        {
                            if (VAR7 != VAR40)
                                VAR16 = VAR15 + ((VAR2->VAR36[VAR8].VAR41 * (VAR42)VAR2->VAR36[VAR8].VAR38[0] + 512) >> 10);
                            else
                                VAR16 = VAR15 + ((VAR2->VAR36[VAR8].VAR41 * VAR2->VAR36[VAR8].VAR38[0] + 512) >> 10);
                            FUN3(VAR2->VAR36[VAR8].VAR41, VAR2->VAR36[VAR8].VAR44, VAR2->VAR36[VAR8].VAR38[0], VAR15);
                            VAR15 = VAR16;
                            if (VAR7 != VAR40)
                                VAR18 = VAR17 + ((VAR2->VAR36[VAR8].VAR43 * (VAR42)VAR16 + 512) >> 10);
                            else
                                VAR18 = VAR17 + ((VAR2->VAR36[VAR8].VAR43 * VAR16 + 512) >> 10);
                            FUN3(VAR2->VAR36[VAR8].VAR43, VAR2->VAR36[VAR8].VAR44, VAR16, VAR17);
                            VAR17 = VAR18;
                            VAR2->VAR36[VAR8].VAR38[0] = VAR17;
                        }
                        else
                        {
                            if (VAR7 != VAR40)
                                VAR18 = VAR17 + ((VAR2->VAR36[VAR8].VAR43 * (VAR42)VAR2->VAR36[VAR8].VAR39[0] + 512) >> 10);
                            else
                                VAR18 = VAR17 + ((VAR2->VAR36[VAR8].VAR43 * VAR2->VAR36[VAR8].VAR39[0] + 512) >> 10);
                            FUN3(VAR2->VAR36[VAR8].VAR43, VAR2->VAR36[VAR8].VAR44, VAR2->VAR36[VAR8].VAR39[0], VAR17);
                            VAR17 = VAR18;
                            if (VAR12 == -3)
                            {
                                VAR18 = VAR2->VAR36[VAR8].VAR38[0];
                                VAR2->VAR36[VAR8].VAR38[0] = VAR17;
                                if (VAR7 != VAR40)
                                    VAR16 = VAR15 + ((VAR2->VAR36[VAR8].VAR41 * (VAR42)VAR18 + 512) >> 10);
                                else
                                    VAR16 = VAR15 + ((VAR2->VAR36[VAR8].VAR41 * VAR18 + 512) >> 10);
                                FUN3(VAR2->VAR36[VAR8].VAR41, VAR2->VAR36[VAR8].VAR44, VAR18, VAR15);
                                VAR15 = VAR16;
                                VAR2->VAR36[VAR8].VAR39[0] = VAR15;
                                VAR19 = (VAR19 + 1) & 7;
                                if (VAR2->VAR45)
                                    VAR15 += (VAR17 -= (VAR15 >> 1));
                                VAR20 = (VAR20 * 3 + VAR15) * 3 + VAR17;
                                if (VAR7 == VAR46)
                                {
                                    *VAR30++ = FUN4(VAR2, &VAR22, VAR15);
                                    *VAR31++ = FUN4(VAR2, &VAR22, VAR17);
                                }
                                else if (VAR7 == VAR47)
                                {
                                    *VAR28++ = FUN5(VAR2, &VAR22, VAR15);
                                    *VAR29++ = FUN5(VAR2, &VAR22, VAR17);
                                }
                                else
                                {
                                    *VAR25++ = FUN5(VAR2, &VAR22, VAR15);
                                    *VAR26++ = FUN5(VAR2, &VAR22, VAR17);
                                    VAR10++;
                                }
                                while (!VAR11 && VAR10 < VAR2->VAR48)
                                    ;
                                FUN6(VAR2);
                                if ((VAR2->VAR49->VAR50 & VAR51) && FUN7(VAR2, VAR20, VAR22))
                                    return VAR52;
                                return 0