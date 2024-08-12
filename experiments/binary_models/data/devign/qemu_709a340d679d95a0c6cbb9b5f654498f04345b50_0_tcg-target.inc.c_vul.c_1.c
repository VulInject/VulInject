static void FUN1(VAR1 *VAR2)
{
    static void *const VAR3[16] = {
        [VAR4] = VAR5,
        [VAR6] = VAR7,
        [VAR8] = VAR9,
        [VAR10] = VAR11,
        [VAR12] = VAR13,
        [VAR14] = VAR15,
        [VAR16] = VAR17,
        [VAR18] = VAR19,
        [VAR20] = VAR21,
        [VAR22] = VAR23,
    };
    static void *const VAR24[16] = {
        [VAR4] = VAR25,
        [VAR8] = VAR26,
        [VAR12] = VAR27,
        [VAR14] = VAR28,
        [VAR16] = VAR29,
        [VAR20] = VAR30,
        [VAR22] = VAR31,
    };
    int VAR32;
    TCGReg VAR33;
    for (VAR32 = 0; VAR32 < 16; ++VAR32)
    {
        if (VAR3[VAR32] == NULL)
        {
            continue;
        }
        while ((VAR34)VAR2->VAR35 & 15)
        {
            FUN2(VAR2);
        }
        VAR36[VAR32] = VAR2->VAR35;
        if (VAR37 || VAR38 == 32)
        {
            VAR33 = VAR39;
        }
        else
        {
            FUN3(VAR2, VAR40, VAR41, 32, VAR42);
            VAR33 = VAR43;
        }
        FUN4(VAR2, VAR44, VAR33, VAR45);
        FUN4(VAR2, VAR44, VAR46, VAR47);
        FUN5(VAR2, VAR3[VAR32]);
        FUN4(VAR2, VAR44, VAR45, VAR33);
    }
    for (VAR32 = 0; VAR32 < 16; ++VAR32)
    {
        if (VAR24[VAR32] == NULL)
        {
            continue;
        }
        while ((VAR34)VAR2->VAR35 & 15)
        {
            FUN2(VAR2);
        }
        VAR48[VAR32] = VAR2->VAR35;
        if (VAR37)
        {
            FUN6(VAR2, VAR41, VAR32);
            VAR33 = VAR43;
        }
        else
        {
            VAR33 = VAR40;
            if (VAR38 == 64)
            {
                FUN3(VAR2, VAR33, VAR33 + 1, 32, VAR42);
                VAR33 += 2;
            }
            else
            {
                VAR33 += 1;
            }
            if ((VAR32 & VAR49) == VAR50)
            {
                FUN3(VAR2, VAR33, VAR33 + 1, 32, VAR42);
                VAR33 += 2;
            }
            else
            {
                VAR33 += 1;
            }
            VAR33 += 1;
        }
        if (VAR33 >= VAR51)
        {
            FUN7(VAR2, VAR44, VAR45, VAR52, VAR53);
            VAR33 = VAR54;
        }
        FUN4(VAR2, VAR44, VAR33, VAR45);
        FUN4(VAR2, VAR44, VAR46, VAR47);
        FUN5(VAR2, VAR24[VAR32]);
        FUN4(VAR2, VAR44, VAR45, VAR33);
    }