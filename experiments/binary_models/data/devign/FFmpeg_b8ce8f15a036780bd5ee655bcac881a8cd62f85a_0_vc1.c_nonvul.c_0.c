static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10;
    int VAR11;
    int VAR12 = VAR2->VAR13;
    int VAR14;
    int VAR15;
    VAR16 *VAR17 = &VAR6->VAR17;
    switch (VAR2->VAR18)
    {
    case 0:
        VAR2->VAR19 = (VAR2->VAR20 <= 8) ? VAR21 : VAR22;
        break;
    case 1:
        VAR2->VAR19 = VAR23;
        break;
    case 2:
        VAR2->VAR19 = VAR24;
        break;
    }
    switch (VAR2->VAR25)
    {
    case 0:
        VAR2->VAR26 = (VAR2->VAR20 <= 8) ? VAR27 : VAR28;
        break;
    case 1:
        VAR2->VAR26 = VAR29;
        break;
    case 2:
        VAR2->VAR26 = VAR30;
        break;
    }
    VAR6->VAR31 = VAR6->VAR32 = 0;
    VAR6->VAR33 = 1;
    VAR6->VAR34 = 1;
    FUN2(VAR6, 0, 0, VAR6->VAR35 - 1, VAR6->VAR36 - 1, (VAR37 | VAR38 | VAR39));
    for (VAR6->VAR32 = 0; VAR6->VAR32 < VAR6->VAR36; VAR6->VAR32++)
    {
        for (VAR6->VAR31 = 0; VAR6->VAR31 < VAR6->VAR35; VAR6->VAR31++)
        {
            FUN3(VAR6);
            FUN4(VAR6);
            VAR6->VAR40.FUN5(VAR6->VAR41[0]);
            VAR11 = VAR6->VAR31 + VAR6->VAR32 * VAR6->VAR42;
            VAR6->VAR43.VAR44[VAR11] = VAR45;
            VAR6->VAR43.VAR46[1][VAR6->VAR47[0]][0] = 0;
            VAR6->VAR43.VAR46[1][VAR6->VAR47[0]][1] = 0;
            VAR7 = FUN6(&VAR2->VAR6.VAR17, VAR48.VAR49, VAR50, 2);
            if (VAR2->VAR51)
                VAR2->VAR6.VAR52 = FUN7(&VAR2->VAR6.VAR17, 1);
            else
                VAR2->VAR6.VAR52 = VAR2->VAR53[VAR11];
            if (VAR2->VAR54 == VAR55)
            {
                if (VAR2->VAR56)
                    VAR15 = FUN7(&VAR2->VAR6.VAR17, 1);
                else
                    VAR15 = VAR2->VAR57[VAR11];
            }
            else
                VAR15 = (VAR2->VAR54 == VAR58);
            FUN8();
            VAR6->VAR43.VAR59[VAR11] = VAR12;
            VAR6->VAR60 = VAR6->VAR61[VAR12];
            VAR6->VAR62 = VAR6->VAR63[VAR12];
            for (VAR3 = 0; VAR3 < 6; VAR3++)
            {
                VAR8 = ((VAR7 >> (5 - VAR3)) & 1);
                if (VAR3 < 4)
                {
                    int VAR64 = FUN9(&VAR2->VAR6, VAR3, &VAR10);
                    VAR8 = VAR8 ^ VAR64;
                    *VAR10 = VAR8;
                }
                VAR7 |= VAR8 << (5 - VAR3);
                VAR2->VAR65 = !VAR6->VAR34 || (VAR3 == 2 || VAR3 == 3);
                VAR2->VAR66 = !!VAR6->VAR31 || (VAR3 == 1 || VAR3 == 3);
                FUN10(VAR2, VAR6->VAR41[VAR3], VAR3, VAR8, (VAR3 < 4) ? VAR2->VAR19 : VAR2->VAR26, VAR12);
                VAR6->VAR40.FUN11(VAR6->VAR41[VAR3]);
                for (VAR4 = 0; VAR4 < 64; VAR4++)
                    VAR6->VAR41[VAR3][VAR4] += 128;
            }
            FUN12(VAR2, VAR6->VAR41);
            if (VAR15)
            {
                if (VAR6->VAR31)
                {
                    VAR6->VAR40.FUN13(VAR6->VAR67[0], VAR6->VAR68, 0);
                    VAR6->VAR40.FUN13(VAR6->VAR67[0] + 8 * VAR6->VAR68, VAR6->VAR68, 0);
                    if (!(VAR6->VAR69 & VAR70))
                    {
                        VAR6->VAR40.FUN13(VAR6->VAR67[1], VAR6->VAR71, VAR6->VAR31 & 1);
                        VAR6->VAR40.FUN13(VAR6->VAR67[2], VAR6->VAR71, VAR6->VAR31 & 1);
                    }
                }
                VAR6->VAR40.FUN13(VAR6->VAR67[0] + 8, VAR6->VAR68, 1);
                VAR6->VAR40.FUN13(VAR6->VAR67[0] + 8 * VAR6->VAR68 + 8, VAR6->VAR68, 1);
                if (!VAR6->VAR34)
                {
                    VAR6->VAR40.FUN14(VAR6->VAR67[0], VAR6->VAR68, 0);
                    VAR6->VAR40.FUN14(VAR6->VAR67[0] + 8, VAR6->VAR68, 0);
                    if (!(VAR6->VAR69 & VAR70))
                    {
                        VAR6->VAR40.FUN14(VAR6->VAR67[1], VAR6->VAR71, VAR6->VAR32 & 1);
                        VAR6->VAR40.FUN14(VAR6->VAR67[2], VAR6->VAR71, VAR6->VAR32 & 1);
                    }
                }
                VAR6->VAR40.FUN14(VAR6->VAR67[0] + 8 * VAR6->VAR68, VAR6->VAR68, 1);
                VAR6->VAR40.FUN14(VAR6->VAR67[0] + 8 * VAR6->VAR68 + 8, VAR6->VAR68, 1);
            }
            if (FUN15(&VAR6->VAR17) > VAR2->VAR72)
            {
                FUN16(VAR6->VAR73, VAR74, "", FUN15(&VAR6->VAR17), VAR2->VAR72);
                return;
            }
        }
        FUN17(VAR6, VAR6->VAR32 * 16, 16);
        VAR6->VAR34 = 0;
    }
}