void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16 = (VAR2->VAR17 == VAR18) ? VAR2->VAR19[VAR7->VAR20[VAR3]] : 0;
    int VAR21 = VAR7->VAR21 >> VAR2->VAR22;
    FUN2(*VAR23)[256];
    int VAR24;
    if ((!VAR2->VAR22 || (VAR2->VAR25[VAR4] == 1 && VAR2->VAR26 == 1)) && !VAR2->VAR7.VAR27.VAR28->VAR29[0])
        return;
    VAR11 = VAR7->VAR30[VAR4][VAR3][0];
    VAR12 = VAR7->VAR30[VAR4][VAR3][1];
    if (!VAR4)
    {
        if (VAR2->VAR22 && (VAR2->VAR26 != VAR2->VAR25[VAR4]) && VAR2->VAR31)
        {
            VAR9 = VAR7->VAR32.VAR28->VAR29[0];
            VAR23 = VAR2->VAR33;
            VAR24 = VAR2->VAR34;
        }
        else
        {
            VAR9 = VAR7->VAR27.VAR28->VAR29[0];
            VAR23 = VAR2->VAR35;
            VAR24 = VAR2->VAR36;
        }
    }
    else
    {
        VAR9 = VAR7->VAR37.VAR28->VAR29[0];
        VAR23 = VAR2->VAR38;
        VAR24 = VAR2->VAR39;
    }
    if (!VAR9)
    {
        FUN3(VAR2->VAR7.VAR40, VAR41, "");
        return;
    }
    if (VAR2->VAR22)
    {
        if (VAR2->VAR26 != VAR2->VAR25[VAR4])
            VAR12 = VAR12 - 2 + 4 * VAR2->VAR26;
    }
    if (VAR7->VAR42 == VAR43 && VAR3 == 3 && VAR2->VAR22)
    {
        int VAR44 = 0, VAR45 = 0, VAR46;
        int VAR47[2][4][2], VAR28;
        int VAR48 = 0, VAR49 = 0;
        for (VAR46 = 0; VAR46 < 4; VAR46++)
        {
            VAR28 = VAR2->VAR50[0][VAR7->VAR20[VAR46] + VAR2->VAR51];
            VAR47[VAR28][VAR28 ? VAR45 : VAR44][0] = VAR7->VAR30[0][VAR46][0];
            VAR47[VAR28][VAR28 ? VAR45 : VAR44][1] = VAR7->VAR30[0][VAR46][1];
            VAR45 += VAR28;
            VAR44 += 1 - VAR28;
        }
        VAR28 = VAR45 > VAR44;
        switch (VAR28 ? VAR45 : VAR44)
        {
        case 4:
            VAR48 = FUN4(VAR47[VAR28][0][0], VAR47[VAR28][1][0], VAR47[VAR28][2][0], VAR47[VAR28][3][0]);
            VAR49 = FUN4(VAR47[VAR28][0][1], VAR47[VAR28][1][1], VAR47[VAR28][2][1], VAR47[VAR28][3][1]);
            break;
        case 3:
            VAR48 = FUN5(VAR47[VAR28][0][0], VAR47[VAR28][1][0], VAR47[VAR28][2][0]);
            VAR49 = FUN5(VAR47[VAR28][0][1], VAR47[VAR28][1][1], VAR47[VAR28][2][1]);
            break;
        case 2:
            VAR48 = (VAR47[VAR28][0][0] + VAR47[VAR28][1][0]) / 2;
            VAR49 = (VAR47[VAR28][0][1] + VAR47[VAR28][1][1]) / 2;
            break;
        }
        VAR7->VAR32.VAR52[1][VAR7->VAR20[0] + VAR2->VAR51][0] = VAR48;
        VAR7->VAR32.VAR52[1][VAR7->VAR20[0] + VAR2->VAR51][1] = VAR49;
        for (VAR46 = 0; VAR46 < 4; VAR46++)
            VAR2->VAR50[1][VAR7->VAR20[VAR46] + VAR2->VAR51] = VAR28;
    }
    if (VAR2->VAR17 == VAR18)
    {
        int VAR53, VAR54;
        int VAR55 = VAR7->VAR40->VAR56;
        int VAR57 = VAR7->VAR40->VAR58 >> 1;
        if (VAR7->VAR42 == VAR43)
        {
            VAR7->VAR32.VAR52[1][VAR7->VAR20[VAR3] + VAR2->VAR51][0] = VAR11;
            VAR7->VAR32.VAR52[1][VAR7->VAR20[VAR3] + VAR2->VAR51][1] = VAR12;
        }
        VAR53 = (VAR7->VAR59 * 16) + (VAR11 >> 2);
        VAR54 = (VAR7->VAR60 * 8) + (VAR12 >> 3);
        if (VAR53 < -17)
            VAR11 -= 4 * (VAR53 + 17);
        else if (VAR53 > VAR55)
            VAR11 -= 4 * (VAR53 - VAR55);
        if (VAR54 < -18)
            VAR12 -= 8 * (VAR54 + 18);
        else if (VAR54 > VAR57 + 1)
            VAR12 -= 8 * (VAR54 - VAR57 - 1);
    }
    if ((VAR2->VAR17 == VAR18) && VAR16)
        VAR15 = ((VAR3 > 1) ? VAR7->VAR61 : 0) + (VAR3 & 1) * 8;
    else
        VAR15 = VAR7->VAR61 * 4 * (VAR3 & 2) + (VAR3 & 1) * 8;
    VAR13 = VAR7->VAR59 * 16 + (VAR3 & 1) * 8 + (VAR11 >> 2);
    if (!VAR16)
        VAR14 = VAR7->VAR60 * 16 + (VAR3 & 2) * 4 + (VAR12 >> 2);
    else
        VAR14 = VAR7->VAR60 * 16 + ((VAR3 > 1) ? 1 : 0) + (VAR12 >> 2);
    if (VAR2->VAR62 != VAR63)
    {
        VAR13 = FUN6(VAR13, -16, VAR7->VAR64 * 16);
        VAR14 = FUN6(VAR14, -16, VAR7->VAR65 * 16);
    }
    else
    {
        VAR13 = FUN6(VAR13, -17, VAR7->VAR40->VAR56);
        if (VAR2->VAR17 == VAR18)
        {
            if (VAR14 & 1)
                VAR14 = FUN6(VAR14, -17, VAR7->VAR40->VAR58 + 1);
            else
                VAR14 = FUN6(VAR14, -18, VAR7->VAR40->VAR58);
        }
        else
        {
            VAR14 = FUN6(VAR14, -18, VAR7->VAR40->VAR58 + 1);
        }
    }
    VAR9 += VAR14 * VAR7->VAR61 + VAR13;
    if (VAR2->VAR22 && VAR2->VAR25[VAR4])
        VAR9 += VAR7->VAR66->VAR28->VAR61[0];
    if (VAR16 && !(VAR14 & 1))
        VAR21--;
    if (VAR16 && (VAR14 & 1) && VAR14 < 4)
        VAR14--;
    if (VAR2->VAR67 || VAR24 || VAR7->VAR68 < 13 || VAR21 < 23 || (unsigned)(VAR13 - VAR7->VAR69) > VAR7->VAR68 - (VAR11 & 3) - 8 - VAR7->VAR69 * 2 || (unsigned)(VAR14 - (VAR7->VAR69 << VAR16)) > VAR21 - (VAR12 & 3) - ((8 + VAR7->VAR69 * 2) << VAR16))
    {
        VAR9 -= VAR7->VAR69 * (1 + (VAR7->VAR61 << VAR16));
        VAR7->VAR70.FUN7(VAR7->VAR71, VAR9, VAR7->VAR61, VAR7->VAR61, 9 + VAR7->VAR69 * 2, (9 + VAR7->VAR69 * 2) << VAR16, VAR13 - VAR7->VAR69, VAR14 - (VAR7->VAR69 << VAR16), VAR7->VAR68, VAR21);
        VAR9 = VAR7->VAR71;
        if (VAR2->VAR67)
        {
            int VAR72, VAR73;
            VAR8 *VAR74;
            VAR74 = VAR9;
            for (VAR73 = 0; VAR73 < 9 + VAR7->VAR69 * 2; VAR73++)
            {
                for (VAR72 = 0; VAR72 < 9 + VAR7->VAR69 * 2; VAR72++)
                    VAR74[VAR72] = ((VAR74[VAR72] - 128) >> 1) + 128;
                VAR74 += VAR7->VAR61 << VAR16;
            }
        }
        if (VAR24)
        {
            int VAR72, VAR73;
            VAR8 *VAR74;
            VAR74 = VAR9;
            for (VAR73 = 0; VAR73 < 9 + VAR7->VAR69 * 2; VAR73++)
            {
                int VAR28 = VAR2->VAR22 ? VAR2->VAR25[VAR4] : (((VAR73 << VAR16) + VAR14 - (VAR7->VAR69 << VAR16)) & 1);
                for (VAR72 = 0; VAR72 < 9 + VAR7->VAR69 * 2; VAR72++)
                    VAR74[VAR72] = VAR23[VAR28][VAR74[VAR72]];
                VAR74 += VAR7->VAR61 << VAR16;
            }
        }
        VAR9 += VAR7->VAR69 * (1 + (VAR7->VAR61 << VAR16));
    }
    if (VAR7->VAR69)
    {
        VAR10 = ((VAR12 & 3) << 2) | (VAR11 & 3);
        if (VAR5)
            VAR2->VAR75.VAR76[VAR10](VAR7->VAR77[0] + VAR15, VAR9, VAR7->VAR61 << VAR16, VAR2->VAR78);
        else
            VAR2->VAR75.VAR79[VAR10](VAR7->VAR77[0] + VAR15, VAR9, VAR7->VAR61 << VAR16, VAR2->VAR78);
    }
    else
    {
        VAR10 = (VAR12 & 2) | ((VAR11 & 2) >> 1);
        if (!VAR2->VAR78)
            VAR7->VAR80.VAR81[1][VAR10](VAR7->VAR77[0] + VAR15, VAR9, VAR7->VAR61, 8);
        else
            VAR7->VAR80.VAR82[1][VAR10](VAR7->VAR77[0] + VAR15, VAR9, VAR7->VAR61, 8);
    }
}