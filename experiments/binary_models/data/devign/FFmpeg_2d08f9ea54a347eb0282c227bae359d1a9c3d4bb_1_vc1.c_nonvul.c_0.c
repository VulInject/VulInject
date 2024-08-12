static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10;
    int VAR11;
    switch (VAR2->VAR12)
    {
    case 0:
        VAR2->VAR13 = (VAR2->VAR14 <= 8) ? VAR15 : VAR16;
        break;
    case 1:
        VAR2->VAR13 = VAR17;
        break;
    case 2:
        VAR2->VAR13 = VAR18;
        break;
    }
    switch (VAR2->VAR19)
    {
    case 0:
        VAR2->VAR20 = (VAR2->VAR14 <= 8) ? VAR21 : VAR22;
        break;
    case 1:
        VAR2->VAR20 = VAR23;
        break;
    case 2:
        VAR2->VAR20 = VAR24;
        break;
    }
    VAR6->VAR25 = VAR6->VAR26[VAR2->VAR27];
    VAR6->VAR28 = VAR6->VAR29[VAR2->VAR27];
    VAR6->VAR30 = VAR6->VAR31 = 0;
    VAR6->VAR32 = 1;
    VAR6->VAR33 = 1;
    for (VAR6->VAR31 = 0; VAR6->VAR31 < VAR6->VAR34; VAR6->VAR31++)
    {
        for (VAR6->VAR30 = 0; VAR6->VAR30 < VAR6->VAR35; VAR6->VAR30++)
        {
            FUN2(VAR6);
            FUN3(VAR6);
            VAR6->VAR36.FUN4(VAR6->VAR37[0]);
            VAR11 = VAR6->VAR30 + VAR6->VAR31 * VAR6->VAR35;
            VAR6->VAR38.VAR39[VAR11] = VAR40;
            VAR6->VAR38.VAR41[VAR11] = VAR2->VAR27;
            VAR6->VAR38.VAR42[1][VAR6->VAR43[0]][0] = 0;
            VAR6->VAR38.VAR42[1][VAR6->VAR43[0]][1] = 0;
            VAR7 = FUN5(&VAR2->VAR6.VAR44, VAR45.VAR46, VAR47, 2);
            VAR2->VAR6.VAR48 = FUN6(&VAR2->VAR6.VAR44);
            for (VAR3 = 0; VAR3 < 6; VAR3++)
            {
                VAR8 = ((VAR7 >> (5 - VAR3)) & 1);
                if (VAR3 < 4)
                {
                    int VAR49 = FUN7(&VAR2->VAR6, VAR3, &VAR10);
                    VAR8 = VAR8 ^ VAR49;
                    *VAR10 = VAR8;
                }
                VAR7 |= VAR8 << (5 - VAR3);
                FUN8(VAR2, VAR6->VAR37[VAR3], VAR3, VAR8, (VAR3 < 4) ? VAR2->VAR13 : VAR2->VAR20);
                VAR6->VAR36.FUN9(VAR6->VAR37[VAR3]);
                if (VAR2->VAR27 >= 9 && VAR2->VAR50)
                {
                    for (VAR4 = 0; VAR4 < 64; VAR4++)
                        VAR6->VAR37[VAR3][VAR4] += 128;
                }
            }
            FUN10(VAR2, VAR6->VAR37);
            if (VAR2->VAR27 >= 9 && VAR2->VAR50)
            {
                if (VAR6->VAR30)
                {
                    VAR6->VAR36.FUN11(VAR6->VAR51[0], VAR6->VAR52);
                    VAR6->VAR36.FUN11(VAR6->VAR51[0] + 8 * VAR6->VAR52, VAR6->VAR52);
                    if (!(VAR6->VAR53 & VAR54))
                    {
                        VAR6->VAR36.FUN11(VAR6->VAR51[1], VAR6->VAR55);
                        VAR6->VAR36.FUN11(VAR6->VAR51[2], VAR6->VAR55);
                    }
                }
                VAR6->VAR36.FUN11(VAR6->VAR51[0] + 8, VAR6->VAR52);
                VAR6->VAR36.FUN11(VAR6->VAR51[0] + 8 * VAR6->VAR52 + 8, VAR6->VAR52);
                if (!VAR6->VAR33)
                {
                    VAR6->VAR36.FUN12(VAR6->VAR51[0], VAR6->VAR52);
                    VAR6->VAR36.FUN12(VAR6->VAR51[0] + 8, VAR6->VAR52);
                    if (!(VAR6->VAR53 & VAR54))
                    {
                        VAR6->VAR36.FUN12(VAR6->VAR51[1], VAR6->VAR55);
                        VAR6->VAR36.FUN12(VAR6->VAR51[2], VAR6->VAR55);
                    }
                }
                VAR6->VAR36.FUN12(VAR6->VAR51[0] + 8 * VAR6->VAR52, VAR6->VAR52);
                VAR6->VAR36.FUN12(VAR6->VAR51[0] + 8 * VAR6->VAR52 + 8, VAR6->VAR52);
            }
            if (VAR2->VAR6.VAR56)
                FUN13(VAR6, VAR2->VAR27);
            if (FUN14(&VAR6->VAR44) > VAR2->VAR57)
            {
                FUN15(VAR6, 0, 0, VAR6->VAR30, VAR6->VAR31, (VAR58 | VAR59 | VAR60));
                FUN16(VAR6->VAR61, VAR62, "", FUN14(&VAR6->VAR44), VAR2->VAR57);
                return;
            }
        }
        FUN17(VAR6, VAR6->VAR31 * 16, 16);
        VAR6->VAR33 = 0;
    }
    FUN15(VAR6, 0, 0, VAR6->VAR35 - 1, VAR6->VAR34 - 1, (VAR58 | VAR59 | VAR60));
}