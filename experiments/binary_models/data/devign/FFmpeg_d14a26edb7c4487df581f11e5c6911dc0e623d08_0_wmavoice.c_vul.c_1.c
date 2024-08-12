static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, const struct VAR8 *VAR9, float *VAR10)
{
    static const float VAR11[6] = {0.8169, -0.06545, 0.1726, 0.0185, -0.0359, 0.0458};
    float VAR12[VAR13 / 2], VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    AMRFixed VAR20;
    assert(VAR6 <= VAR13 / 2);
    memset(VAR12, 0, sizeof(*VAR12) * VAR6);
    VAR20.VAR21 = VAR7 >> 2;
    VAR20.VAR22 = 1.0;
    VAR20.VAR23 = 0;
    VAR20.VAR17 = 0;
    if (VAR9->VAR24 == VAR25)
    {
        FUN2(VAR2, VAR4, VAR5, &VAR20);
        FUN3(VAR2, VAR4, VAR5, &VAR20);
    }
    else
    {
        int VAR26 = 5 - VAR9->VAR27;
        VAR20.VAR23 = -1;
        for (VAR17 = 0; VAR17 < 5; VAR17++)
        {
            float VAR28;
            int VAR29, VAR30;
            VAR28 = FUN4(VAR4) ? 1.0 : -1.0;
            VAR29 = FUN5(VAR4, VAR26);
            VAR20.VAR31[VAR20.VAR17] = VAR17 + 5 * VAR29;
            VAR20.VAR32[VAR20.VAR17++] = VAR28;
            if (VAR17 < VAR9->VAR33)
            {
                VAR30 = FUN5(VAR4, VAR26);
                VAR20.VAR31[VAR20.VAR17] = VAR17 + 5 * VAR30;
                VAR20.VAR32[VAR20.VAR17++] = (VAR29 < VAR30) ? -VAR28 : VAR28;
            }
        }
    }
    FUN6(VAR12, &VAR20, 1.0, VAR6);
    VAR18 = FUN5(VAR4, 7);
    VAR16 = FUN7(FUN8(VAR2->VAR34, VAR11, 6) - 5.2409161640 + VAR35[VAR18]);
    VAR15 = VAR36[VAR18];
    VAR14 = FUN9(VAR35[VAR18], -2.9957322736, 1.6094379124);
    VAR19 = 8 >> VAR9->VAR27;
    memmove(&VAR2->VAR34[VAR19], VAR2->VAR34, sizeof(*VAR2->VAR34) * (6 - VAR19));
    for (VAR17 = 0; VAR17 < VAR19; VAR17++)
        VAR2->VAR34[VAR17] = VAR14;
    if (VAR9->VAR37 == VAR38)
    {
        int VAR39;
        for (VAR17 = 0; VAR17 < VAR6; VAR17 += VAR39)
        {
            int VAR40;
            int VAR41 = VAR5 * VAR6 + VAR17;
            int VAR42 = (VAR2->VAR43 << 16) + VAR2->VAR44 * VAR41;
            int VAR45 = (VAR42 + 0x6FFF) >> 16;
            int VAR46 = ((VAR45 << 16) - VAR42) * 8 + 0x58000;
            VAR18 = VAR46 >> 16;
            if (VAR2->VAR44)
            {
                if (VAR2->VAR44 > 0)
                {
                    VAR40 = (VAR46) & ~0xFFFF;
                }
                else
                    VAR40 = (VAR46 + 0x10000) & ~0xFFFF;
                VAR39 = FUN10((VAR46 - VAR40) / VAR2->VAR44 / 8, 1, VAR6 - VAR17);
            }
            else
                VAR39 = VAR6;
            FUN11(&VAR10[VAR17], &VAR10[VAR17 - VAR45], VAR47, 17, VAR18, 9, VAR39);
        }
    }
    else
    {
        int VAR48 = VAR7 >> 2;
        VAR18 = VAR7 & 3;
        if (VAR18)
        {
            FUN11(VAR10, &VAR10[-VAR48], VAR49, 4, VAR18, 8, VAR6);
        }
        else
            FUN12((VAR50 *)VAR10, sizeof(float) * VAR48, sizeof(float) * VAR6);
    }
    FUN13(VAR10, VAR10, VAR12, VAR15, VAR16, VAR6);
}