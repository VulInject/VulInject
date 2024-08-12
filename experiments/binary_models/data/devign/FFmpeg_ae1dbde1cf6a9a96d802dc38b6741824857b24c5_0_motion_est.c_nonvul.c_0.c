static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12 = VAR3 + VAR4 * VAR2->VAR13;
    int VAR14 = 2 * VAR3 + 2 * VAR4 * VAR2->VAR15;
    int VAR16 = VAR2->VAR17.VAR16[VAR12];
    int VAR18 = VAR7->VAR18;
    int VAR19 = (VAR18 & VAR20) + 1;
    int VAR21 = (1 << VAR19) - 1;
    int VAR22, VAR23, VAR24;
    int VAR25 = 0;
    me_cmp_func VAR26 = VAR2->VAR27.VAR28[0];
    me_cmp_func VAR29 = VAR2->VAR27.VAR28[1];
    if (VAR5 && FUN2(VAR16, 1))
    {
        FUN3(VAR7->VAR30, VAR31, "");
        return VAR32;
    }
    assert(FUN4(VAR16) || FUN2(VAR16, 0) || FUN2(VAR16, 1));
    for (VAR24 = 0; VAR24 < 4; VAR24++)
    {
        int VAR14 = VAR2->VAR33[VAR24];
        FUN5(VAR2, VAR10->VAR34[0][VAR14], !!FUN6(VAR16));
        FUN5(VAR2, VAR10->VAR34[1][VAR14], !!FUN6(VAR16));
    }
    if (FUN6(VAR16))
    {
        int VAR35 = VAR14 + VAR2->VAR15;
        VAR2->VAR16[VAR12] = VAR36;
        VAR7->VAR37 <<= 1;
        VAR7->VAR38 <<= 1;
        if (!(VAR2->VAR18 & VAR39))
        {
            FUN3(VAR7->VAR30, VAR31, "");
            return VAR32;
        }
        if (FUN2(VAR16, 0))
        {
            int VAR40 = VAR10->VAR41[0][VAR14];
            int VAR42 = VAR10->VAR41[0][VAR35];
            assert(VAR40 == 0 || VAR40 == 1);
            assert(VAR42 == 0 || VAR42 == 1);
            FUN7(VAR2, 0);
            if (VAR5)
            {
                VAR2->VAR43[0][VAR12] = VAR40;
                VAR2->VAR43[1][VAR12] = VAR42;
                *(VAR44 *)VAR2->VAR45[0][VAR40][VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR14];
                *(VAR44 *)VAR2->VAR45[1][VAR42][VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR35];
                VAR2->VAR16[VAR12] = VAR46;
            }
            else
            {
                VAR2->VAR47[0][0][VAR12] = VAR40;
                VAR2->VAR47[0][1][VAR12] = VAR42;
                *(VAR44 *)VAR2->VAR48[0][0][VAR40][VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR14];
                *(VAR44 *)VAR2->VAR48[0][1][VAR42][VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR35];
                VAR2->VAR16[VAR12] = VAR49;
            }
            VAR22 = VAR10->VAR34[0][VAR14][0];
            VAR23 = VAR10->VAR34[0][VAR14][1];
            VAR25 = FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR40, 0, VAR26, VAR29, VAR18);
            VAR22 = VAR10->VAR34[0][VAR35][0];
            VAR23 = VAR10->VAR34[0][VAR35][1];
            VAR25 += FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR42, 1, VAR26, VAR29, VAR18);
        }
        if (FUN2(VAR16, 1))
        {
            int VAR40 = VAR10->VAR41[1][VAR14];
            int VAR42 = VAR10->VAR41[1][VAR35];
            assert(VAR40 == 0 || VAR40 == 1);
            assert(VAR42 == 0 || VAR42 == 1);
            FUN7(VAR2, 2);
            VAR2->VAR47[1][0][VAR12] = VAR40;
            VAR2->VAR47[1][1][VAR12] = VAR42;
            *(VAR44 *)VAR2->VAR48[1][0][VAR40][VAR12] = *(VAR44 *)VAR10->VAR34[1][VAR14];
            *(VAR44 *)VAR2->VAR48[1][1][VAR42][VAR12] = *(VAR44 *)VAR10->VAR34[1][VAR35];
            if (FUN2(VAR16, 0))
            {
                VAR2->VAR16[VAR12] = VAR50;
            }
            else
            {
                VAR2->VAR16[VAR12] = VAR51;
            }
            VAR22 = VAR10->VAR34[1][VAR14][0];
            VAR23 = VAR10->VAR34[1][VAR14][1];
            VAR25 = FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR40 + 2, 0, VAR26, VAR29, VAR18);
            VAR22 = VAR10->VAR34[1][VAR35][0];
            VAR23 = VAR10->VAR34[1][VAR35][1];
            VAR25 += FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR42 + 2, 1, VAR26, VAR29, VAR18);
        }
        VAR7->VAR37 >>= 1;
        VAR7->VAR38 >>= 1;
    }
    else if (FUN9(VAR16))
    {
        if (!(VAR2->VAR18 & VAR52))
        {
            FUN3(VAR7->VAR30, VAR31, "");
            return VAR32;
        }
        VAR26 = VAR2->VAR27.VAR28[1];
        VAR29 = VAR2->VAR27.VAR28[1];
        FUN10(VAR7);
        for (VAR24 = 0; VAR24 < 4; VAR24++)
        {
            VAR14 = VAR2->VAR33[VAR24];
            VAR22 = VAR10->VAR34[0][VAR14][0];
            VAR23 = VAR10->VAR34[0][VAR14][1];
            VAR25 += FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 1, 8, VAR24, VAR24, VAR26, VAR29, VAR18);
        }
        VAR2->VAR16[VAR12] = VAR53;
    }
    else
    {
        if (FUN2(VAR16, 0))
        {
            if (VAR5)
            {
                *(VAR44 *)VAR2->VAR54[VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR14];
                VAR2->VAR16[VAR12] = VAR55;
            }
            else if (FUN2(VAR16, 1))
            {
                *(VAR44 *)VAR2->VAR56[VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR14];
                *(VAR44 *)VAR2->VAR57[VAR12] = *(VAR44 *)VAR10->VAR34[1][VAR14];
                VAR2->VAR16[VAR12] = VAR58;
            }
            else
            {
                *(VAR44 *)VAR2->VAR59[VAR12] = *(VAR44 *)VAR10->VAR34[0][VAR14];
                VAR2->VAR16[VAR12] = VAR60;
            }
            VAR22 = VAR10->VAR34[0][VAR14][0];
            VAR23 = VAR10->VAR34[0][VAR14][1];
            VAR25 = FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 16, 0, 0, VAR26, VAR29, VAR18);
        }
        else if (FUN2(VAR16, 1))
        {
            *(VAR44 *)VAR2->VAR61[VAR12] = *(VAR44 *)VAR10->VAR34[1][VAR14];
            VAR2->VAR16[VAR12] = VAR62;
            VAR22 = VAR10->VAR34[1][VAR14][0];
            VAR23 = VAR10->VAR34[1][VAR14][1];
            VAR25 = FUN8(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 16, 2, 0, VAR26, VAR29, VAR18);
        }
        else
            VAR2->VAR16[VAR12] = VAR36;
    }
    return VAR25;
}