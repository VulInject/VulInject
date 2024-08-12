static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8;
    int VAR9 = VAR4->VAR10 + VAR4->VAR11 * VAR4->VAR12;
    int VAR13 = 0;
    int VAR14, VAR15;
    int VAR16 = VAR2->VAR17;
    int VAR18 = 0;
    int VAR19;
    int VAR20 = 1;
    int VAR21, VAR22;
    int VAR23;
    int VAR24[2], VAR25[2], VAR26[2];
    int VAR27 = VAR28;
    int VAR29;
    int FUN2(VAR30);
    VAR15 = VAR2->VAR31;
    VAR4->VAR32 = 0;
    VAR29 = FUN3(VAR6, VAR2->VAR33->VAR34, VAR35, 2);
    if (VAR29 <= 1)
    {
        VAR4->VAR32 = VAR2->VAR36[VAR4->VAR10] = 1;
        VAR4->VAR37.VAR38[1][VAR4->VAR39[0]][0] = 0;
        VAR4->VAR37.VAR38[1][VAR4->VAR39[0]][1] = 0;
        VAR4->VAR37.VAR40[VAR9 + VAR2->VAR41] = VAR42;
        FUN4();
        VAR4->VAR37.VAR43[VAR9] = VAR15;
        VAR4->VAR44 = VAR4->VAR45[VAR15];
        VAR4->VAR46 = VAR4->VAR47[VAR15];
        VAR2->VAR4.VAR48 = VAR2->VAR49[VAR9] = FUN5(VAR6);
        VAR18 = VAR29 & 1;
        if (VAR18)
            VAR13 = 1 + FUN3(&VAR2->VAR4.VAR6, VAR2->VAR50->VAR34, VAR51, 2);
        VAR21 = 0;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            VAR4->VAR52[0][VAR4->VAR39[VAR7]] = 0;
            VAR21 += VAR7 >> 2;
            VAR19 = ((VAR13 >> (5 - VAR7)) & 1);
            VAR2->VAR40[0][VAR4->VAR39[VAR7]] = VAR4->VAR32;
            VAR2->VAR53 = VAR2->VAR54 = 0;
            if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR55)
                VAR2->VAR53 = VAR2->VAR40[0][VAR4->VAR39[VAR7] - VAR4->VAR56[VAR7]];
            if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR10)
                VAR2->VAR54 = VAR2->VAR40[0][VAR4->VAR39[VAR7] - 1];
            FUN6(VAR2, VAR4->VAR57[VAR7], VAR7, VAR19, VAR15, (VAR7 & 4) ? VAR2->VAR58 : VAR2->VAR59);
            if ((VAR7 > 3) && (VAR4->VAR60 & VAR61))
                continue;
            VAR2->VAR62.FUN7(VAR4->VAR57[VAR7]);
            if (VAR2->VAR63)
                for (VAR8 = 0; VAR8 < 64; VAR8++)
                    VAR4->VAR57[VAR7][VAR8] <<= 1;
            VAR22 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR64);
            VAR4->VAR65.FUN8(VAR4->VAR57[VAR7], VAR4->VAR66[VAR21] + VAR22, (VAR7 & 4) ? VAR4->VAR67 : VAR4->VAR64);
        }
    }
    else
    {
        VAR4->VAR32 = VAR2->VAR36[VAR4->VAR10] = 0;
        VAR4->VAR37.VAR40[VAR9 + VAR2->VAR41] = VAR68;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
            VAR2->VAR40[0][VAR4->VAR39[VAR7]] = 0;
        if (VAR2->VAR69)
            VAR23 = VAR2->VAR70[VAR9] = FUN5(VAR6);
        else
            VAR23 = VAR2->VAR70[VAR9];
        if (VAR29 <= 5)
        {
            VAR24[0] = VAR24[1] = VAR25[0] = VAR25[1] = 0;
            VAR26[0] = VAR26[1] = 0;
            if (VAR23)
                VAR27 = VAR71;
            else
            {
                VAR27 = FUN9(VAR6);
                switch (VAR27)
                {
                case 0:
                    VAR27 = VAR28;
                    break;
                case 1:
                    VAR27 = VAR72;
                    break;
                case 2:
                    VAR27 = VAR73;
                    VAR30 = FUN5(VAR6);
                }
            }
            VAR2->VAR27 = VAR27;
            if (VAR27 != VAR72 && VAR29 & 1)
            {
                FUN10(VAR2, &VAR24[VAR27 == VAR28], &VAR25[VAR27 == VAR28], &VAR26[VAR27 == VAR28]);
            }
            if (VAR27 == VAR73 && VAR30)
            {
                FUN10(VAR2, &VAR24[1], &VAR25[1], &VAR26[1]);
            }
            if (VAR27 == VAR72)
            {
                VAR24[0] = VAR25[0] = VAR26[0] = 0;
                VAR24[1] = VAR25[1] = VAR26[0] = 0;
            }
            FUN11(VAR2, 0, VAR24, VAR25, 1, VAR26);
            FUN12(VAR2, VAR24, VAR25, (VAR27 == VAR72), VAR27);
            VAR18 = !(VAR29 & 2);
        }
        else
        {
            if (VAR23)
                VAR27 = VAR71;
            VAR2->VAR27 = VAR27;
            VAR2->VAR74 = FUN3(VAR6, VAR2->VAR75->VAR34, VAR76, 1);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                if (VAR7 < 4)
                {
                    VAR24[0] = VAR25[0] = VAR26[0] = 0;
                    VAR24[1] = VAR25[1] = VAR26[1] = 0;
                    VAR19 = ((VAR2->VAR74 >> (3 - VAR7)) & 1);
                    if (VAR19)
                    {
                        FUN10(VAR2, &VAR24[VAR27 == VAR28], &VAR25[VAR27 == VAR28], &VAR26[VAR27 == VAR28]);
                    }
                    FUN11(VAR2, VAR7, VAR24, VAR25, 0, VAR26);
                    FUN13(VAR2, VAR7, VAR27 == VAR28, 0);
                }
                else if (VAR7 == 4)
                    FUN14(VAR2, VAR27 == VAR28);
            }
            VAR18 = VAR29 & 1;
        }
        if (VAR18)
            VAR13 = 1 + FUN3(&VAR2->VAR4.VAR6, VAR2->VAR50->VAR34, VAR77, 2);
        if (VAR13)
        {
            FUN4();
        }
        VAR4->VAR37.VAR43[VAR9] = VAR15;
        if (!VAR2->VAR78 && VAR13)
        {
            VAR16 = FUN3(VAR6, VAR79[VAR2->VAR80].VAR34, VAR81, 2);
        }
        VAR21 = 0;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            VAR4->VAR52[0][VAR4->VAR39[VAR7]] = 0;
            VAR21 += VAR7 >> 2;
            VAR19 = ((VAR13 >> (5 - VAR7)) & 1);
            VAR22 = (VAR7 & 4) ? 0 : (VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR64;
            if (VAR19)
            {
                FUN15(VAR2, VAR4->VAR57[VAR7], VAR7, VAR15, VAR16, VAR20, VAR4->VAR66[VAR21] + VAR22, (VAR7 & 4) ? VAR4->VAR67 : VAR4->VAR64, (VAR7 & 4) && (VAR4->VAR60 & VAR61), NULL);
                if (!VAR2->VAR78 && VAR16 < 8)
                    VAR16 = -1;
                VAR20 = 0;
            }
        }
    }
}