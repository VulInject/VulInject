static int FUN1(VAR1 **VAR2, VAR1 **VAR3, int *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, VAR12 *VAR13, VAR12 *VAR14, double VAR15[2])
{
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    VAR20 *VAR21 = NULL;
    VAR20 *VAR22 = NULL;
    const int64_t VAR23 = 1LL << 54;
    int VAR24 = -1;
    FUN2();
    FUN3(NULL, *VAR3, (VAR7 + 3) * sizeof(VAR1), VAR25);
    if (FUN4(VAR5 - 0x10000) < 10)
    {
        int VAR16;
        VAR17 = 1;
        FUN5(NULL, VAR21, VAR7 * sizeof(*VAR21) * VAR17, VAR25);
        for (VAR16 = 0; VAR16 < VAR7; VAR16++)
        {
            VAR21[VAR16 * VAR17] = VAR23;
            (*VAR3)[VAR16] = VAR16;
        }
    }
    else if (VAR10 & VAR26)
    {
        int VAR16;
        int VAR27;
        VAR17 = 1;
        FUN3(NULL, VAR21, VAR7 * sizeof(*VAR21) * VAR17, VAR25);
        VAR27 = VAR5 / 2 - 0x8000;
        for (VAR16 = 0; VAR16 < VAR7; VAR16++)
        {
            int VAR28 = (VAR27 - ((VAR17 - 1) << 15) + (1 << 15)) >> 16;
            (*VAR3)[VAR16] = VAR28;
            VAR21[VAR16] = VAR23;
            VAR27 += VAR5;
        }
    }
    else if ((VAR5 <= (1 << 16) && (VAR10 & VAR29)) || (VAR10 & VAR30))
    {
        int VAR16;
        int VAR27;
        VAR17 = 2;
        FUN3(NULL, VAR21, VAR7 * sizeof(*VAR21) * VAR17, VAR25);
        VAR27 = VAR5 / 2 - 0x8000;
        for (VAR16 = 0; VAR16 < VAR7; VAR16++)
        {
            int VAR28 = (VAR27 - ((VAR17 - 1) << 15) + (1 << 15)) >> 16;
            int VAR31;
            (*VAR3)[VAR16] = VAR28;
            for (VAR31 = 0; VAR31 < VAR17; VAR31++)
            {
                int64_t VAR32 = VAR23 - FUN4((VAR28 << 16) - VAR27) * (VAR23 >> 16);
                if (VAR32 < 0)
                    VAR32 = 0;
                VAR21[VAR16 * VAR17 + VAR31] = VAR32;
                VAR28++;
            }
            VAR27 += VAR5;
        }
    }
    else
    {
        int VAR27;
        int VAR33;
        if (VAR10 & VAR34)
            VAR33 = 4;
        else if (VAR10 & VAR35)
            VAR33 = 8;
        else if (VAR10 & VAR29)
            VAR33 = 1;
        else if (VAR10 & VAR36)
            VAR33 = 8;
        else if (VAR10 & VAR37)
            VAR33 = VAR15[0] != VAR38 ? FUN6(2 * VAR15[0]) : 6;
        else if (VAR10 & VAR39)
            VAR33 = 20;
        else if (VAR10 & VAR40)
            VAR33 = 20;
        else if (VAR10 & VAR41)
            VAR33 = 2;
        else
        {
            VAR33 = 0;
            assert(0);
        }
        if (VAR5 <= 1 << 16)
            VAR17 = 1 + VAR33;
        else
            VAR17 = 1 + (VAR33 * VAR6 + VAR7 - 1) / VAR7;
        if (VAR17 > VAR6 - 2)
            VAR17 = VAR6 - 2;
        FUN3(NULL, VAR21, VAR7 * sizeof(*VAR21) * VAR17, VAR25);
        VAR27 = VAR5 - 0x10000;
        for (VAR16 = 0; VAR16 < VAR7; VAR16++)
        {
            int VAR28 = (VAR27 - ((VAR17 - 2) << 16)) / (1 << 17);
            int VAR31;
            (*VAR3)[VAR16] = VAR28;
            for (VAR31 = 0; VAR31 < VAR17; VAR31++)
            {
                int64_t VAR42 = ((VAR20)FUN4((VAR28 << 17) - VAR27)) << 13;
                double VAR43;
                int64_t VAR32;
                if (VAR5 > 1 << 16)
                    VAR42 = VAR42 * VAR7 / VAR6;
                VAR43 = VAR42 * (1.0 / (1 << 30));
                if (VAR10 & VAR34)
                {
                    int64_t VAR44 = (VAR15[0] != VAR38 ? VAR15[0] : 0) * (1 << 24);
                    int64_t VAR45 = (VAR15[1] != VAR38 ? VAR15[1] : 0.6) * (1 << 24);
                    if (VAR42 >= 1LL << 31)
                    {
                        VAR32 = 0.0;
                    }
                    else
                    {
                        int64_t VAR46 = (VAR42 * VAR42) >> 30;
                        int64_t VAR47 = (VAR46 * VAR42) >> 30;
                        if (VAR42 < 1LL << 30)
                            VAR32 = (12 * (1 << 24) - 9 * VAR44 - 6 * VAR45) * VAR47 + (-18 * (1 << 24) + 12 * VAR44 + 6 * VAR45) * VAR46 + (6 * (1 << 24) - 2 * VAR44) * (1 << 30);
                        else
                            VAR32 = (-VAR44 - 6 * VAR45) * VAR47 + (6 * VAR44 + 30 * VAR45) * VAR46 + (-12 * VAR44 - 48 * VAR45) * VAR42 + (8 * VAR44 + 24 * VAR45) * (1 << 30);
                    }
                    VAR32 *= VAR23 >> (30 + 24);
                }
                else if (VAR10 & VAR35)
                {
                    double VAR48 = VAR15[0] != VAR38 ? VAR15[0] : 1.0;
                    double VAR49;
                    if (VAR43 < 1.0)
                        VAR49 = FUN7(VAR43 * VAR50);
                    else
                        VAR49 = -1.0;
                    if (VAR49 < 0.0)
                        VAR49 = -FUN8(-VAR49, VAR48);
                    else
                        VAR49 = FUN8(VAR49, VAR48);
                    VAR32 = (VAR49 * 0.5 + 0.5) * VAR23;
                }
                else if (VAR10 & VAR29)
                {
                    int64_t VAR51 = VAR42 - (1 << 29);
                    if (VAR51 * VAR5 < -(1LL << (29 + 16)))
                        VAR32 = 1.0 * (1LL << (30 + 16));
                    else if (VAR51 * VAR5 < (1LL << (29 + 16)))
                        VAR32 = -VAR51 * VAR5 + (1LL << (29 + 16));
                    else
                        VAR32 = 0.0;
                    VAR32 *= VAR23 >> (30 + 16);
                }
                else if (VAR10 & VAR36)
                {
                    double VAR52 = VAR15[0] != VAR38 ? VAR15[0] : 3.0;
                    VAR32 = (FUN8(2.0, -VAR52 * VAR43 * VAR43)) * VAR23;
                }
                else if (VAR10 & VAR39)
                {
                    VAR32 = (VAR42 ? FUN9(VAR43 * VAR50) / (VAR43 * VAR50) : 1.0) * VAR23;
                }
                else if (VAR10 & VAR37)
                {
                    double VAR52 = VAR15[0] != VAR38 ? VAR15[0] : 3.0;
                    VAR32 = (VAR42 ? FUN9(VAR43 * VAR50) * FUN9(VAR43 * VAR50 / VAR52) / (VAR43 * VAR43 * VAR50 * VAR50 / VAR52) : 1.0) * VAR23;
                    if (VAR43 > VAR52)
                        VAR32 = 0;
                }
                else if (VAR10 & VAR41)
                {
                    VAR32 = (1 << 30) - VAR42;
                    if (VAR32 < 0)
                        VAR32 = 0;
                    VAR32 *= VAR23 >> 30;
                }
                else if (VAR10 & VAR40)
                {
                    double VAR52 = -2.196152422706632;
                    VAR32 = FUN10(1.0, 0.0, VAR52, -VAR52 - 1.0, VAR43) * VAR23;
                }
                else
                {
                    VAR32 = 0.0;
                    assert(0);
                }
                VAR21[VAR16 * VAR17 + VAR31] = VAR32;
                VAR28++;
            }
            VAR27 += 2 * VAR5;
        }
    }
    assert(VAR17 > 0);
    VAR18 = VAR17;
    if (VAR13)
        VAR18 += VAR13->VAR53 - 1;
    if (VAR14)
        VAR18 += VAR14->VAR53 - 1;
    assert(VAR18 > 0);
    FUN5(NULL, VAR22, VAR18 * VAR7 * sizeof(*VAR22), VAR25);
    for (VAR16 = 0; VAR16 < VAR7; VAR16++)
    {
        int VAR31, VAR54;
        if (VAR13)
        {
            for (VAR54 = 0; VAR54 < VAR13->VAR53; VAR54++)
            {
                for (VAR31 = 0; VAR31 < VAR17; VAR31++)
                    VAR22[VAR16 * VAR18 + VAR54 + VAR31] += VAR13->VAR32[VAR54] * VAR21[VAR16 * VAR17 + VAR31];
            }
        }
        else
        {
            for (VAR31 = 0; VAR31 < VAR17; VAR31++)
                VAR22[VAR16 * VAR18 + VAR31] = VAR21[VAR16 * VAR17 + VAR31];
        }
        (*VAR3)[VAR16] += (VAR17 - 1) / 2 - (VAR18 - 1) / 2;
    }
    FUN11(&VAR21);
    VAR19 = 0;
    for (VAR16 = VAR7 - 1; VAR16 >= 0; VAR16--)
    {
        int VAR55 = VAR18;
        int VAR31;
        int64_t VAR56 = 0.0;
        for (VAR31 = 0; VAR31 < VAR18; VAR31++)
        {
            int VAR54;
            VAR56 += FUN4(VAR22[VAR16 * VAR18]);
            if (VAR56 > VAR57 * VAR23)
                break;
            if (VAR16 < VAR7 - 1 && (*VAR3)[VAR16] >= (*VAR3)[VAR16 + 1])
                break;
            for (VAR54 = 1; VAR54 < VAR18; VAR54++)
                VAR22[VAR16 * VAR18 + VAR54 - 1] = VAR22[VAR16 * VAR18 + VAR54];
            VAR22[VAR16 * VAR18 + VAR54 - 1] = 0;
            (*VAR3)[VAR16]++;
        }
        VAR56 = 0;
        for (VAR31 = VAR18 - 1; VAR31 > 0; VAR31--)
        {
            VAR56 += FUN4(VAR22[VAR16 * VAR18 + VAR31]);
            if (VAR56 > VAR57 * VAR23)
                break;
            VAR55--;
        }
        if (VAR55 > VAR19)
            VAR19 = VAR55;
    }
    if (VAR58 && VAR11 & VAR59)
    {
        if (VAR19 < 5)
            VAR8 = 4;
        if (VAR19 < 3)
            VAR8 = 1;
    }
    if (VAR60 && VAR11 & VAR61)
    {
        if (VAR19 == 1 && VAR8 == 2)
            VAR8 = 1;
    }
    assert(VAR19 > 0);
    VAR17 = (VAR19 + (VAR8 - 1)) & (~(VAR8 - 1));
    assert(VAR17 > 0);
    VAR21 = FUN12(VAR17 * VAR7 * sizeof(*VAR21));
    if (VAR17 >= VAR62 * 16 / ((VAR10 & VAR63) ? VAR64 : 16) || !VAR21)
        goto VAR25;
    *VAR4 = VAR17;
    if (VAR10 & VAR65)
        FUN13(NULL, VAR66, "", VAR18, VAR17);
    for (VAR16 = 0; VAR16 < VAR7; VAR16++)
    {
        int VAR31;
        for (VAR31 = 0; VAR31 < VAR17; VAR31++)
        {
            if (VAR31 >= VAR18)
                VAR21[VAR16 * VAR17 + VAR31] = 0;
            else
                VAR21[VAR16 * VAR17 + VAR31] = VAR22[VAR16 * VAR18 + VAR31];
            if ((VAR10 & VAR67) && VAR31 >= VAR19)
                VAR21[VAR16 * VAR17 + VAR31] = 0;
        }
    }
    for (VAR16 = 0; VAR16 < VAR7; VAR16++)
    {
        int VAR31;
        if ((*VAR3)[VAR16] < 0)
        {
            for (VAR31 = 1; VAR31 < VAR17; VAR31++)
            {
                int VAR68 = FUN14(VAR31 + (*VAR3)[VAR16], 0);
                VAR21[VAR16 * VAR17 + VAR68] += VAR21[VAR16 * VAR17 + VAR31];
                VAR21[VAR16 * VAR17 + VAR31] = 0;
            }
            (*VAR3)[VAR16] = 0;
        }
        if ((*VAR3)[VAR16] + VAR17 > VAR6)
        {
            int VAR69 = (*VAR3)[VAR16] + VAR17 - VAR6;
            for (VAR31 = VAR17 - 2; VAR31 >= 0; VAR31--)
            {
                int VAR70 = FUN15(VAR31 + VAR69, VAR17 - 1);
                VAR21[VAR16 * VAR17 + VAR70] += VAR21[VAR16 * VAR17 + VAR31];
                VAR21[VAR16 * VAR17 + VAR31] = 0;
            }
            (*VAR3)[VAR16] = VAR6 - VAR17;
        }
    }
    FUN5(NULL, *VAR2, *VAR4 * (VAR7 + 3) * sizeof(VAR1), VAR25);
    for (VAR16 = 0; VAR16 < VAR7; VAR16++)
    {
        int VAR31;
        int64_t VAR71 = 0;
        int64_t VAR72 = 0;
        for (VAR31 = 0; VAR31 < VAR17; VAR31++)
        {
            VAR72 += VAR21[VAR16 * VAR17 + VAR31];
        }
        VAR72 = (VAR72 + VAR9 / 2) / VAR9;
        for (VAR31 = 0; VAR31 < *VAR4; VAR31++)
        {
            int64_t VAR73 = VAR21[VAR16 * VAR17 + VAR31] + VAR71;
            int VAR74 = FUN16(VAR73, VAR72);
            (*VAR2)[VAR16 * (*VAR4) + VAR31] = VAR74;
            VAR71 = VAR73 - VAR74 * VAR72;
        }
    }
    (*VAR3)[VAR7 + 0] = (*VAR3)[VAR7 + 1] = (*VAR3)[VAR7 + 2] = (*VAR3)[VAR7 - 1];
    for (VAR16 = 0; VAR16 < *VAR4; VAR16++)
    {
        int VAR54 = (VAR7 - 1) * (*VAR4) + VAR16;
        (*VAR2)[VAR54 + 1 * (*VAR4)] = (*VAR2)[VAR54 + 2 * (*VAR4)] = (*VAR2)[VAR54 + 3 * (*VAR4)] = (*VAR2)[VAR54];
    }
    VAR24 = 0;
VAR25:
    FUN17(VAR21);
    FUN17(VAR22);
    return VAR24;
}