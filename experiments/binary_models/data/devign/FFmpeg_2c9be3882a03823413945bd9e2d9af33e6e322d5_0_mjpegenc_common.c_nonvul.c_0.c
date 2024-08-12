static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint16_t VAR7[64], uint16_t VAR8[64], int VAR9[3])
{
    int VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = NULL;
    if (VAR2->VAR17 != VAR18)
        VAR16 = VAR2->VAR19;
    if (VAR2->VAR17 != VAR18)
    {
        int VAR20 = 1 + !!memcmp(VAR7, VAR8, sizeof(VAR7[0]) * 64);
        if (VAR16 && VAR16->VAR21)
            VAR20 = 2;
        FUN2(VAR4, VAR22);
        FUN3(VAR4, 16, 2 + VAR20 * (1 + 64));
        FUN3(VAR4, 4, 0);
        FUN3(VAR4, 4, 0);
        for (VAR10 = 0; VAR10 < 64; VAR10++)
        {
            VAR11 = VAR6->VAR23[VAR10];
            FUN3(VAR4, 8, VAR7[VAR11]);
        }
        if (VAR20 > 1)
        {
            FUN3(VAR4, 4, 0);
            FUN3(VAR4, 4, 1);
            for (VAR10 = 0; VAR10 < 64; VAR10++)
            {
                VAR11 = VAR6->VAR23[VAR10];
                FUN3(VAR4, 8, VAR8[VAR11]);
            }
        }
    }
    if (VAR2->VAR24 & VAR25)
    {
        FUN2(VAR4, VAR26);
        FUN3(VAR4, 16, 4);
        FUN3(VAR4, 16, (VAR2->VAR27 - 1) / (8 * VAR9[0]) + 1);
    }
    FUN2(VAR4, VAR28);
    FUN4(VAR4);
    VAR14 = FUN5(VAR4);
    FUN3(VAR4, 16, 0);
    VAR12 = 2;
    if (VAR16 && VAR16->VAR29 == VAR30)
    {
        VAR12 += FUN6(VAR4, 0, 0, VAR16->VAR31->VAR32, VAR16->VAR31->VAR33);
        VAR12 += FUN6(VAR4, 0, 1, VAR16->VAR31->VAR34, VAR16->VAR31->VAR35);
        VAR12 += FUN6(VAR4, 1, 0, VAR16->VAR31->VAR36, VAR16->VAR31->VAR37);
        VAR12 += FUN6(VAR4, 1, 1, VAR16->VAR31->VAR38, VAR16->VAR31->VAR39);
    }
    else
    {
        VAR12 += FUN6(VAR4, 0, 0, VAR40, VAR41);
        VAR12 += FUN6(VAR4, 0, 1, VAR42, VAR41);
        VAR12 += FUN6(VAR4, 1, 0, VAR43, VAR44);
        VAR12 += FUN6(VAR4, 1, 1, VAR45, VAR46);
    }
    FUN7(VAR14, VAR12);
}