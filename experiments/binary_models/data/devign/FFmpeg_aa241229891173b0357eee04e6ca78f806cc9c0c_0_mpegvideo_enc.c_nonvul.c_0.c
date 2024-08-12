static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5->VAR6);
    VAR7 *VAR8 = FUN3(NULL);
    AVFrame VAR9[VAR10 + 2];
    const int VAR11 = VAR2->VAR5->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int64_t VAR19 = VAR20;
    int VAR21 = -1;
    assert(VAR11 >= 0 && VAR11 <= 3);
    VAR16 = VAR2->VAR22[VAR23];
    VAR17 = VAR2->VAR22[VAR24];
    if (!VAR17)
        VAR17 = VAR16;
    VAR18 = (VAR17 * VAR17 + (1 << VAR25) / 2) >> VAR25;
    VAR8->VAR26 = VAR2->VAR26 >> VAR11;
    VAR8->VAR27 = VAR2->VAR27 >> VAR11;
    VAR8->VAR28 = VAR29 | VAR30 | VAR31;
    VAR8->VAR28 |= VAR2->VAR5->VAR28 & VAR32;
    VAR8->VAR33 = VAR2->VAR5->VAR33;
    VAR8->VAR34 = VAR2->VAR5->VAR34;
    VAR8->VAR35 = VAR2->VAR5->VAR35;
    VAR8->VAR36 = VAR2->VAR5->VAR36;
    VAR8->VAR37 = VAR38;
    VAR8->VAR39 = VAR2->VAR5->VAR39;
    VAR8->VAR40 = VAR2->VAR40;
    if (FUN4(VAR8, VAR4, NULL) < 0)
        return -1;
    for (VAR13 = 0; VAR13 < VAR2->VAR40 + 2; VAR13++)
    {
        int VAR41 = VAR8->VAR26 * VAR8->VAR27;
        int VAR42 = (VAR8->VAR26 / 2) * (VAR8->VAR27 / 2);
        Picture VAR43, *VAR44 = VAR13 ? VAR2->VAR45[VAR13 - 1] : VAR2->VAR46;
        FUN5(&VAR9[VAR13]);
        VAR9[VAR13].VAR47[0] = FUN6(VAR41 + 2 * VAR42);
        VAR9[VAR13].VAR47[1] = VAR9[VAR13].VAR47[0] + VAR41;
        VAR9[VAR13].VAR47[2] = VAR9[VAR13].VAR47[1] + VAR42;
        VAR9[VAR13].VAR48[0] = VAR8->VAR26;
        VAR9[VAR13].VAR48[1] = VAR9[VAR13].VAR48[2] = VAR8->VAR26 / 2;
        if (VAR44 && (!VAR13 || VAR2->VAR45[VAR13 - 1]))
        {
            VAR43 = *VAR44;
            if (!VAR43.VAR49 && VAR13)
            {
                VAR43.VAR50.VAR47[0] += VAR51;
                VAR43.VAR50.VAR47[1] += VAR51;
                VAR43.VAR50.VAR47[2] += VAR51;
            }
            VAR2->VAR52.VAR53[VAR11](VAR9[VAR13].VAR47[0], VAR9[VAR13].VAR48[0], VAR43.VAR50.VAR47[0], VAR43.VAR50.VAR48[0], VAR8->VAR26, VAR8->VAR27);
            VAR2->VAR52.VAR53[VAR11](VAR9[VAR13].VAR47[1], VAR9[VAR13].VAR48[1], VAR43.VAR50.VAR47[1], VAR43.VAR50.VAR48[1], VAR8->VAR26 >> 1, VAR8->VAR27 >> 1);
            VAR2->VAR52.VAR53[VAR11](VAR9[VAR13].VAR47[2], VAR9[VAR13].VAR48[2], VAR43.VAR50.VAR47[2], VAR43.VAR50.VAR48[2], VAR8->VAR26 >> 1, VAR8->VAR27 >> 1);
        }
    }
    for (VAR14 = 0; VAR14 < VAR2->VAR40 + 1; VAR14++)
    {
        int64_t VAR54 = 0;
        if (!VAR2->VAR45[VAR14])
            break;
        VAR8->VAR55[0] = VAR8->VAR55[1] = VAR8->VAR55[2] = 0;
        VAR9[0].VAR56 = VAR57;
        VAR9[0].VAR58 = 1 * VAR59;
        VAR15 = FUN7(VAR8, &VAR9[0]);
        for (VAR13 = 0; VAR13 < VAR2->VAR40 + 1; VAR13++)
        {
            int VAR60 = VAR13 % (VAR14 + 1) == VAR14 || VAR13 == VAR2->VAR40;
            VAR9[VAR13 + 1].VAR56 = VAR60 ? VAR23 : VAR24;
            VAR9[VAR13 + 1].VAR58 = VAR60 ? VAR16 : VAR17;
            VAR15 = FUN7(VAR8, &VAR9[VAR13 + 1]);
            VAR54 += (VAR15 * VAR18) >> (VAR25 - 3);
        }
        while (VAR15)
        {
            VAR15 = FUN7(VAR8, NULL);
            VAR54 += (VAR15 * VAR18) >> (VAR25 - 3);
        }
        VAR54 += VAR8->VAR55[0] + VAR8->VAR55[1] + VAR8->VAR55[2];
        if (VAR54 < VAR19)
        {
            VAR19 = VAR54;
            VAR21 = VAR14;
        }
    }
    FUN8(VAR8);
    FUN9(&VAR8);
    for (VAR13 = 0; VAR13 < VAR2->VAR40 + 2; VAR13++)
    {
        FUN9(&VAR9[VAR13].VAR47[0]);
    }
    return VAR21;
}