static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7;
    int VAR8 = VAR4->VAR9 + VAR4->VAR10 * VAR4->VAR11;
    int VAR12 = 0;
    int VAR13, VAR14;
    int VAR15 = VAR2->VAR16;
    int VAR17 = 1;
    int VAR18, VAR19;
    int VAR20;
    int VAR21 = 1;
    int VAR22, VAR23;
    int VAR24, VAR25 = 0, VAR26 = 0;
    int VAR27 = 0, VAR28, VAR29 = 0;
    int VAR30 = 0, VAR31;
    int VAR32, VAR33;
    VAR14 = VAR2->VAR34;
    if (VAR2->VAR35)
        VAR24 = FUN2(VAR6);
    else
        VAR24 = VAR2->VAR4.VAR36[VAR8];
    if (!VAR24)
    {
        if (VAR2->VAR37)
            VAR30 = FUN3(VAR6, VAR2->VAR38->VAR39, VAR40, 2);
        else
            VAR30 = FUN3(VAR6, VAR2->VAR38->VAR39, VAR41, 2);
        switch (VAR42[VAR2->VAR37][VAR30][0])
        {
        case VAR43:
            VAR25 = 1;
            VAR2->VAR44[VAR4->VAR45[0]] = 0;
            VAR2->VAR44[VAR4->VAR45[1]] = 0;
            VAR2->VAR44[VAR4->VAR45[2]] = 0;
            VAR2->VAR44[VAR4->VAR45[3]] = 0;
            break;
        case VAR46:
            VAR25 = 1;
            VAR2->VAR44[VAR4->VAR45[0]] = 1;
            VAR2->VAR44[VAR4->VAR45[1]] = 1;
            VAR2->VAR44[VAR4->VAR45[2]] = 1;
            VAR2->VAR44[VAR4->VAR45[3]] = 1;
            break;
        case VAR47:
            VAR26 = 1;
            VAR2->VAR44[VAR4->VAR45[0]] = 1;
            VAR2->VAR44[VAR4->VAR45[1]] = 1;
            VAR2->VAR44[VAR4->VAR45[2]] = 1;
            VAR2->VAR44[VAR4->VAR45[3]] = 1;
            break;
        case VAR48:
            VAR2->VAR44[VAR4->VAR45[0]] = 0;
            VAR2->VAR44[VAR4->VAR45[1]] = 0;
            VAR2->VAR44[VAR4->VAR45[2]] = 0;
            VAR2->VAR44[VAR4->VAR45[3]] = 0;
            break;
        }
        if (VAR42[VAR2->VAR37][VAR30][0] == VAR49)
        {
            for (VAR7 = 0; VAR7 < 4; VAR7++)
            {
                VAR4->VAR50.VAR51[1][VAR4->VAR45[VAR7]][0] = 0;
                VAR4->VAR50.VAR51[1][VAR4->VAR45[VAR7]][1] = 0;
            }
            VAR2->VAR52[VAR4->VAR9] = 0x3f;
            VAR4->VAR53 = 1;
            VAR4->VAR50.VAR54[VAR8] = VAR55;
            VAR33 = VAR2->VAR56[VAR8] = FUN2(VAR6);
            VAR17 = FUN2(VAR6);
            if (VAR17)
                VAR12 = 1 + FUN3(&VAR2->VAR4.VAR6, VAR2->VAR57->VAR39, VAR58, 2);
            VAR2->VAR4.VAR59 = VAR2->VAR60[VAR8] = FUN2(VAR6);
            FUN4();
            VAR4->VAR50.VAR61[VAR8] = VAR14;
            VAR4->VAR62 = VAR4->VAR63[VAR14];
            VAR4->VAR64 = VAR4->VAR65[VAR14];
            VAR22 = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR2->VAR66 = VAR2->VAR67 = 0;
                VAR2->VAR54[0][VAR4->VAR45[VAR7]] = 1;
                VAR4->VAR68[0][VAR4->VAR45[VAR7]] = 0;
                VAR22 += VAR7 >> 2;
                VAR20 = ((VAR12 >> (5 - VAR7)) & 1);
                if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR69)
                    VAR2->VAR66 = VAR2->VAR54[0][VAR4->VAR45[VAR7] - VAR4->VAR70[VAR7]];
                if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR9)
                    VAR2->VAR67 = VAR2->VAR54[0][VAR4->VAR45[VAR7] - 1];
                FUN5(VAR2, VAR4->VAR71[VAR7], VAR7, VAR20, VAR14, (VAR7 & 4) ? VAR2->VAR72 : VAR2->VAR73);
                if ((VAR7 > 3) && (VAR4->VAR74 & VAR75))
                    continue;
                VAR2->VAR76.FUN6(VAR4->VAR71[VAR7]);
                if (VAR7 < 4)
                {
                    VAR32 = VAR4->VAR77 << VAR33;
                    VAR23 = (VAR33) ? ((VAR7 & 1) * 8) + ((VAR7 & 2) >> 1) * VAR4->VAR77 : (VAR7 & 1) * 8 + 4 * (VAR7 & 2) * VAR4->VAR77;
                }
                else
                {
                    VAR32 = VAR4->VAR78;
                    VAR23 = 0;
                }
                VAR4->VAR79.FUN7(VAR4->VAR71[VAR7], VAR4->VAR80[VAR22] + VAR23, VAR32);
            }
        }
        else
        {
            VAR17 = VAR42[VAR2->VAR37][VAR30][3];
            if (VAR17)
                VAR12 = 1 + FUN3(&VAR2->VAR4.VAR6, VAR2->VAR57->VAR39, VAR58, 2);
            if (VAR42[VAR2->VAR37][VAR30][0] == VAR47)
            {
                VAR2->VAR81 = FUN3(VAR6, VAR2->VAR82->VAR39, VAR83, 1);
            }
            else
            {
                if ((VAR42[VAR2->VAR37][VAR30][0] == VAR43) || (VAR42[VAR2->VAR37][VAR30][0] == VAR46))
                {
                    VAR2->VAR84 = FUN3(VAR6, VAR2->VAR85->VAR39, VAR86, 1);
                }
            }
            VAR4->VAR53 = VAR2->VAR52[VAR4->VAR9] = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
                VAR2->VAR54[0][VAR4->VAR45[VAR7]] = 0;
            VAR33 = VAR2->VAR56[VAR8] = VAR42[VAR2->VAR37][VAR30][1];
            VAR22 = 0;
            if (VAR25)
            {
                VAR31 = VAR2->VAR84;
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    VAR18 = VAR19 = 0;
                    if (VAR31 & (8 >> VAR7))
                        FUN8(VAR2, &VAR18, &VAR19, 0);
                    FUN9(VAR2, VAR7, VAR18, VAR19, 0, VAR2->VAR87, VAR2->VAR88, VAR2->VAR54[0], 0);
                    FUN10(VAR2, VAR7, 0, 0);
                }
                FUN11(VAR2, 0, 0, 0);
            }
            else if (VAR26)
            {
                VAR31 = VAR2->VAR81;
                VAR18 = VAR19 = 0;
                if (VAR31 & 2)
                {
                    FUN8(VAR2, &VAR18, &VAR19, 0);
                }
                FUN9(VAR2, 0, VAR18, VAR19, 2, VAR2->VAR87, VAR2->VAR88, VAR2->VAR54[0], 0);
                FUN10(VAR2, 0, 0, 0);
                FUN10(VAR2, 1, 0, 0);
                VAR18 = VAR19 = 0;
                if (VAR31 & 1)
                {
                    FUN8(VAR2, &VAR18, &VAR19, 0);
                }
                FUN9(VAR2, 2, VAR18, VAR19, 2, VAR2->VAR87, VAR2->VAR88, VAR2->VAR54[0], 0);
                FUN10(VAR2, 2, 0, 0);
                FUN10(VAR2, 3, 0, 0);
                FUN11(VAR2, 0, 0, 0);
            }
            else
            {
                VAR31 = VAR42[VAR2->VAR37][VAR30][2];
                VAR18 = VAR19 = 0;
                if (VAR31)
                {
                    FUN8(VAR2, &VAR18, &VAR19, 0);
                }
                FUN9(VAR2, 0, VAR18, VAR19, 1, VAR2->VAR87, VAR2->VAR88, VAR2->VAR54[0], 0);
                FUN12(VAR2, 0);
            }
            if (VAR12)
                FUN4();
            VAR4->VAR50.VAR61[VAR8] = VAR14;
            if (!VAR2->VAR89 && VAR12)
                VAR15 = FUN3(VAR6, VAR90[VAR2->VAR91].VAR39, VAR92, 2);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR4->VAR68[0][VAR4->VAR45[VAR7]] = 0;
                VAR22 += VAR7 >> 2;
                VAR20 = ((VAR12 >> (5 - VAR7)) & 1);
                if (!VAR33)
                    VAR23 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR77);
                else
                    VAR23 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + ((VAR7 > 1) * VAR4->VAR77));
                if (VAR20)
                {
                    VAR28 = FUN13(VAR2, VAR4->VAR71[VAR7], VAR7, VAR14, VAR15, VAR21, VAR4->VAR80[VAR22] + VAR23, (VAR7 & 4) ? VAR4->VAR78 : (VAR4->VAR77 << VAR33), (VAR7 & 4) && (VAR4->VAR74 & VAR75), &VAR29);
                    VAR27 |= VAR28 << (VAR7 << 2);
                    if (!VAR2->VAR89 && VAR15 < 8)
                        VAR15 = -1;
                    VAR21 = 0;
                }
            }
        }
    }
    else
    {
        VAR4->VAR53 = VAR2->VAR52[VAR4->VAR9] = 0;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            VAR2->VAR54[0][VAR4->VAR45[VAR7]] = 0;
            VAR4->VAR68[0][VAR4->VAR45[VAR7]] = 0;
        }
        VAR4->VAR50.VAR54[VAR8] = VAR93;
        VAR4->VAR50.VAR61[VAR8] = 0;
        VAR2->VAR44[VAR4->VAR45[0]] = 0;
        VAR2->VAR44[VAR4->VAR45[1]] = 0;
        VAR2->VAR44[VAR4->VAR45[2]] = 0;
        VAR2->VAR44[VAR4->VAR45[3]] = 0;
        FUN9(VAR2, 0, 0, 0, 1, VAR2->VAR87, VAR2->VAR88, VAR2->VAR54[0], 0);
        FUN12(VAR2, 0);
    }
    if (VAR4->VAR9 == VAR4->VAR94 - 1)
        memmove(VAR2->VAR95, VAR2->VAR52, sizeof(VAR2->VAR95[0]) * VAR4->VAR11);
    return 0;
}