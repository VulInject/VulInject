static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6, VAR7;
    VAR8 *VAR9;
    int VAR10;
    int VAR11 = VAR2->VAR12;
    int VAR13;
    VAR14 *VAR15 = &VAR5->VAR15;
    switch (VAR2->VAR16)
    {
    case 0:
        VAR2->VAR17 = (VAR2->VAR18 <= 8) ? VAR19 : VAR20;
        break;
    case 1:
        VAR2->VAR17 = VAR21;
        break;
    case 2:
        VAR2->VAR17 = VAR22;
        break;
    }
    switch (VAR2->VAR23)
    {
    case 0:
        VAR2->VAR24 = (VAR2->VAR18 <= 8) ? VAR25 : VAR26;
        break;
    case 1:
        VAR2->VAR24 = VAR27;
        break;
    case 2:
        VAR2->VAR24 = VAR28;
        break;
    }
    VAR5->VAR29 = VAR5->VAR30 = 0;
    VAR5->VAR31 = 1;
    VAR5->VAR32 = 1;
    VAR5->VAR30 = VAR5->VAR33;
    if (VAR5->VAR33)
    {
        VAR5->VAR29 = 0;
        FUN2(VAR5);
        memset(&VAR5->VAR34[VAR5->VAR35[0] - VAR5->VAR36], 0, VAR5->VAR36 * sizeof(*VAR5->VAR34));
    }
    for (; VAR5->VAR30 < VAR5->VAR37; VAR5->VAR30++)
    {
        VAR5->VAR29 = 0;
        FUN2(VAR5);
        for (; VAR5->VAR29 < VAR5->VAR38; VAR5->VAR29++)
        {
            FUN3(*VAR39)
            [64] = VAR2->VAR39[VAR2->VAR40];
            FUN4(VAR5);
            VAR5->VAR41.FUN5(VAR39[0]);
            VAR10 = VAR5->VAR29 + VAR5->VAR30 * VAR5->VAR42;
            VAR5->VAR43.VAR44.VAR45[VAR10] = VAR46;
            VAR5->VAR43.VAR44.VAR47[1][VAR5->VAR35[0]][0] = 0;
            VAR5->VAR43.VAR44.VAR47[1][VAR5->VAR35[0]][1] = 0;
            VAR6 = FUN6(&VAR2->VAR5.VAR15, VAR48.VAR49, VAR50, 2);
            if (VAR2->VAR51)
                VAR2->VAR5.VAR52 = FUN7(&VAR2->VAR5.VAR15);
            else
                VAR2->VAR5.VAR52 = VAR2->VAR53[VAR10];
            if (VAR2->VAR54 == VAR55 && VAR2->VAR56)
                VAR2->VAR57[VAR10] = FUN7(&VAR2->VAR5.VAR15);
            FUN8();
            VAR5->VAR43.VAR44.VAR58[VAR10] = VAR11;
            VAR5->VAR59 = VAR5->VAR60[VAR11];
            VAR5->VAR61 = VAR5->VAR62[VAR11];
            for (VAR3 = 0; VAR3 < 6; VAR3++)
            {
                VAR7 = ((VAR6 >> (5 - VAR3)) & 1);
                if (VAR3 < 4)
                {
                    int VAR63 = FUN9(&VAR2->VAR5, VAR3, &VAR9);
                    VAR7 = VAR7 ^ VAR63;
                    *VAR9 = VAR7;
                }
                VAR6 |= VAR7 << (5 - VAR3);
                VAR2->VAR64 = !VAR5->VAR32 || (VAR3 == 2 || VAR3 == 3);
                VAR2->VAR65 = !!VAR5->VAR29 || (VAR3 == 1 || VAR3 == 3);
                FUN10(VAR2, VAR39[VAR3], VAR3, VAR7, (VAR3 < 4) ? VAR2->VAR17 : VAR2->VAR24, VAR11);
                if (VAR3 > 3 && (VAR5->VAR66 & VAR67))
                    continue;
                VAR2->VAR68.FUN11(VAR39[VAR3]);
            }
            FUN12(VAR2);
            FUN13(VAR2);
            if (VAR2->VAR5.VAR69)
                FUN14(VAR2, VAR2->VAR12);
            if (FUN15(&VAR5->VAR15) > VAR2->VAR70)
            {
                FUN16(VAR5, 0, VAR5->VAR33, VAR5->VAR29, VAR5->VAR30, (VAR71 | VAR72 | VAR73));
                FUN17(VAR5->VAR74, VAR75, "", FUN15(&VAR5->VAR15), VAR2->VAR70);
                return;
            }
        }
        if (!VAR2->VAR5.VAR69)
            FUN18(VAR5, VAR5->VAR30 * 16, 16);
        else if (VAR5->VAR30)
            FUN18(VAR5, (VAR5->VAR30 - 1) * 16, 16);
        VAR5->VAR32 = 0;
    }
    VAR5->VAR29 = 0;
    FUN2(VAR5);
    for (; VAR5->VAR29 < VAR5->VAR38; VAR5->VAR29++)
    {
        FUN4(VAR5);
        FUN13(VAR2);
        if (VAR2->VAR5.VAR69)
            FUN14(VAR2, VAR2->VAR12);
    }
    if (VAR2->VAR5.VAR69)
        FUN18(VAR5, (VAR5->VAR76 - 1) * 16, 16);
    FUN16(VAR5, 0, VAR5->VAR33, VAR5->VAR38 - 1, VAR5->VAR37 - 1, (VAR71 | VAR72 | VAR73));
}