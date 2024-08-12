static int FUN1(VAR1 **VAR2, VAR3 **VAR4, int *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, VAR13 *VAR14, VAR13 *VAR15, double VAR16[2], int VAR17)
{
    int VAR18;
    int VAR19;
    int VAR20;
    int VAR21;
    VAR22 *VAR23 = NULL;
    VAR22 *VAR24 = NULL;
    const int64_t VAR25 = 1LL << 54;
    int VAR26 = -1;
    FUN2();
    FUN3(NULL, *VAR4, (VAR8 + 3) * sizeof(**VAR4), VAR27);
    if (FUN4(VAR6 - 0x10000) < 10)
    {
        int VAR18;
        VAR19 = 1;
        FUN5(NULL, VAR23, VAR8 * sizeof(*VAR23) * VAR19, VAR27);
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
        {
            VAR23[VAR18 * VAR19] = VAR25;
            (*VAR4)[VAR18] = VAR18;
        }
    }
    else if (VAR11 & VAR28)
    {
        int VAR18;
        int VAR29;
        VAR19 = 1;
        FUN3(NULL, VAR23, VAR8 * sizeof(*VAR23) * VAR19, VAR27);
        VAR29 = VAR6 / 2 - 0x8000;
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
        {
            int VAR30 = (VAR29 - ((VAR19 - 1) << 15) + (1 << 15)) >> 16;
            (*VAR4)[VAR18] = VAR30;
            VAR23[VAR18] = VAR25;
            VAR29 += VAR6;
        }
    }
    else if ((VAR6 <= (1 << 16) && (VAR11 & VAR31)) || (VAR11 & VAR32))
    {
        int VAR18;
        int VAR29;
        VAR19 = 2;
        FUN3(NULL, VAR23, VAR8 * sizeof(*VAR23) * VAR19, VAR27);
        VAR29 = VAR6 / 2 - 0x8000;
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
        {
            int VAR30 = (VAR29 - ((VAR19 - 1) << 15) + (1 << 15)) >> 16;
            int VAR33;
            (*VAR4)[VAR18] = VAR30;
            for (VAR33 = 0; VAR33 < VAR19; VAR33++)
            {
                int64_t VAR34 = VAR25 - FUN4((VAR30 << 16) - VAR29) * (VAR25 >> 16);
                if (VAR34 < 0)
                    VAR34 = 0;
                VAR23[VAR18 * VAR19 + VAR33] = VAR34;
                VAR30++;
            }
            VAR29 += VAR6;
        }
    }
    else
    {
        int64_t VAR29;
        int VAR35;
        if (VAR11 & VAR36)
            VAR35 = 4;
        else if (VAR11 & VAR37)
            VAR35 = 8;
        else if (VAR11 & VAR31)
            VAR35 = 1;
        else if (VAR11 & VAR38)
            VAR35 = 8;
        else if (VAR11 & VAR39)
            VAR35 = VAR16[0] != VAR40 ? FUN6(2 * VAR16[0]) : 6;
        else if (VAR11 & VAR41)
            VAR35 = 20;
        else if (VAR11 & VAR42)
            VAR35 = 20;
        else if (VAR11 & VAR43)
            VAR35 = 2;
        else
        {
            VAR35 = 0;
            assert(0);
        }
        if (VAR6 <= 1 << 16)
            VAR19 = 1 + VAR35;
        else
            VAR19 = 1 + (VAR35 * VAR7 + VAR8 - 1) / VAR8;
        VAR19 = FUN7(VAR19, VAR7 - 2);
        VAR19 = FUN8(VAR19, 1);
        FUN3(NULL, VAR23, VAR8 * sizeof(*VAR23) * VAR19, VAR27);
        VAR29 = VAR6 - 0x10000;
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
        {
            int VAR30 = (VAR29 - ((VAR19 - 2) << 16)) / (1 << 17);
            int VAR33;
            (*VAR4)[VAR18] = VAR30;
            for (VAR33 = 0; VAR33 < VAR19; VAR33++)
            {
                int64_t VAR44 = (FUN4(((VAR22)VAR30 << 17) - VAR29)) << 13;
                double VAR45;
                int64_t VAR34;
                if (VAR6 > 1 << 16)
                    VAR44 = VAR44 * VAR8 / VAR7;
                VAR45 = VAR44 * (1.0 / (1 << 30));
                if (VAR11 & VAR36)
                {
                    int64_t VAR46 = (VAR16[0] != VAR40 ? VAR16[0] : 0) * (1 << 24);
                    int64_t VAR47 = (VAR16[1] != VAR40 ? VAR16[1] : 0.6) * (1 << 24);
                    if (VAR44 >= 1LL << 31)
                    {
                        VAR34 = 0.0;
                    }
                    else
                    {
                        int64_t VAR48 = (VAR44 * VAR44) >> 30;
                        int64_t VAR49 = (VAR48 * VAR44) >> 30;
                        if (VAR44 < 1LL << 30)
                            VAR34 = (12 * (1 << 24) - 9 * VAR46 - 6 * VAR47) * VAR49 + (-18 * (1 << 24) + 12 * VAR46 + 6 * VAR47) * VAR48 + (6 * (1 << 24) - 2 * VAR46) * (1 << 30);
                        else
                            VAR34 = (-VAR46 - 6 * VAR47) * VAR49 + (6 * VAR46 + 30 * VAR47) * VAR48 + (-12 * VAR46 - 48 * VAR47) * VAR44 + (8 * VAR46 + 24 * VAR47) * (1 << 30);
                    }
                    VAR34 *= VAR25 >> (30 + 24);
                }
                else if (VAR11 & VAR37)
                {
                    double VAR50 = VAR16 ? VAR16 * 0.01 : 0.3;
                    VAR34 = VAR44 ? FUN9(VAR44 * VAR51) / (VAR44 * VAR51) : 1.0;
                    VAR34 *= FUN10(2.0, -VAR50 * VAR44 * VAR44);
                }
                else if (VAR11 & VAR37)
                {
                    double VAR52 = VAR16[0] != VAR40 ? VAR16[0] : 1.0;
                    double VAR53;
                    if (VAR45 < 1.0)
                        VAR53 = FUN11(VAR45 * VAR51);
                    else
                        VAR53 = -1.0;
                    if (VAR53 < 0.0)
                        VAR53 = -FUN10(-VAR53, VAR52);
                    else
                        VAR53 = FUN10(VAR53, VAR52);
                    VAR34 = (VAR53 * 0.5 + 0.5) * VAR25;
                }
                else if (VAR11 & VAR31)
                {
                    int64_t VAR54 = VAR44 - (1 << 29);
                    if (VAR54 * VAR6 < -(1LL << (29 + 16)))
                        VAR34 = 1.0 * (1LL << (30 + 16));
                    else if (VAR54 * VAR6 < (1LL << (29 + 16)))
                        VAR34 = -VAR54 * VAR6 + (1LL << (29 + 16));
                    else
                        VAR34 = 0.0;
                    VAR34 *= VAR25 >> (30 + 16);
                }
                else if (VAR11 & VAR38)
                {
                    double VAR50 = VAR16[0] != VAR40 ? VAR16[0] : 3.0;
                    VAR34 = (FUN10(2.0, -VAR50 * VAR45 * VAR45)) * VAR25;
                }
                else if (VAR11 & VAR41)
                {
                    VAR34 = (VAR44 ? FUN9(VAR45 * VAR51) / (VAR45 * VAR51) : 1.0) * VAR25;
                }
                else if (VAR11 & VAR39)
                {
                    double VAR50 = VAR16[0] != VAR40 ? VAR16[0] : 3.0;
                    VAR34 = (VAR44 ? FUN9(VAR45 * VAR51) * FUN9(VAR45 * VAR51 / VAR50) / (VAR45 * VAR45 * VAR51 * VAR51 / VAR50) : 1.0) * VAR25;
                    if (VAR45 > VAR50)
                        VAR34 = 0;
                }
                else if (VAR11 & VAR43)
                {
                    VAR34 = (1 << 30) - VAR44;
                    if (VAR34 < 0)
                        VAR34 = 0;
                    VAR34 *= VAR25 >> 30;
                }
                else if (VAR11 & VAR42)
                {
                    double VAR50 = -2.196152422706632;
                    VAR34 = FUN12(1.0, 0.0, VAR50, -VAR50 - 1.0, VAR45) * VAR25;
                }
                else
                {
                    VAR34 = 0.0;
                    assert(0);
                }
                VAR23[VAR18 * VAR19 + VAR33] = VAR34;
                VAR30++;
            }
            VAR29 += 2 * VAR6;
        }
    }
    assert(VAR19 > 0);
    VAR20 = VAR19;
    if (VAR14)
        VAR20 += VAR14->VAR55 - 1;
    if (VAR15)
        VAR20 += VAR15->VAR55 - 1;
    assert(VAR20 > 0);
    FUN5(NULL, VAR24, VAR20 * VAR8 * sizeof(*VAR24), VAR27);
    for (VAR18 = 0; VAR18 < VAR8; VAR18++)
    {
        int VAR33, VAR56;
        if (VAR14)
        {
            for (VAR56 = 0; VAR56 < VAR14->VAR55; VAR56++)
            {
                for (VAR33 = 0; VAR33 < VAR19; VAR33++)
                    VAR24[VAR18 * VAR20 + VAR56 + VAR33] += VAR14->VAR34[VAR56] * VAR23[VAR18 * VAR19 + VAR33];
            }
        }
        else
        {
            for (VAR33 = 0; VAR33 < VAR19; VAR33++)
                VAR24[VAR18 * VAR20 + VAR33] = VAR23[VAR18 * VAR19 + VAR33];
        }
        (*VAR4)[VAR18] += (VAR19 - 1) / 2 - (VAR20 - 1) / 2;
    }
    FUN13(&VAR23);
    VAR21 = 0;
    for (VAR18 = VAR8 - 1; VAR18 >= 0; VAR18--)
    {
        int VAR57 = VAR20;
        int VAR33;
        int64_t VAR58 = 0.0;
        for (VAR33 = 0; VAR33 < VAR20; VAR33++)
        {
            int VAR56;
            VAR58 += FUN4(VAR24[VAR18 * VAR20]);
            if (VAR58 > VAR59 * VAR25)
                break;
            if (VAR18 < VAR8 - 1 && (*VAR4)[VAR18] >= (*VAR4)[VAR18 + 1])
                break;
            for (VAR56 = 1; VAR56 < VAR20; VAR56++)
                VAR24[VAR18 * VAR20 + VAR56 - 1] = VAR24[VAR18 * VAR20 + VAR56];
            VAR24[VAR18 * VAR20 + VAR56 - 1] = 0;
            (*VAR4)[VAR18]++;
        }
        VAR58 = 0;
        for (VAR33 = VAR20 - 1; VAR33 > 0; VAR33--)
        {
            VAR58 += FUN4(VAR24[VAR18 * VAR20 + VAR33]);
            if (VAR58 > VAR59 * VAR25)
                break;
            VAR57--;
        }
        if (VAR57 > VAR21)
            VAR21 = VAR57;
    }
    if (VAR60 && VAR12 & VAR61)
    {
        if (VAR21 < 5)
            VAR9 = 4;
        if (VAR21 < 3)
            VAR9 = 1;
    }
    if (FUN14(VAR12))
    {
        if (VAR21 == 1 && VAR9 == 2)
            VAR9 = 1;
    }
    assert(VAR21 > 0);
    VAR19 = (VAR21 + (VAR9 - 1)) & (~(VAR9 - 1));
    assert(VAR19 > 0);
    VAR23 = FUN15(VAR19 * VAR8 * sizeof(*VAR23));
    if (VAR19 >= VAR62 * 16 / ((VAR11 & VAR63) ? VAR64 : 16) || !VAR23)
        goto VAR27;
    *VAR5 = VAR19;
    if (VAR11 & VAR65)
        FUN16(NULL, VAR66, "", VAR20, VAR19);
    for (VAR18 = 0; VAR18 < VAR8; VAR18++)
    {
        int VAR33;
        for (VAR33 = 0; VAR33 < VAR19; VAR33++)
        {
            if (VAR33 >= VAR20)
                VAR23[VAR18 * VAR19 + VAR33] = 0;
            else
                VAR23[VAR18 * VAR19 + VAR33] = VAR24[VAR18 * VAR20 + VAR33];
            if ((VAR11 & VAR67) && VAR33 >= VAR21)
                VAR23[VAR18 * VAR19 + VAR33] = 0;
        }
    }
    if (VAR17)
    {
        for (VAR18 = 0; VAR18 < VAR8; VAR18++)
        {
            int VAR33;
            if ((*VAR4)[VAR18] < 0)
            {
                for (VAR33 = 1; VAR33 < VAR19; VAR33++)
                {
                    int VAR68 = FUN8(VAR33 + (*VAR4)[VAR18], 0);
                    VAR23[VAR18 * VAR19 + VAR68] += VAR23[VAR18 * VAR19 + VAR33];
                    VAR23[VAR18 * VAR19 + VAR33] = 0;
                }
                (*VAR4)[VAR18] = 0;
            }
            if ((*VAR4)[VAR18] + VAR19 > VAR7)
            {
                int VAR69 = (*VAR4)[VAR18] + VAR19 - VAR7;
                for (VAR33 = VAR19 - 2; VAR33 >= 0; VAR33--)
                {
                    int VAR70 = FUN7(VAR33 + VAR69, VAR19 - 1);
                    VAR23[VAR18 * VAR19 + VAR70] += VAR23[VAR18 * VAR19 + VAR33];
                    VAR23[VAR18 * VAR19 + VAR33] = 0;
                }
                (*VAR4)[VAR18] = VAR7 - VAR19;
            }
        }
    }
    FUN5(NULL, *VAR2, *VAR5 * (VAR8 + 3) * sizeof(VAR1), VAR27);
    for (VAR18 = 0; VAR18 < VAR8; VAR18++)
    {
        int VAR33;
        int64_t VAR71 = 0;
        int64_t VAR72 = 0;
        for (VAR33 = 0; VAR33 < VAR19; VAR33++)
        {
            VAR72 += VAR23[VAR18 * VAR19 + VAR33];
        }
        VAR72 = (VAR72 + VAR10 / 2) / VAR10;
        for (VAR33 = 0; VAR33 < *VAR5; VAR33++)
        {
            int64_t VAR73 = VAR23[VAR18 * VAR19 + VAR33] + VAR71;
            int VAR74 = FUN17(VAR73, VAR72);
            (*VAR2)[VAR18 * (*VAR5) + VAR33] = VAR74;
            VAR71 = VAR73 - VAR74 * VAR72;
        }
    }
    (*VAR4)[VAR8 + 0] = (*VAR4)[VAR8 + 1] = (*VAR4)[VAR8 + 2] = (*VAR4)[VAR8 - 1];
    for (VAR18 = 0; VAR18 < *VAR5; VAR18++)
    {
        int VAR56 = (VAR8 - 1) * (*VAR5) + VAR18;
        (*VAR2)[VAR56 + 1 * (*VAR5)] = (*VAR2)[VAR56 + 2 * (*VAR5)] = (*VAR2)[VAR56 + 3 * (*VAR5)] = (*VAR2)[VAR56];
    }
    VAR26 = 0;
VAR27:
    FUN18(VAR23);
    FUN18(VAR24);
    return VAR26;
}