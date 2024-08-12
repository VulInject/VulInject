static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR7;
    const int VAR8 = VAR2->VAR9;
    const int VAR10 = VAR4 * VAR8 + VAR3;
    int VAR11;
    int VAR12 = VAR2->VAR13[VAR10 - 1][0];
    int VAR14 = VAR2->VAR13[VAR10 - 1][1];
    int VAR15 = VAR2->VAR16[VAR10 - 1][0];
    int VAR17 = VAR2->VAR16[VAR10 - 1][1];
    int VAR18 = VAR2->VAR13[VAR10][0] = VAR2->VAR19[VAR10][0];
    int VAR20 = VAR2->VAR13[VAR10][1] = VAR2->VAR19[VAR10][1];
    int VAR21 = VAR2->VAR16[VAR10][0] = VAR2->VAR22[VAR10][0];
    int VAR23 = VAR2->VAR16[VAR10][1] = VAR2->VAR22[VAR10][1];
    const int VAR24 = VAR6->VAR25;
    const int VAR26 = VAR24 & VAR27;
    const int VAR28 = 1 + VAR26;
    const int VAR29 = VAR6->VAR29 << VAR28;
    const int VAR30 = VAR6->VAR30 << VAR28;
    const int VAR31 = VAR6->VAR31 << VAR28;
    const int VAR32 = VAR6->VAR32 << VAR28;
    uint8_t VAR33[8][8][8][8];
    memset(VAR33, 0, sizeof(VAR33));
    VAR33[(VAR18 + VAR34) & 7][(VAR20 + VAR35) & 7][(VAR21 + VAR36) & 7][(VAR23 + VAR37) & 7] FUN2(0, 0, 0, 0) = 1;
    VAR11 = FUN3(VAR2, VAR18, VAR20, VAR21, VAR23, VAR12, VAR14, VAR15, VAR17, 0, 16);
    if (VAR2->VAR38->VAR39)
    {
        int VAR40, VAR41;
        if (!FUN2(VAR34, VAR35, VAR36, VAR37) && (VAR34 <= 0 || VAR18 + VAR34 <= VAR31) && (VAR35 <= 0 || VAR20 + VAR35 <= VAR32) && (VAR36 <= 0 || VAR21 + VAR36 <= VAR31) && (VAR37 <= 0 || VAR23 + VAR37 <= VAR32) && (VAR34 >= 0 || VAR18 + VAR34 >= VAR29) && (VAR35 >= 0 || VAR20 + VAR35 >= VAR30) && (VAR36 >= 0 || VAR21 + VAR36 >= VAR29) && (VAR37 >= 0 || VAR23 + VAR37 >= VAR30))
        {
            FUN2(VAR34, VAR35, VAR36, VAR37) = 1;
            VAR40 = FUN3(VAR2, VAR18 + VAR34, VAR20 + VAR35, VAR21 + VAR36, VAR23 + VAR37, VAR12, VAR14, VAR15, VAR17, 0, 16);
            if (VAR40 < VAR11)
            {
                VAR11 = VAR40;
                VAR18 += VAR34;
                VAR20 += VAR35;
                VAR21 += VAR36;
                VAR23 += VAR37;
                VAR41 = 0;
            }
        }
        FUN4(VAR42, VAR43, VAR6, VAR44)
        FUN4(-(VAR42), -(VAR43), -(VAR6), -(VAR44)) FUN5(VAR42, VAR43, VAR6, VAR44) FUN5(VAR43, VAR6, VAR44, VAR42) FUN5(VAR6, VAR44, VAR42, VAR43) FUN5(VAR44, VAR42, VAR43, VAR6) do
        {
            VAR41 = 1;
            FUN6(0, 0, 0, 1)
            if (VAR2->VAR38->VAR39 > 1)
            {
                FUN6(0, 0, 1, 1)
                FUN5(0, 1, 0, 1) FUN5(1, 0, 1, 0) FUN6(0, 0, -1, 1) FUN5(0, -1, 0, 1) FUN5(-1, 0, 1, 0) if (VAR2->VAR38->VAR39 > 2)
                {
                    FUN6(0, 1, 1, 1)
                    FUN6(0, -1, 1, 1) FUN6(0, 1, -1, 1) FUN6(0, 1, 1, -1) if (VAR2->VAR38->VAR39 > 3) { FUN5(1, 1, 1, 1)
                                                                                                                                    FUN6(1, 1, 1, -1) FUN5(1, 1, -1, -1) FUN5(1, -1, -1, 1) FUN5(1, -1, 1, -1) }
                }
            }
        }
        while (!VAR41)
            ;
    }
    VAR2->VAR13[VAR10][0] = VAR18;
    VAR2->VAR13[VAR10][1] = VAR20;
    VAR2->VAR16[VAR10][0] = VAR21;
    VAR2->VAR16[VAR10][1] = VAR23;
    return VAR11;
}