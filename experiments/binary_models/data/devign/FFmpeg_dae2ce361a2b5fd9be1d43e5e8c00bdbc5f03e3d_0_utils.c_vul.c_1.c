static int FUN1(VAR1 **VAR2, VAR1 **VAR3, int *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, VAR12 *VAR13, VAR12 *VAR14, double VAR15[2], int VAR16)
{
    int VAR17;
    int VAR18;
    int VAR19;
    int VAR20;
    VAR21 *VAR22 = NULL;
    VAR21 *VAR23 = NULL;
    const int64_t VAR24 = 1LL << 54;
    int VAR25 = -1;
    FUN2();
    FUN3(NULL, *VAR3, (VAR7 + 3) * sizeof(VAR1), VAR26);
    if (FUN4(VAR5 - 0x10000) < 10)
    {
        int VAR17;
        VAR18 = 1;
        FUN5(NULL, VAR22, VAR7 * sizeof(*VAR22) * VAR18, VAR26);
        for (VAR17 = 0; VAR17 < VAR7; VAR17++)
        {
            VAR22[VAR17 * VAR18] = VAR24;
            (*VAR3)[VAR17] = VAR17;
        }
    }
    else if (VAR10 & VAR27)
    {
        int VAR17;
        int VAR28;
        VAR18 = 1;
        FUN3(NULL, VAR22, VAR7 * sizeof(*VAR22) * VAR18, VAR26);
        VAR28 = VAR5 / 2 - 0x8000;
        for (VAR17 = 0; VAR17 < VAR7; VAR17++)
        {
            int VAR29 = (VAR28 - ((VAR18 - 1) << 15) + (1 << 15)) >> 16;
            (*VAR3)[VAR17] = VAR29;
            VAR22[VAR17] = VAR24;
            VAR28 += VAR5;
        }
    }
    else if ((VAR5 <= (1 << 16) && (VAR10 & VAR30)) || (VAR10 & VAR31))
    {
        int VAR17;
        int VAR28;
        VAR18 = 2;
        FUN3(NULL, VAR22, VAR7 * sizeof(*VAR22) * VAR18, VAR26);
        VAR28 = VAR5 / 2 - 0x8000;
        for (VAR17 = 0; VAR17 < VAR7; VAR17++)
        {
            int VAR29 = (VAR28 - ((VAR18 - 1) << 15) + (1 << 15)) >> 16;
            int VAR32;
            (*VAR3)[VAR17] = VAR29;
            for (VAR32 = 0; VAR32 < VAR18; VAR32++)
            {
                int64_t VAR33 = VAR24 - FUN4((VAR29 << 16) - VAR28) * (VAR24 >> 16);
                if (VAR33 < 0)
                    VAR33 = 0;
                VAR22[VAR17 * VAR18 + VAR32] = VAR33;
                VAR29++;
            }
            VAR28 += VAR5;
        }
    }
    else
    {
        int VAR28;
        int VAR34;
        if (VAR10 & VAR35)
            VAR34 = 4;
        else if (VAR10 & VAR36)
            VAR34 = 8;
        else if (VAR10 & VAR30)
            VAR34 = 1;
        else if (VAR10 & VAR37)
            VAR34 = 8;
        else if (VAR10 & VAR38)
            VAR34 = VAR15[0] != VAR39 ? FUN6(2 * VAR15[0]) : 6;
        else if (VAR10 & VAR40)
            VAR34 = 20;
        else if (VAR10 & VAR41)
            VAR34 = 20;
        else if (VAR10 & VAR42)
            VAR34 = 2;
        else
        {
            VAR34 = 0;
            assert(0);
        }
        if (VAR5 <= 1 << 16)
            VAR18 = 1 + VAR34;
        else
            VAR18 = 1 + (VAR34 * VAR6 + VAR7 - 1) / VAR7;
        if (VAR18 > VAR6 - 2)
            VAR18 = VAR6 - 2;
        FUN3(NULL, VAR22, VAR7 * sizeof(*VAR22) * VAR18, VAR26);
        VAR28 = VAR5 - 0x10000;
        for (VAR17 = 0; VAR17 < VAR7; VAR17++)
        {
            int VAR29 = (VAR28 - ((VAR18 - 2) << 16)) / (1 << 17);
            int VAR32;
            (*VAR3)[VAR17] = VAR29;
            for (VAR32 = 0; VAR32 < VAR18; VAR32++)
            {
                int64_t VAR43 = ((VAR21)FUN4((VAR29 << 17) - VAR28)) << 13;
                double VAR44;
                int64_t VAR33;
                if (VAR5 > 1 << 16)
                    VAR43 = VAR43 * VAR7 / VAR6;
                VAR44 = VAR43 * (1.0 / (1 << 30));
                if (VAR10 & VAR35)
                {
                    int64_t VAR45 = (VAR15[0] != VAR39 ? VAR15[0] : 0) * (1 << 24);
                    int64_t VAR46 = (VAR15[1] != VAR39 ? VAR15[1] : 0.6) * (1 << 24);
                    if (VAR43 >= 1LL << 31)
                    {
                        VAR33 = 0.0;
                    }
                    else
                    {
                        int64_t VAR47 = (VAR43 * VAR43) >> 30;
                        int64_t VAR48 = (VAR47 * VAR43) >> 30;
                        if (VAR43 < 1LL << 30)
                            VAR33 = (12 * (1 << 24) - 9 * VAR45 - 6 * VAR46) * VAR48 + (-18 * (1 << 24) + 12 * VAR45 + 6 * VAR46) * VAR47 + (6 * (1 << 24) - 2 * VAR45) * (1 << 30);
                        else
                            VAR33 = (-VAR45 - 6 * VAR46) * VAR48 + (6 * VAR45 + 30 * VAR46) * VAR47 + (-12 * VAR45 - 48 * VAR46) * VAR43 + (8 * VAR45 + 24 * VAR46) * (1 << 30);
                    }
                    VAR33 *= VAR24 >> (30 + 24);
                }
                else if (VAR10 & VAR36)
                {
                    double VAR49 = VAR15[0] != VAR39 ? VAR15[0] : 1.0;
                    double VAR50;
                    if (VAR44 < 1.0)
                        VAR50 = FUN7(VAR44 * VAR51);
                    else
                        VAR50 = -1.0;
                    if (VAR50 < 0.0)
                        VAR50 = -FUN8(-VAR50, VAR49);
                    else
                        VAR50 = FUN8(VAR50, VAR49);
                    VAR33 = (VAR50 * 0.5 + 0.5) * VAR24;
                }
                else if (VAR10 & VAR30)
                {
                    int64_t VAR52 = VAR43 - (1 << 29);
                    if (VAR52 * VAR5 < -(1LL << (29 + 16)))
                        VAR33 = 1.0 * (1LL << (30 + 16));
                    else if (VAR52 * VAR5 < (1LL << (29 + 16)))
                        VAR33 = -VAR52 * VAR5 + (1LL << (29 + 16));
                    else
                        VAR33 = 0.0;
                    VAR33 *= VAR24 >> (30 + 16);
                }
                else if (VAR10 & VAR37)
                {
                    double VAR53 = VAR15[0] != VAR39 ? VAR15[0] : 3.0;
                    VAR33 = (FUN8(2.0, -VAR53 * VAR44 * VAR44)) * VAR24;
                }
                else if (VAR10 & VAR40)
                {
                    VAR33 = (VAR43 ? FUN9(VAR44 * VAR51) / (VAR44 * VAR51) : 1.0) * VAR24;
                }
                else if (VAR10 & VAR38)
                {
                    double VAR53 = VAR15[0] != VAR39 ? VAR15[0] : 3.0;
                    VAR33 = (VAR43 ? FUN9(VAR44 * VAR51) * FUN9(VAR44 * VAR51 / VAR53) / (VAR44 * VAR44 * VAR51 * VAR51 / VAR53) : 1.0) * VAR24;
                    if (VAR44 > VAR53)
                        VAR33 = 0;
                }
                else if (VAR10 & VAR42)
                {
                    VAR33 = (1 << 30) - VAR43;
                    if (VAR33 < 0)
                        VAR33 = 0;
                    VAR33 *= VAR24 >> 30;
                }
                else if (VAR10 & VAR41)
                {
                    double VAR53 = -2.196152422706632;
                    VAR33 = FUN10(1.0, 0.0, VAR53, -VAR53 - 1.0, VAR44) * VAR24;
                }
                else
                {
                    VAR33 = 0.0;
                    assert(0);
                }
                VAR22[VAR17 * VAR18 + VAR32] = VAR33;
                VAR29++;
            }
            VAR28 += 2 * VAR5;
        }
    }
    assert(VAR18 > 0);
    VAR19 = VAR18;
    if (VAR13)
        VAR19 += VAR13->VAR54 - 1;
    if (VAR14)
        VAR19 += VAR14->VAR54 - 1;
    assert(VAR19 > 0);
    FUN5(NULL, VAR23, VAR19 * VAR7 * sizeof(*VAR23), VAR26);
    for (VAR17 = 0; VAR17 < VAR7; VAR17++)
    {
        int VAR32, VAR55;
        if (VAR13)
        {
            for (VAR55 = 0; VAR55 < VAR13->VAR54; VAR55++)
            {
                for (VAR32 = 0; VAR32 < VAR18; VAR32++)
                    VAR23[VAR17 * VAR19 + VAR55 + VAR32] += VAR13->VAR33[VAR55] * VAR22[VAR17 * VAR18 + VAR32];
            }
        }
        else
        {
            for (VAR32 = 0; VAR32 < VAR18; VAR32++)
                VAR23[VAR17 * VAR19 + VAR32] = VAR22[VAR17 * VAR18 + VAR32];
        }
        (*VAR3)[VAR17] += (VAR18 - 1) / 2 - (VAR19 - 1) / 2;
    }
    FUN11(&VAR22);
    VAR20 = 0;
    for (VAR17 = VAR7 - 1; VAR17 >= 0; VAR17--)
    {
        int VAR56 = VAR19;
        int VAR32;
        int64_t VAR57 = 0.0;
        for (VAR32 = 0; VAR32 < VAR19; VAR32++)
        {
            int VAR55;
            VAR57 += FUN4(VAR23[VAR17 * VAR19]);
            if (VAR57 > VAR58 * VAR24)
                break;
            if (VAR17 < VAR7 - 1 && (*VAR3)[VAR17] >= (*VAR3)[VAR17 + 1])
                break;
            for (VAR55 = 1; VAR55 < VAR19; VAR55++)
                VAR23[VAR17 * VAR19 + VAR55 - 1] = VAR23[VAR17 * VAR19 + VAR55];
            VAR23[VAR17 * VAR19 + VAR55 - 1] = 0;
            (*VAR3)[VAR17]++;
        }
        VAR57 = 0;
        for (VAR32 = VAR19 - 1; VAR32 > 0; VAR32--)
        {
            VAR57 += FUN4(VAR23[VAR17 * VAR19 + VAR32]);
            if (VAR57 > VAR58 * VAR24)
                break;
            VAR56--;
        }
        if (VAR56 > VAR20)
            VAR20 = VAR56;
    }
    if (VAR59 && VAR11 & VAR60)
    {
        if (VAR20 < 5)
            VAR8 = 4;
        if (VAR20 < 3)
            VAR8 = 1;
    }
    if (VAR61 && VAR11 & VAR62)
    {
        if (VAR20 == 1 && VAR8 == 2)
            VAR8 = 1;
    }
    assert(VAR20 > 0);
    VAR18 = (VAR20 + (VAR8 - 1)) & (~(VAR8 - 1));
    assert(VAR18 > 0);
    VAR22 = FUN12(VAR18 * VAR7 * sizeof(*VAR22));
    if (VAR18 >= VAR63 * 16 / ((VAR10 & VAR64) ? VAR65 : 16) || !VAR22)
        goto VAR26;
    *VAR4 = VAR18;
    if (VAR10 & VAR66)
        FUN13(NULL, VAR67, "", VAR19, VAR18);
    for (VAR17 = 0; VAR17 < VAR7; VAR17++)
    {
        int VAR32;
        for (VAR32 = 0; VAR32 < VAR18; VAR32++)
        {
            if (VAR32 >= VAR19)
                VAR22[VAR17 * VAR18 + VAR32] = 0;
            else
                VAR22[VAR17 * VAR18 + VAR32] = VAR23[VAR17 * VAR19 + VAR32];
            if ((VAR10 & VAR68) && VAR32 >= VAR20)
                VAR22[VAR17 * VAR18 + VAR32] = 0;
        }
    }
    if (VAR16)
    {
        for (VAR17 = 0; VAR17 < VAR7; VAR17++)
        {
            int VAR32;
            if ((*VAR3)[VAR17] < 0)
            {
                for (VAR32 = 1; VAR32 < VAR18; VAR32++)
                {
                    int VAR69 = FUN14(VAR32 + (*VAR3)[VAR17], 0);
                    VAR22[VAR17 * VAR18 + VAR69] += VAR22[VAR17 * VAR18 + VAR32];
                    VAR22[VAR17 * VAR18 + VAR32] = 0;
                }
                (*VAR3)[VAR17] = 0;
            }
            if ((*VAR3)[VAR17] + VAR18 > VAR6)
            {
                int VAR70 = (*VAR3)[VAR17] + VAR18 - VAR6;
                for (VAR32 = VAR18 - 2; VAR32 >= 0; VAR32--)
                {
                    int VAR71 = FUN15(VAR32 + VAR70, VAR18 - 1);
                    VAR22[VAR17 * VAR18 + VAR71] += VAR22[VAR17 * VAR18 + VAR32];
                    VAR22[VAR17 * VAR18 + VAR32] = 0;
                }
                (*VAR3)[VAR17] = VAR6 - VAR18;
            }
        }
    }
    FUN5(NULL, *VAR2, *VAR4 * (VAR7 + 3) * sizeof(VAR1), VAR26);
    for (VAR17 = 0; VAR17 < VAR7; VAR17++)
    {
        int VAR32;
        int64_t VAR72 = 0;
        int64_t VAR73 = 0;
        for (VAR32 = 0; VAR32 < VAR18; VAR32++)
        {
            VAR73 += VAR22[VAR17 * VAR18 + VAR32];
        }
        VAR73 = (VAR73 + VAR9 / 2) / VAR9;
        for (VAR32 = 0; VAR32 < *VAR4; VAR32++)
        {
            int64_t VAR74 = VAR22[VAR17 * VAR18 + VAR32] + VAR72;
            int VAR75 = FUN16(VAR74, VAR73);
            (*VAR2)[VAR17 * (*VAR4) + VAR32] = VAR75;
            VAR72 = VAR74 - VAR75 * VAR73;
        }
    }
    (*VAR3)[VAR7 + 0] = (*VAR3)[VAR7 + 1] = (*VAR3)[VAR7 + 2] = (*VAR3)[VAR7 - 1];
    for (VAR17 = 0; VAR17 < *VAR4; VAR17++)
    {
        int VAR55 = (VAR7 - 1) * (*VAR4) + VAR17;
        (*VAR2)[VAR55 + 1 * (*VAR4)] = (*VAR2)[VAR55 + 2 * (*VAR4)] = (*VAR2)[VAR55 + 3 * (*VAR4)] = (*VAR2)[VAR55];
    }
    VAR25 = 0;
VAR26:
    FUN17(VAR22);
    FUN17(VAR23);
    return VAR25;
}