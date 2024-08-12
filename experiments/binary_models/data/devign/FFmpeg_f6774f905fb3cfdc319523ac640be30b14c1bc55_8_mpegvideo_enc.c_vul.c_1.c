static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5->VAR6);
    VAR7 *VAR8 = FUN3(NULL);
    const int VAR9 = VAR2->VAR5->VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int64_t VAR17 = VAR18;
    int VAR19 = -1;
    assert(VAR9 >= 0 && VAR9 <= 3);
    VAR14 = VAR2->VAR20[VAR21];
    VAR15 = VAR2->VAR20[VAR22];
    if (!VAR15)
        VAR15 = VAR14;
    VAR16 = (VAR15 * VAR15 + (1 << VAR23) / 2) >> VAR23;
    VAR8->VAR24 = VAR2->VAR24 >> VAR9;
    VAR8->VAR25 = VAR2->VAR25 >> VAR9;
    VAR8->VAR26 = VAR27 | VAR28 | VAR29;
    VAR8->VAR26 |= VAR2->VAR5->VAR26 & VAR30;
    VAR8->VAR31 = VAR2->VAR5->VAR31;
    VAR8->VAR32 = VAR2->VAR5->VAR32;
    VAR8->VAR33 = VAR2->VAR5->VAR33;
    VAR8->VAR34 = VAR2->VAR5->VAR34;
    VAR8->VAR35 = VAR36;
    VAR8->VAR37 = VAR2->VAR5->VAR37;
    VAR8->VAR38 = VAR2->VAR38;
    if (FUN4(VAR8, VAR4, NULL) < 0)
        return -1;
    for (VAR11 = 0; VAR11 < VAR2->VAR38 + 2; VAR11++)
    {
        Picture VAR39, *VAR40 = VAR11 ? VAR2->VAR41[VAR11 - 1] : VAR2->VAR42;
        if (VAR40 && (!VAR11 || VAR2->VAR41[VAR11 - 1]))
        {
            VAR39 = *VAR40;
            if (!VAR39.VAR43 && VAR11)
            {
                VAR39.VAR44.VAR45[0] += VAR46;
                VAR39.VAR44.VAR45[1] += VAR46;
                VAR39.VAR44.VAR45[2] += VAR46;
            }
            VAR2->VAR47.VAR48[VAR9](VAR2->VAR49[VAR11]->VAR45[0], VAR2->VAR49[VAR11]->VAR50[0], VAR39.VAR44.VAR45[0], VAR39.VAR44.VAR50[0], VAR8->VAR24, VAR8->VAR25);
            VAR2->VAR47.VAR48[VAR9](VAR2->VAR49[VAR11]->VAR45[1], VAR2->VAR49[VAR11]->VAR50[1], VAR39.VAR44.VAR45[1], VAR39.VAR44.VAR50[1], VAR8->VAR24 >> 1, VAR8->VAR25 >> 1);
            VAR2->VAR47.VAR48[VAR9](VAR2->VAR49[VAR11]->VAR45[2], VAR2->VAR49[VAR11]->VAR50[2], VAR39.VAR44.VAR45[2], VAR39.VAR44.VAR50[2], VAR8->VAR24 >> 1, VAR8->VAR25 >> 1);
        }
    }
    for (VAR12 = 0; VAR12 < VAR2->VAR38 + 1; VAR12++)
    {
        int64_t VAR51 = 0;
        if (!VAR2->VAR41[VAR12])
            break;
        VAR8->VAR52[0] = VAR8->VAR52[1] = VAR8->VAR52[2] = 0;
        VAR2->VAR49[0]->VAR53 = VAR54;
        VAR2->VAR49[0]->VAR55 = 1 * VAR56;
        VAR13 = FUN5(VAR8, VAR2->VAR49[0]);
        for (VAR11 = 0; VAR11 < VAR2->VAR38 + 1; VAR11++)
        {
            int VAR57 = VAR11 % (VAR12 + 1) == VAR12 || VAR11 == VAR2->VAR38;
            VAR2->VAR49[VAR11 + 1]->VAR53 = VAR57 ? VAR21 : VAR22;
            VAR2->VAR49[VAR11 + 1]->VAR55 = VAR57 ? VAR14 : VAR15;
            VAR13 = FUN5(VAR8, VAR2->VAR49[VAR11 + 1]);
            VAR51 += (VAR13 * VAR16) >> (VAR23 - 3);
        }
        while (VAR13)
        {
            VAR13 = FUN5(VAR8, NULL);
            VAR51 += (VAR13 * VAR16) >> (VAR23 - 3);
        }
        VAR51 += VAR8->VAR52[0] + VAR8->VAR52[1] + VAR8->VAR52[2];
        if (VAR51 < VAR17)
        {
            VAR17 = VAR51;
            VAR19 = VAR12;
        }
    }
    FUN6(VAR8);
    FUN7(&VAR8);
    return VAR19;
}