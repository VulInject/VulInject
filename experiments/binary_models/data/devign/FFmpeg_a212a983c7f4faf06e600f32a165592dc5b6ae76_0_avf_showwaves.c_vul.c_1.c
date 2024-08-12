static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7[0];
    VAR8 *VAR9 = VAR4->VAR10;
    int64_t VAR11 = 0, VAR12 = VAR9->VAR13 / VAR2->VAR14;
    VAR15 *VAR16 = VAR9->VAR17;
    struct VAR18 *VAR19;
    const int VAR20 = VAR6->VAR21;
    const int VAR22 = 255 / (VAR9->VAR23 ? 1 : VAR20);
    const int VAR24 = VAR9->VAR23 ? VAR2->VAR25 / VAR20 : VAR2->VAR25;
    const int VAR26 = VAR16->VAR26[0];
    int VAR27 = 0;
    VAR28 *VAR29 = VAR9->VAR29;
    FUN2(VAR4, VAR30, "" VAR31 "", VAR12);
    memset(VAR29, 0, VAR20);
    for (VAR19 = VAR9->VAR32; VAR19; VAR19 = VAR19->VAR33)
    {
        int VAR34;
        const VAR15 *VAR35 = VAR19->VAR35;
        const VAR36 *VAR37 = (const VAR36 *)VAR35->VAR38[0];
        for (VAR34 = 0; VAR34 < VAR35->VAR39; VAR34++)
        {
            int VAR40;
            for (VAR40 = 0; VAR40 < VAR20; VAR40++)
                VAR29[VAR40] += FUN3(VAR37[VAR40 + VAR34 * VAR20]) << 1;
            if (VAR11++ == VAR12)
            {
                for (VAR40 = 0; VAR40 < VAR20; VAR40++)
                {
                    int16_t VAR41 = VAR29[VAR40] / VAR12;
                    VAR42 *VAR43 = VAR16->VAR38[0] + VAR27;
                    if (VAR9->VAR23)
                        VAR43 += VAR40 * VAR24 * VAR26;
                    FUN4(VAR27 < VAR2->VAR14);
                    VAR9->FUN5(VAR43, VAR24, VAR26, VAR41, &VAR9->VAR44[VAR40], VAR22);
                    VAR29[VAR40] = 0;
                    VAR27++;
                    VAR11 = 0;
                    return FUN6(VAR2)