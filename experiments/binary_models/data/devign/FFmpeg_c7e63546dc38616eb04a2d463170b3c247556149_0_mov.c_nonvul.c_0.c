static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR2->VAR8;
    VAR9 *VAR10;
    int32_t VAR11, VAR12, VAR13, VAR14;
    int64_t VAR15;
    int32_t VAR16, VAR17;
    int32_t VAR18;
    int32_t VAR19;
    int32_t VAR20;
    int32_t VAR21;
    int64_t VAR22;
    int64_t VAR23;
    int32_t VAR24;
    int32_t VAR25;
    int VAR26;
    long VAR27 = 0;
    uint64_t VAR28 = 0;
    int VAR29;
    for (VAR29 = 0; VAR29 < VAR7->VAR30; VAR29++)
        if (VAR7->VAR31[VAR29]->VAR32 == VAR3)
            break;
    if (VAR29 == VAR7->VAR30)
    {
        FUN2(VAR2, VAR33, "", VAR3);
        return -1;
    }
    VAR10 = VAR7->VAR31[VAR29];
    VAR4 *= VAR2->VAR31[VAR3]->VAR34.VAR35;
    if (VAR10->VAR36 && 0)
    {
        FUN2(VAR2, VAR33, "", VAR10->VAR36);
        return -1;
    }
    FUN3("", (long)VAR4, VAR29, VAR10->VAR37);
    VAR15 = 0;
    VAR17 = 1;
    for (VAR11 = 0; VAR11 < VAR10->VAR38; VAR11++)
    {
        VAR19 = VAR10->VAR39[VAR11].VAR19;
        VAR18 = VAR10->VAR39[VAR11].VAR18;
        if ((VAR15 + VAR19 * VAR18) > VAR4)
        {
            VAR28 = VAR15;
            VAR26 = VAR11;
            VAR27 = VAR17;
            VAR17 += (VAR4 - VAR15) / VAR18;
            break;
        }
        VAR17 += VAR19;
        VAR15 += VAR19 * VAR18;
    }
    VAR28 = VAR15;
    VAR26 = VAR11;
    FUN3("", (long)VAR4, VAR17);
    if (VAR17 > VAR10->VAR40)
    {
        FUN2(VAR2, VAR33, "", VAR17, VAR10->VAR40);
        return -1;
    }
    if (VAR10->VAR41)
    {
        VAR12 = 0;
        VAR13 = VAR10->VAR41 - 1;
        while (VAR12 < VAR13)
        {
            VAR14 = (VAR12 + VAR13 + 1) >> 1;
            if (VAR10->VAR42[VAR14] > VAR17)
            {
                VAR13 = VAR14 - 1;
            }
            else
            {
                VAR12 = VAR14;
            }
        }
        VAR16 = VAR10->VAR42[VAR12];
    }
    else
        VAR16 = VAR17;
    FUN3("", VAR16);
    for (VAR24 = 1, VAR11 = 0; VAR11 < (VAR10->VAR43 - 1); VAR11++)
    {
        VAR13 = (VAR10->VAR44[VAR11 + 1].VAR45 - VAR10->VAR44[VAR11].VAR45) * VAR10->VAR44[VAR11].VAR19;
        if (VAR16 >= VAR24 && VAR16 < (VAR24 + VAR13))
            break;
        VAR24 += VAR13;
    }
    VAR20 = VAR10->VAR44[VAR11].VAR45 + (VAR16 - VAR24) / VAR10->VAR44[VAR11].VAR19;
    VAR21 = VAR10->VAR44[VAR11].VAR19 - (VAR16 - VAR24) % VAR10->VAR44[VAR11].VAR19;
    VAR24 += ((VAR16 - VAR24) / VAR10->VAR44[VAR11].VAR19) * VAR10->VAR44[VAR11].VAR19;
    VAR25 = VAR11;
    FUN3("", VAR20, VAR16 - VAR24, VAR25);
    if (!VAR10->VAR46)
    {
        FUN2(VAR2, VAR33, "");
        return -1;
    }
    if (VAR20 > VAR10->VAR47)
    {
        FUN2(VAR2, VAR33, "", VAR20, VAR10->VAR47);
        return -1;
    }
    VAR22 = VAR10->VAR46[VAR20 - 1];
    FUN3("" VAR48 "", VAR22);
    VAR23 = VAR22;
    if (VAR10->VAR49)
        VAR23 += (VAR16 - VAR24) * VAR10->VAR49;
    else
    {
        for (VAR11 = 0; VAR11 < (VAR16 - VAR24); VAR11++)
        {
            VAR23 += VAR10->VAR50[VAR24 + VAR11 - 1];
        }
    }
    FUN3("" VAR48 "", VAR23);
    VAR7->VAR51 = VAR10;
    VAR7->VAR52 = VAR23;
    VAR10->VAR53 = VAR16 - 1;
    VAR10->VAR21 = VAR21;
    VAR10->VAR54 = VAR20;
    VAR10->VAR55 = VAR25;
    for (VAR11 = 0; VAR11 < VAR7->VAR30; VAR11++)
    {
        VAR9 *VAR56;
        if (VAR11 == VAR29)
            continue;
        VAR56 = VAR7->VAR31[VAR11];
        VAR12 = 0;
        VAR13 = VAR56->VAR47 - 1;
        while (VAR12 < VAR13)
        {
            VAR14 = (VAR12 + VAR13 + 1) >> 1;
            if (VAR56->VAR46[VAR14] > VAR22)
            {
                VAR13 = VAR14 - 1;
            }
            else
            {
                VAR12 = VAR14;
            }
        }
        VAR56->VAR54 = VAR12;
        if (VAR56->VAR46[VAR12] < VAR22 && VAR12 < (VAR56->VAR47 - 1))
            VAR56->VAR54++;
        FUN3("" VAR57 "", VAR11, VAR56->VAR54 + 1, VAR56->VAR46[VAR56->VAR54]);
        VAR56->VAR55 = 0;
        VAR56->VAR53 = 0;
        for (; VAR56->VAR55 < (VAR56->VAR43 - 1) && VAR56->VAR44[VAR56->VAR55 + 1].VAR45 <= (1 + VAR56->VAR54); VAR56->VAR55++)
        {
            VAR56->VAR53 += (VAR56->VAR44[VAR56->VAR55 + 1].VAR45 - VAR56->VAR44[VAR56->VAR55].VAR45) * VAR56->VAR44[VAR56->VAR55].VAR19;
        }
        VAR56->VAR53 += (VAR56->VAR54 - (VAR56->VAR44[VAR56->VAR55].VAR45 - 1)) * VAR10->VAR44[VAR56->VAR55].VAR19;
        VAR56->VAR21 = VAR56->VAR44[VAR56->VAR55].VAR19 - 1;
        VAR17 = 0;
        VAR15 = 0;
        for (VAR56->VAR26 = 0; VAR56->VAR26 < VAR56->VAR38; VAR56->VAR26++)
        {
            VAR19 = VAR56->VAR39[VAR56->VAR26].VAR19;
            VAR18 = VAR56->VAR39[VAR56->VAR26].VAR18;
            if ((VAR17 + VAR19 - 1) > VAR56->VAR53)
            {
                VAR56->VAR28 = VAR15;
                VAR56->VAR27 = VAR17;
                break;
            }
            VAR17 += VAR19;
            VAR15 += VAR19 * VAR18;
        }
        VAR17 = 0;
        for (VAR56->VAR58 = 0; VAR56->VAR58 < VAR56->VAR59; VAR56->VAR58++)
        {
            VAR19 = VAR56->VAR60[VAR56->VAR58].VAR19;
            VAR18 = VAR56->VAR60[VAR56->VAR58].VAR18;
            if ((VAR17 + VAR19 - 1) > VAR56->VAR53)
            {
                VAR56->VAR61 = VAR17;
                break;
            }
            VAR17 += VAR19;
        }
        FUN3("", VAR11, VAR56->VAR53 + 1, VAR56->VAR55 + 1);
    }
    return 0;
}