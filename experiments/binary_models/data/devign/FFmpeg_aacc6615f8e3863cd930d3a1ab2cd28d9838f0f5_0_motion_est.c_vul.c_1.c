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
    assert(VAR5 == 0 || !FUN2(VAR16, 1));
    assert(FUN3(VAR16) || FUN2(VAR16, 0) || FUN2(VAR16, 1));
    if (FUN4(VAR16))
    {
        int VAR30 = VAR14 + VAR2->VAR15;
        VAR2->VAR16[VAR12] = VAR31;
        VAR7->VAR32 <<= 1;
        VAR7->VAR33 <<= 1;
        FUN5(VAR2, 2);
        assert(VAR2->VAR18 & VAR34);
        if (FUN2(VAR16, 0))
        {
            int VAR35 = VAR10->VAR36[0][VAR14];
            int VAR37 = VAR10->VAR36[0][VAR30];
            assert(VAR35 == 0 || VAR35 == 1);
            assert(VAR37 == 0 || VAR37 == 1);
            if (VAR5)
            {
                VAR2->VAR38[0][VAR12] = VAR35;
                VAR2->VAR38[1][VAR12] = VAR37;
                *(VAR39 *)VAR2->VAR40[0][VAR35][VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR14];
                *(VAR39 *)VAR2->VAR40[1][VAR37][VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR30];
                VAR2->VAR16[VAR12] = VAR42;
            }
            else
            {
                VAR2->VAR43[0][0][VAR12] = VAR35;
                VAR2->VAR43[0][1][VAR12] = VAR37;
                *(VAR39 *)VAR2->VAR44[0][0][VAR35][VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR14];
                *(VAR39 *)VAR2->VAR44[0][1][VAR37][VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR30];
                VAR2->VAR16[VAR12] = VAR45;
            }
            VAR22 = VAR10->VAR41[0][VAR14][0];
            VAR23 = VAR10->VAR41[0][VAR14][1];
            VAR25 = FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR35, 0, VAR26, VAR29, VAR18);
            VAR22 = VAR10->VAR41[0][VAR30][0];
            VAR23 = VAR10->VAR41[0][VAR30][1];
            VAR25 += FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR37, 1, VAR26, VAR29, VAR18);
        }
        if (FUN2(VAR16, 1))
        {
            int VAR35 = VAR10->VAR36[1][VAR14];
            int VAR37 = VAR10->VAR36[1][VAR30];
            assert(VAR35 == 0 || VAR35 == 1);
            assert(VAR37 == 0 || VAR37 == 1);
            VAR2->VAR43[1][0][VAR12] = VAR35;
            VAR2->VAR43[1][1][VAR12] = VAR37;
            *(VAR39 *)VAR2->VAR44[1][0][VAR35][VAR12] = *(VAR39 *)VAR10->VAR41[1][VAR14];
            *(VAR39 *)VAR2->VAR44[1][1][VAR37][VAR12] = *(VAR39 *)VAR10->VAR41[1][VAR30];
            if (FUN2(VAR16, 0))
            {
                VAR2->VAR16[VAR12] = VAR46;
            }
            else
            {
                VAR2->VAR16[VAR12] = VAR47;
            }
            VAR22 = VAR10->VAR41[1][VAR14][0];
            VAR23 = VAR10->VAR41[1][VAR14][1];
            VAR25 = FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR35 + 2, 0, VAR26, VAR29, VAR18);
            VAR22 = VAR10->VAR41[1][VAR30][0];
            VAR23 = VAR10->VAR41[1][VAR30][1];
            VAR25 += FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 8, VAR37 + 2, 1, VAR26, VAR29, VAR18);
        }
        VAR7->VAR32 >>= 1;
        VAR7->VAR33 >>= 1;
    }
    else if (FUN7(VAR16))
    {
        VAR26 = VAR2->VAR27.VAR28[1];
        VAR29 = VAR2->VAR27.VAR28[1];
        FUN8(VAR2);
        for (VAR24 = 0; VAR24 < 4; VAR24++)
        {
            VAR14 = VAR2->VAR48[VAR24];
            VAR22 = VAR10->VAR41[0][VAR14][0];
            VAR23 = VAR10->VAR41[0][VAR14][1];
            VAR25 += FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 1, 8, VAR24, VAR24, VAR26, VAR29, VAR18);
        }
        VAR2->VAR16[VAR12] = VAR49;
    }
    else
    {
        if (FUN2(VAR16, 0))
        {
            if (VAR5)
            {
                *(VAR39 *)VAR2->VAR50[VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR14];
                VAR2->VAR16[VAR12] = VAR51;
            }
            else if (FUN2(VAR16, 1))
            {
                *(VAR39 *)VAR2->VAR52[VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR14];
                *(VAR39 *)VAR2->VAR53[VAR12] = *(VAR39 *)VAR10->VAR41[1][VAR14];
                VAR2->VAR16[VAR12] = VAR54;
            }
            else
            {
                *(VAR39 *)VAR2->VAR55[VAR12] = *(VAR39 *)VAR10->VAR41[0][VAR14];
                VAR2->VAR16[VAR12] = VAR56;
            }
            VAR22 = VAR10->VAR41[0][VAR14][0];
            VAR23 = VAR10->VAR41[0][VAR14][1];
            VAR25 = FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 16, 0, 0, VAR26, VAR29, VAR18);
        }
        else if (FUN2(VAR16, 1))
        {
            *(VAR39 *)VAR2->VAR57[VAR12] = *(VAR39 *)VAR10->VAR41[1][VAR14];
            VAR2->VAR16[VAR12] = VAR58;
            VAR22 = VAR10->VAR41[1][VAR14][0];
            VAR23 = VAR10->VAR41[1][VAR14][1];
            VAR25 = FUN6(VAR2, VAR22 >> VAR19, VAR23 >> VAR19, VAR22 & VAR21, VAR23 & VAR21, 0, 16, 2, 0, VAR26, VAR29, VAR18);
        }
        else
            VAR2->VAR16[VAR12] = VAR31;
    }
    return VAR25;