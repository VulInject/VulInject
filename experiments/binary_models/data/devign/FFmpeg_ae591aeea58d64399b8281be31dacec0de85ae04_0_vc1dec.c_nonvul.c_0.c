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
        return;
    VAR12 = VAR6->VAR29[VAR4][VAR3][0];
    VAR13 = VAR6->VAR29[VAR4][VAR3][1];
    if (!VAR4)
    {
        if (VAR2->VAR23)
        {
            if ((VAR2->VAR25 != VAR2->VAR24[VAR4]) && VAR2->VAR25)
                VAR10 = VAR6->VAR30.VAR27.VAR28[0];
            else
                VAR10 = VAR6->VAR26.VAR27.VAR28[0];
        }
        else
            VAR10 = VAR6->VAR26.VAR27.VAR28[0];
    }
    else
        VAR10 = VAR6->VAR31.VAR27.VAR28[0];
    if (VAR2->VAR23)
    {
        if (VAR2->VAR25 != VAR2->VAR24[VAR4])
            VAR13 = VAR13 - 2 + 4 * VAR2->VAR25;
    }
    if (VAR6->VAR32 == VAR33 && VAR3 == 3 && VAR2->VAR23)
    {
        int VAR34 = 0, VAR35 = 0, VAR36;
        int VAR37[2][4][2], VAR27;
        int VAR38, VAR39;
        for (VAR36 = 0; VAR36 < 4; VAR36++)
        {
            VAR27 = VAR2->VAR40[0][VAR6->VAR21[VAR36] + VAR2->VAR41];
            VAR37[VAR27][VAR27 ? VAR35 : VAR34][0] = VAR6->VAR29[0][VAR36][0];
            VAR37[VAR27][VAR27 ? VAR35 : VAR34][1] = VAR6->VAR29[0][VAR36][1];
            VAR35 += VAR27;
            VAR34 += 1 - VAR27;
        }
        VAR27 = VAR35 > VAR34;
        switch (VAR27 ? VAR35 : VAR34)
        {
        case 4:
            VAR38 = FUN2(VAR37[VAR27][0][0], VAR37[VAR27][1][0], VAR37[VAR27][2][0], VAR37[VAR27][3][0]);
            VAR39 = FUN2(VAR37[VAR27][0][1], VAR37[VAR27][1][1], VAR37[VAR27][2][1], VAR37[VAR27][3][1]);
            break;
        case 3:
            VAR38 = FUN3(VAR37[VAR27][0][0], VAR37[VAR27][1][0], VAR37[VAR27][2][0]);
            VAR39 = FUN3(VAR37[VAR27][0][1], VAR37[VAR27][1][1], VAR37[VAR27][2][1]);
            break;
        case 2:
            VAR38 = (VAR37[VAR27][0][0] + VAR37[VAR27][1][0]) / 2;
            VAR39 = (VAR37[VAR27][0][1] + VAR37[VAR27][1][1]) / 2;
            break;
        }
        VAR6->VAR30.VAR27.VAR42[1][VAR6->VAR21[0] + VAR2->VAR41][0] = VAR38;
        VAR6->VAR30.VAR27.VAR42[1][VAR6->VAR21[0] + VAR2->VAR41][1] = VAR39;
        for (VAR36 = 0; VAR36 < 4; VAR36++)
            VAR2->VAR40[1][VAR6->VAR21[VAR36] + VAR2->VAR41] = VAR27;
    }
    if (VAR2->VAR18 == VAR19)
    {
        int VAR43, VAR44;
        int VAR45 = VAR6->VAR46->VAR47;
        int VAR48 = VAR6->VAR46->VAR49 >> 1;
        VAR43 = (VAR6->VAR50 * 16) + (VAR12 >> 2);
        VAR44 = (VAR6->VAR51 * 8) + (VAR13 >> 3);
        if (VAR43 < -17)
            VAR12 -= 4 * (VAR43 + 17);
        else if (VAR43 > VAR45)
            VAR12 -= 4 * (VAR43 - VAR45);
        if (VAR44 < -18)
            VAR13 -= 8 * (VAR44 + 18);
        else if (VAR44 > VAR48 + 1)
            VAR13 -= 8 * (VAR44 - VAR48 - 1);
    }
    if ((VAR2->VAR18 == VAR19) && VAR17)
        VAR16 = ((VAR3 > 1) ? VAR6->VAR52 : 0) + (VAR3 & 1) * 8;
    else
        VAR16 = VAR6->VAR52 * 4 * (VAR3 & 2) + (VAR3 & 1) * 8;
    if (VAR2->VAR23 && VAR2->VAR25)
        VAR16 += VAR6->VAR53->VAR27.VAR52[0];
    VAR14 = VAR6->VAR50 * 16 + (VAR3 & 1) * 8 + (VAR12 >> 2);
    if (!VAR17)
        VAR15 = VAR6->VAR51 * 16 + (VAR3 & 2) * 4 + (VAR13 >> 2);
    else
        VAR15 = VAR6->VAR51 * 16 + ((VAR3 > 1) ? 1 : 0) + (VAR13 >> 2);
    if (VAR2->VAR54 != VAR55)
    {
        VAR14 = FUN4(VAR14, -16, VAR6->VAR56 * 16);
        VAR15 = FUN4(VAR15, -16, VAR6->VAR57 * 16);
    }
    else
    {
        VAR14 = FUN4(VAR14, -17, VAR6->VAR46->VAR47);
        if (VAR2->VAR18 == VAR19)
        {
            if (VAR15 & 1)
                VAR15 = FUN4(VAR15, -17, VAR6->VAR46->VAR49 + 1);
            else
                VAR15 = FUN4(VAR15, -18, VAR6->VAR46->VAR49);
        }
        else
        {
            VAR15 = FUN4(VAR15, -18, VAR6->VAR46->VAR49 + 1);
        }
    }
    VAR10 += VAR15 * VAR6->VAR52 + VAR14;
    if (VAR2->VAR23 && VAR2->VAR24[VAR4])
        VAR10 += VAR6->VAR53->VAR27.VAR52[0];
    if (VAR17 && !(VAR15 & 1))
        VAR22--;
    if (VAR17 && (VAR15 & 1) && VAR15 < 4)
        VAR15--;
    if (VAR2->VAR58 || (VAR2->VAR59 == VAR60) || VAR6->VAR61 < 13 || VAR22 < 23 || (unsigned)(VAR14 - VAR6->VAR62) > VAR6->VAR61 - (VAR12 & 3) - 8 - VAR6->VAR62 * 2 || (unsigned)(VAR15 - (VAR6->VAR62 << VAR17)) > VAR22 - (VAR13 & 3) - ((8 + VAR6->VAR62 * 2) << VAR17))
    {
        VAR10 -= VAR6->VAR62 * (1 + (VAR6->VAR52 << VAR17));
        VAR6->VAR8.FUN5(VAR6->VAR63, VAR10, VAR6->VAR52, 9 + VAR6->VAR62 * 2, (9 + VAR6->VAR62 * 2) << VAR17, VAR14 - VAR6->VAR62, VAR15 - (VAR6->VAR62 << VAR17), VAR6->VAR61, VAR22);
        VAR10 = VAR6->VAR63;
        if (VAR2->VAR58)
        {
            int VAR64, VAR65;
            VAR9 *VAR66;
            VAR66 = VAR10;
            for (VAR65 = 0; VAR65 < 9 + VAR6->VAR62 * 2; VAR65++)
            {
                for (VAR64 = 0; VAR64 < 9 + VAR6->VAR62 * 2; VAR64++)
                    VAR66[VAR64] = ((VAR66[VAR64] - 128) >> 1) + 128;
                VAR66 += VAR6->VAR52 << VAR17;
            }
        }
        if (VAR2->VAR59 == VAR60)
        {
            int VAR64, VAR65;
            VAR9 *VAR66;
            VAR66 = VAR10;
            for (VAR65 = 0; VAR65 < 9 + VAR6->VAR62 * 2; VAR65++)
            {
                for (VAR64 = 0; VAR64 < 9 + VAR6->VAR62 * 2; VAR64++)
                    VAR66[VAR64] = VAR2->VAR67[VAR66[VAR64]];
                VAR66 += VAR6->VAR52 << VAR17;
            }
        }
        VAR10 += VAR6->VAR62 * (1 + (VAR6->VAR52 << VAR17));
    }
    if (VAR6->VAR62)
    {
        VAR11 = ((VAR13 & 3) << 2) | (VAR12 & 3);
        VAR2->VAR68.VAR69[VAR11](VAR6->VAR70[0] + VAR16, VAR10, VAR6->VAR52 << VAR17, VAR2->VAR71);
    }
    else
    {
        VAR11 = (VAR13 & 2) | ((VAR12 & 2) >> 1);
        if (!VAR2->VAR71)
            VAR8->VAR72[1][VAR11](VAR6->VAR70[0] + VAR16, VAR10, VAR6->VAR52, 8);
        else
            VAR8->VAR73[1][VAR11](VAR6->VAR70[0] + VAR16, VAR10, VAR6->VAR52, 8);
    }
}