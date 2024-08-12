static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    int VAR20;
    VAR4->VAR21 = 0;
    VAR4->VAR22 = (VAR23 && VAR2->VAR24 == &VAR25);
    VAR4->VAR26 = (VAR27 && VAR2->VAR24 == &VAR28);
    VAR4->VAR29 = ((VAR30 && VAR2->VAR24 == &VAR31) || (VAR32 && VAR2->VAR24 == &VAR33) || (VAR27 && VAR2->VAR24 == &VAR28));
    VAR4->VAR34 = (VAR32 && VAR2->VAR24 == &VAR33);
    if (VAR2->VAR35)
        VAR4->VAR35 = VAR2->VAR35;
    else
        VAR4->VAR35 = 2048;
    VAR4->VAR36 = 0;
    VAR4->VAR37 = 0;
    VAR4->VAR38 = 0;
    VAR4->VAR39 = 0;
    VAR8 = VAR40;
    VAR11 = VAR41;
    VAR12 = VAR42;
    VAR9 = VAR43;
    VAR10 = VAR44;
    VAR13 = VAR45;
    for (VAR7 = 0; VAR7 < VAR2->VAR46; VAR7++)
    {
        VAR16 = VAR2->VAR47[VAR7];
        VAR18 = FUN2(sizeof(VAR17));
        if (!VAR18)
            goto VAR48;
        VAR16->VAR5 = VAR18;
        FUN3(VAR16, 64, 1, 90000);
        switch (VAR16->VAR49->VAR50)
        {
        case VAR51:
            if (VAR16->VAR49->VAR52 == VAR53)
            {
                VAR18->VAR54 = VAR11++;
            }
            else if (VAR16->VAR49->VAR52 == VAR55)
            {
                VAR18->VAR54 = VAR12++;
            }
            else if (VAR16->VAR49->VAR52 == VAR56)
            {
                VAR18->VAR54 = VAR13++;
                for (VAR14 = 0; VAR14 < 4; VAR14++)
                {
                    if (VAR57[VAR14] == VAR16->VAR49->VAR58)
                        break;
                }
                if (VAR14 == 4)
                    goto VAR48;
                if (VAR16->VAR49->VAR59 > 8)
                    return -1;
                VAR18->VAR60[0] = 0x0c;
                VAR18->VAR60[1] = (VAR16->VAR49->VAR59 - 1) | (VAR14 << 4);
                VAR18->VAR60[2] = 0x80;
                VAR18->VAR61 = VAR16->VAR49->VAR59 * 2;
            }
            else
            {
                VAR18->VAR54 = VAR8++;
            }
            VAR18->VAR62 = 4 * 1024;
            VAR4->VAR38++;
            break;
        case VAR63:
            VAR18->VAR54 = VAR9++;
            if (VAR16->VAR49->VAR64)
                VAR18->VAR62 = 6 * 1024 + VAR16->VAR49->VAR64 / 8;
            else
                VAR18->VAR62 = 230 * 1024;
            VAR18->VAR62 = 46 * 1024;
            else VAR18->VAR62 = 230 * 1024;
            VAR4->VAR39++;
            break;
        case VAR65:
            VAR18->VAR54 = VAR10++;
            VAR18->VAR62 = 16 * 1024;
            break;
        default:
            return -1;
        }
        VAR18->VAR66 = FUN4(16);
    }
    VAR6 = 0;
    VAR19 = 0;
    VAR20 = 0;
    for (VAR7 = 0; VAR7 < VAR2->VAR46; VAR7++)
    {
        int VAR67;
        VAR16 = VAR2->VAR47[VAR7];
        VAR18 = (VAR17 *)VAR16->VAR5;
        if (VAR16->VAR49->VAR68 || VAR18->VAR54 == VAR43)
            VAR67 = VAR16->VAR49->VAR68;
        else
            VAR67 = VAR16->VAR49->VAR69;
        if (!VAR67)
            VAR67 = (1 << 21) * 8 * 50 / VAR2->VAR46;
        VAR6 += VAR67;
        if ((VAR18->VAR54 & 0xe0) == VAR40)
            VAR19 += VAR67;
        else if (VAR18->VAR54 == VAR43)
            VAR20 += VAR67;
    }
    if (VAR2->VAR70)
    {
        VAR4->VAR70 = (VAR2->VAR70 + (8 * 50) - 1) / (8 * 50);
    }
    else
    {
        VAR6 += VAR6 * 5 / 100;
        VAR6 += 10000;
        VAR4->VAR70 = (VAR6 + (8 * 50) - 1) / (8 * 50);
    }
    if (VAR4->VAR22)
    {
        double VAR71;
        VAR71 = ((VAR19 / 8.0) / 2279) * (2324 - 2279);
        VAR71 += ((VAR20 / 8.0) / 2294) * (2324 - 2294);
        VAR71 *= 8;
        VAR4->VAR37 = 2324 * 75 * 8 - (VAR6 + VAR71);
    }
    if (VAR4->VAR22 || VAR4->VAR29)
        VAR4->VAR72 = 1;
    else
        VAR4->VAR72 = 2 * VAR6 / VAR4->VAR35 / 8;
    if (VAR4->VAR72 == 0)
        VAR4->VAR72 = 1;
    if (VAR4->VAR29)
        VAR4->VAR73 = VAR4->VAR72 * 40;
    else if (VAR4->VAR22)
        VAR4->VAR73 = 0x7fffffff;
    else
        VAR4->VAR73 = VAR4->VAR72 * 5;
    for (VAR7 = 0; VAR7 < VAR2->VAR46; VAR7++)
    {
        VAR18 = VAR2->VAR47[VAR7]->VAR5;
        VAR18->VAR21 = 0;
    }
    VAR4->VAR74 = FUN5(VAR2);
    VAR4->VAR75 = 0;
    return 0;
VAR48:
    for (VAR7 = 0; VAR7 < VAR2->VAR46; VAR7++)
    {
        FUN6(VAR2->VAR47[VAR7]->VAR5);
    }
    return FUN7(VAR76);
}