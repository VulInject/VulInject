static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = &VAR2->VAR6.VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16;
    int VAR17 = (VAR2->VAR18 == VAR19) ? VAR2->VAR20[VAR6->VAR21[VAR3]] : 0;
    int VAR22 = VAR6->VAR22 >> VAR2->VAR23;
    if ((!VAR2->VAR23 || (VAR2->VAR24[VAR4] == 1 && VAR2->VAR25 == 1)) && !VAR2->VAR6.VAR26.VAR27.VAR28[0])
        VAR12 = VAR6->VAR29[VAR4][VAR3][0];
    VAR13 = VAR6->VAR29[VAR4][VAR3][1];
    if (!VAR4)
    {
        if (VAR2->VAR23)
        {
            if ((VAR2->VAR25 != VAR2->VAR24[VAR4]) && VAR2->VAR30)
                VAR10 = VAR6->VAR31.VAR27.VAR28[0];
            else
                VAR10 = VAR6->VAR26.VAR27.VAR28[0];
        }
        else
            VAR10 = VAR6->VAR26.VAR27.VAR28[0];
    }
    else
        VAR10 = VAR6->VAR32.VAR27.VAR28[0];
    if (VAR2->VAR23)
    {
        if (VAR2->VAR25 != VAR2->VAR24[VAR4])
            VAR13 = VAR13 - 2 + 4 * VAR2->VAR25;
    }
    if (VAR6->VAR33 == VAR34 && VAR3 == 3 && VAR2->VAR23)
    {
        int VAR35 = 0, VAR36 = 0, VAR37;
        int VAR38[2][4][2], VAR27;
        int VAR39, VAR40;
        for (VAR37 = 0; VAR37 < 4; VAR37++)
        {
            VAR27 = VAR2->VAR41[0][VAR6->VAR21[VAR37] + VAR2->VAR42];
            VAR38[VAR27][VAR27 ? VAR36 : VAR35][0] = VAR6->VAR29[0][VAR37][0];
            VAR38[VAR27][VAR27 ? VAR36 : VAR35][1] = VAR6->VAR29[0][VAR37][1];
            VAR36 += VAR27;
            VAR35 += 1 - VAR27;
        }
        VAR27 = VAR36 > VAR35;
        switch (VAR27 ? VAR36 : VAR35)
        {
        case 4:
            VAR39 = FUN2(VAR38[VAR27][0][0], VAR38[VAR27][1][0], VAR38[VAR27][2][0], VAR38[VAR27][3][0]);
            VAR40 = FUN2(VAR38[VAR27][0][1], VAR38[VAR27][1][1], VAR38[VAR27][2][1], VAR38[VAR27][3][1]);
            break;
        case 3:
            VAR39 = FUN3(VAR38[VAR27][0][0], VAR38[VAR27][1][0], VAR38[VAR27][2][0]);
            VAR40 = FUN3(VAR38[VAR27][0][1], VAR38[VAR27][1][1], VAR38[VAR27][2][1]);
            break;
        case 2:
            VAR39 = (VAR38[VAR27][0][0] + VAR38[VAR27][1][0]) / 2;
            VAR40 = (VAR38[VAR27][0][1] + VAR38[VAR27][1][1]) / 2;
            break;
        default:
            FUN4(0);
        }
        VAR6->VAR31.VAR27.VAR43[1][VAR6->VAR21[0] + VAR2->VAR42][0] = VAR39;
        VAR6->VAR31.VAR27.VAR43[1][VAR6->VAR21[0] + VAR2->VAR42][1] = VAR40;
        for (VAR37 = 0; VAR37 < 4; VAR37++)
            VAR2->VAR41[1][VAR6->VAR21[VAR37] + VAR2->VAR42] = VAR27;
    }
    if (VAR2->VAR18 == VAR19)
    {
        int VAR44, VAR45;
        int VAR46 = VAR6->VAR47->VAR48;
        int VAR49 = VAR6->VAR47->VAR50 >> 1;
        VAR44 = (VAR6->VAR51 * 16) + (VAR12 >> 2);
        VAR45 = (VAR6->VAR52 * 8) + (VAR13 >> 3);
        if (VAR44 < -17)
            VAR12 -= 4 * (VAR44 + 17);
        else if (VAR44 > VAR46)
            VAR12 -= 4 * (VAR44 - VAR46);
        if (VAR45 < -18)
            VAR13 -= 8 * (VAR45 + 18);
        else if (VAR45 > VAR49 + 1)
            VAR13 -= 8 * (VAR45 - VAR49 - 1);
    }
    if ((VAR2->VAR18 == VAR19) && VAR17)
        VAR16 = ((VAR3 > 1) ? VAR6->VAR53 : 0) + (VAR3 & 1) * 8;
    else
        VAR16 = VAR6->VAR53 * 4 * (VAR3 & 2) + (VAR3 & 1) * 8;
    if (VAR2->VAR23 && VAR2->VAR30)
        VAR16 += VAR6->VAR54->VAR27.VAR53[0];
    VAR14 = VAR6->VAR51 * 16 + (VAR3 & 1) * 8 + (VAR12 >> 2);
    if (!VAR17)
        VAR15 = VAR6->VAR52 * 16 + (VAR3 & 2) * 4 + (VAR13 >> 2);
    else
        VAR15 = VAR6->VAR52 * 16 + ((VAR3 > 1) ? 1 : 0) + (VAR13 >> 2);
    if (VAR2->VAR55 != VAR56)
    {
        VAR14 = FUN5(VAR14, -16, VAR6->VAR57 * 16);
        VAR15 = FUN5(VAR15, -16, VAR6->VAR58 * 16);
    }
    else
    {
        VAR14 = FUN5(VAR14, -17, VAR6->VAR47->VAR48);
        if (VAR2->VAR18 == VAR19)
        {
            if (VAR15 & 1)
                VAR15 = FUN5(VAR15, -17, VAR6->VAR47->VAR50 + 1);
            else
                VAR15 = FUN5(VAR15, -18, VAR6->VAR47->VAR50);
        }
        else
        {
            VAR15 = FUN5(VAR15, -18, VAR6->VAR47->VAR50 + 1);
        }
    }
    VAR10 += VAR15 * VAR6->VAR53 + VAR14;
    if (VAR2->VAR23 && VAR2->VAR24[VAR4])
        VAR10 += VAR6->VAR54->VAR27.VAR53[0];
    if (VAR17 && !(VAR15 & 1))
        VAR22--;
    if (VAR17 && (VAR15 & 1) && VAR15 < 4)
        VAR15--;
    if (VAR2->VAR59 || (VAR2->VAR60 == VAR61) || VAR6->VAR62 < 13 || VAR22 < 23 || (unsigned)(VAR14 - VAR6->VAR63) > VAR6->VAR62 - (VAR12 & 3) - 8 - VAR6->VAR63 * 2 || (unsigned)(VAR15 - (VAR6->VAR63 << VAR17)) > VAR22 - (VAR13 & 3) - ((8 + VAR6->VAR63 * 2) << VAR17))
    {
        VAR10 -= VAR6->VAR63 * (1 + (VAR6->VAR53 << VAR17));
        VAR6->VAR8.FUN6(VAR6->VAR64, VAR10, VAR6->VAR53, 9 + VAR6->VAR63 * 2, (9 + VAR6->VAR63 * 2) << VAR17, VAR14 - VAR6->VAR63, VAR15 - (VAR6->VAR63 << VAR17), VAR6->VAR62, VAR22);
        VAR10 = VAR6->VAR64;
        if (VAR2->VAR59)
        {
            int VAR65, VAR66;
            VAR9 *VAR67;
            VAR67 = VAR10;
            for (VAR66 = 0; VAR66 < 9 + VAR6->VAR63 * 2; VAR66++)
            {
                for (VAR65 = 0; VAR65 < 9 + VAR6->VAR63 * 2; VAR65++)
                    VAR67[VAR65] = ((VAR67[VAR65] - 128) >> 1) + 128;
                VAR67 += VAR6->VAR53 << VAR17;
            }
        }
        if (VAR2->VAR60 == VAR61)
        {
            int VAR65, VAR66;
            VAR9 *VAR67;
            VAR67 = VAR10;
            for (VAR66 = 0; VAR66 < 9 + VAR6->VAR63 * 2; VAR66++)
            {
                for (VAR65 = 0; VAR65 < 9 + VAR6->VAR63 * 2; VAR65++)
                    VAR67[VAR65] = VAR2->VAR68[VAR67[VAR65]];
                VAR67 += VAR6->VAR53 << VAR17;
            }
        }
        VAR10 += VAR6->VAR63 * (1 + (VAR6->VAR53 << VAR17));
    }
    if (VAR6->VAR63)
    {
        VAR11 = ((VAR13 & 3) << 2) | (VAR12 & 3);
        VAR2->VAR69.VAR70[VAR11](VAR6->VAR71[0] + VAR16, VAR10, VAR6->VAR53 << VAR17, VAR2->VAR72);
    }
    else
    {
        VAR11 = (VAR13 & 2) | ((VAR12 & 2) >> 1);
        if (!VAR2->VAR72)
            VAR8->VAR73[1][VAR11](VAR6->VAR71[0] + VAR16, VAR10, VAR6->VAR53, 8);
        else
            VAR8->VAR74[1][VAR11](VAR6->VAR71[0] + VAR16, VAR10, VAR6->VAR53, 8);
    }