static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12 = 0, VAR13 = 0, VAR14 = 0, VAR15 = 0, VAR16 = 0;
    int VAR17[256], VAR18[50], VAR19[50], VAR20[50], VAR21;
    int VAR22 = 0, VAR23 = 0, VAR24 = 0, VAR25 = 0, VAR26 = 0, VAR27 = 0, VAR28 = 0, VAR29 = 0;
    int VAR30 = 0, VAR31 = 0, VAR32 = 0, VAR33 = 0, VAR34 = 0, VAR35 = 0;
    int VAR36 = VAR2->VAR37.VAR36;
    VAR38 *VAR39, *VAR40 = 0, *VAR41 = 0, *VAR42 = 0;
    VAR38 *VAR43;
    int VAR44 = 0;
    VAR7 = VAR45[VAR5->VAR46];
    VAR8 = VAR47[VAR5->VAR48];
    VAR9 = VAR49[VAR5->VAR50];
    VAR10 = VAR51[VAR5->VAR52];
    VAR11 = VAR53[VAR5->VAR54];
    if (VAR3 == 5)
    {
        VAR22 = VAR5->VAR55;
        VAR23 = VAR5->VAR56;
        VAR13 = VAR57[VAR5->VAR58];
        VAR14 = (((VAR5->VAR59 - 15) << 4) + VAR5->VAR60) << 2;
        VAR15 = (VAR5->VAR61 << 8) + 768;
        VAR16 = (VAR5->VAR62 << 8) + 768;
        VAR39 = VAR5->VAR63;
        VAR43 = VAR5->VAR64;
        if (VAR5->VAR65 == VAR66 || VAR5->VAR65 == VAR67)
        {
            VAR44 = 1;
            VAR32 = VAR5->VAR68;
            VAR40 = VAR5->VAR69;
            VAR41 = VAR5->VAR70;
            VAR42 = VAR5->VAR71;
        }
    }
    else if (VAR3 == 6)
    {
        VAR22 = 0;
        VAR23 = 7;
        VAR12 = 0;
        VAR15 = 0;
        VAR16 = 0;
        VAR13 = VAR57[VAR5->VAR72];
        VAR14 = (((VAR5->VAR59 - 15) << 4) + VAR5->VAR73) << 2;
        VAR39 = VAR5->VAR74;
        VAR43 = VAR5->VAR75;
    }
    else
    {
        VAR22 = 0;
        VAR23 = VAR5->VAR76[VAR3];
        VAR12 = 0;
        VAR15 = 0;
        VAR16 = 0;
        VAR13 = VAR57[VAR5->VAR77[VAR3]];
        VAR14 = (((VAR5->VAR59 - 15) << 4) + VAR5->VAR78[VAR3]) << 2;
        VAR39 = VAR5->VAR79[VAR3];
        VAR43 = VAR5->VAR80[VAR3];
        if (VAR5->VAR81[VAR3] == VAR66 || VAR5->VAR81[VAR3] == VAR67)
        {
            VAR44 = 1;
            VAR32 = VAR5->VAR32[VAR3];
            VAR40 = VAR5->VAR40[VAR3];
            VAR41 = VAR5->VAR41[VAR3];
            VAR42 = VAR5->VAR42[VAR3];
        }
    }
    for (VAR24 = VAR22; VAR24 < VAR23; VAR24++)
        VAR17[VAR24] = (3072 - ((int)(VAR39[VAR24]) << 7));
    VAR26 = VAR22;
    VAR27 = VAR82[VAR22];
    do
    {
        VAR28 = FUN2(VAR83[VAR27] + VAR84[VAR27], VAR23);
        VAR18[VAR27] = VAR17[VAR26];
        VAR26++;
        for (VAR25 = VAR26; VAR25 < VAR28; VAR25++)
        {
            VAR18[VAR27] = FUN3(VAR18[VAR27], VAR17[VAR26]);
            VAR26++;
        }
        VAR27++;
    } while (VAR23 > VAR28);
    VAR29 = VAR82[VAR22];
    VAR30 = VAR82[VAR23 - 1] + 1;
    if (VAR29 == 0)
    {
        VAR12 = FUN4(VAR12, VAR18[0], VAR18[1], 0);
        VAR19[0] = VAR18[0] - VAR13 - VAR12;
        VAR12 = FUN4(VAR12, VAR18[1], VAR18[2], 1);
        VAR19[1] = VAR18[1] - VAR13 - VAR12;
        VAR31 = 7;
        for (VAR24 = 2; VAR24 < 7; VAR24++)
        {
            if (!(VAR3 == 6 && VAR24 == 6))
                VAR12 = FUN4(VAR12, VAR18[VAR24], VAR18[VAR24 + 1], VAR24);
            VAR15 = VAR18[VAR24] - VAR13;
            VAR16 = VAR18[VAR24] - VAR9;
            VAR19[VAR24] = VAR15 - VAR12;
            if (!(VAR3 == 6 && VAR24 == 6))
                if (VAR18[VAR24] <= VAR18[VAR24 + 1])
                {
                    VAR31 = VAR24 + 1;
                    break;
                }
        }
        for (VAR24 = VAR31; VAR24 < FUN2(VAR30, 22); VAR24++)
        {
            if (!(VAR3 == 6 && VAR24 == 6))
                VAR12 = FUN4(VAR12, VAR18[VAR24], VAR18[VAR24 + 1], VAR24);
            VAR15 -= VAR8;
            VAR15 = FUN5(VAR15, VAR18[VAR24] - VAR13);
            VAR16 -= VAR7;
            VAR16 = FUN5(VAR16, VAR18[VAR24] - VAR9);
            VAR19[VAR24] = FUN5(VAR15 - VAR12, VAR16);
        }
        VAR31 = 22;
    }
    else
    {
        VAR31 = VAR29;
    }
    for (VAR24 = VAR31; VAR24 < VAR30; VAR24++)
    {
        VAR15 -= VAR8;
        VAR15 = FUN5(VAR15, VAR18[VAR24] - VAR13);
        VAR16 -= VAR7;
        VAR16 = FUN5(VAR16, VAR18[VAR24] - VAR9);
        VAR19[VAR24] = FUN5(VAR15, VAR16);
    }
    for (VAR24 = VAR29; VAR24 < VAR30; VAR24++)
    {
        if (VAR18[VAR24] < VAR10)
            VAR19[VAR24] += ((VAR10 - VAR18[VAR24]) >> 2);
        VAR20[VAR24] = FUN5(VAR19[VAR24], VAR85[VAR24][VAR36]);
    }
    if (VAR44)
    {
        VAR33 = 0;
        for (VAR34 = 0; VAR34 < VAR32 + 1; VAR34++)
        {
            VAR33 += (int)(VAR40[VAR34]);
            if ((int)(VAR42[VAR34]) >= 4)
                VAR21 = ((int)(VAR42[VAR34]) - 3) << 7;
            else
                VAR21 = ((int)(VAR42[VAR34]) - 4) << 7;
            for (VAR27 = 0; VAR27 < (int)(VAR41[VAR34]); VAR27++)
            {
                VAR20[VAR33] += VAR21;
                VAR33++;
            }
        }
    }
    VAR25 = VAR22;
    VAR26 = VAR82[VAR22];
    do
    {
        VAR28 = FUN2(VAR83[VAR26] + VAR84[VAR26], VAR23);
        VAR20[VAR26] -= VAR14;
        VAR20[VAR26] -= VAR11;
        if (VAR20[VAR26] < 0)
            VAR20[VAR26] = 0;
        VAR20[VAR26] &= 0x1fe0;
        VAR20[VAR26] += VAR11;
        for (VAR27 = VAR25; VAR27 < VAR28; VAR27++)
        {
            VAR35 = (VAR17[VAR25] - VAR20[VAR26]) >> 5;
            VAR35 = FUN2(63, FUN5(0, VAR35));
            VAR43[VAR25] = VAR86[VAR35];
            VAR25++;
        }
        VAR26++;
    } while (VAR23 > VAR28);
}