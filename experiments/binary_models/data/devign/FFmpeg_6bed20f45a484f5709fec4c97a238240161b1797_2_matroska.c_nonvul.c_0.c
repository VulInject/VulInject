FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, int VAR8, int VAR9, int *VAR10, VAR11 **VAR12)
{
    int VAR13 = 0;
    int VAR14;
    VAR11 *VAR15;
    VAR3 *VAR16 = VAR4;
    int16_t VAR17;
    VAR18 *VAR19 = NULL;
    int VAR20, VAR21, VAR22 = 0;
    uint64_t VAR23;
    if ((VAR20 = FUN2(VAR4, VAR5, &VAR23)) < 0)
    {
        FUN3(VAR2->VAR24, VAR25, "");
        FUN4(VAR16);
        return VAR13;
    }
    VAR4 += VAR20;
    VAR5 -= VAR20;
    VAR14 = FUN5(VAR2, VAR23);
    if (VAR10)
        *VAR10 = VAR14;
    if (VAR5 <= 3 || VAR14 < 0 || VAR14 >= VAR2->VAR26)
    {
        FUN3(VAR2->VAR24, VAR27, "", VAR14, VAR5);
        FUN4(VAR16);
        return VAR13;
    }
    if (VAR2->VAR24->VAR28[VAR2->VAR29[VAR14]->VAR30]->VAR31 >= VAR32)
    {
        FUN4(VAR16);
        return VAR13;
    }
    VAR17 = (VAR4[0] << 8) | VAR4[1];
    VAR4 += 2;
    VAR5 -= 2;
    VAR21 = *VAR4;
    VAR4 += 1;
    VAR5 -= 1;
    if (VAR8 == -1)
        VAR8 = VAR21 & 1 ? VAR33 : 0;
    switch ((VAR21 & 0x06) >> 1)
    {
    case 0x0:
        VAR22 = 1;
        VAR19 = FUN6(sizeof(int));
        VAR19[0] = VAR5;
        break;
    case 0x1:
    case 0x2:
    case 0x3:
        if (VAR5 == 0)
        {
            VAR13 = -1;
            break;
        }
        VAR22 = (*VAR4) + 1;
        VAR4 += 1;
        VAR5 -= 1;
        VAR19 = FUN6(VAR22 * sizeof(int));
        switch ((VAR21 & 0x06) >> 1)
        {
        case 0x1:
        {
            uint8_t VAR34;
            uint32_t VAR35 = 0;
            for (VAR20 = 0; VAR13 == 0 && VAR20 < VAR22 - 1; VAR20++)
            {
                while (1)
                {
                    if (VAR5 == 0)
                    {
                        VAR13 = -1;
                        break;
                    }
                    VAR34 = *VAR4;
                    VAR19[VAR20] += VAR34;
                    VAR4 += 1;
                    VAR5 -= 1;
                    if (VAR34 != 0xff)
                        break;
                }
                VAR35 += VAR19[VAR20];
            }
            VAR19[VAR20] = VAR5 - VAR35;
            break;
        }
        case 0x2:
            for (VAR20 = 0; VAR20 < VAR22; VAR20++)
                VAR19[VAR20] = VAR5 / VAR22;
            break;
        case 0x3:
        {
            uint32_t VAR35;
            VAR20 = FUN2(VAR4, VAR5, &VAR23);
            if (VAR20 < 0)
            {
                FUN3(VAR2->VAR24, VAR27, "");
                break;
            }
            VAR4 += VAR20;
            VAR5 -= VAR20;
            VAR35 = VAR19[0] = VAR23;
            for (VAR20 = 1; VAR13 == 0 && VAR20 < VAR22 - 1; VAR20++)
            {
                int64_t VAR36;
                int VAR37;
                VAR37 = FUN7(VAR4, VAR5, &VAR36);
                if (VAR37 < 0)
                {
                    FUN3(VAR2->VAR24, VAR27, "");
                    break;
                }
                VAR4 += VAR37;
                VAR5 -= VAR37;
                VAR19[VAR20] = VAR19[VAR20 - 1] + VAR36;
                VAR35 += VAR19[VAR20];
            }
            VAR19[VAR20] = VAR5 - VAR35;
            break;
        }
        }
        break;
    }
    if (VAR13 == 0)
    {
        int VAR38 = VAR2->VAR29[VAR14]->VAR21 & VAR39;
        for (VAR20 = 0; VAR20 < VAR22; VAR20++)
        {
            uint64_t VAR40 = VAR41;
            int VAR42, VAR43 = 1;
            if (VAR38)
            {
                VAR43 = *VAR4++ + 1;
                VAR19[VAR20]--;
            }
            if (VAR7 != (VAR44)-1 && VAR20 == 0)
            {
                if (VAR7 + VAR17 >= 0)
                    VAR40 = (VAR7 + VAR17) * VAR2->VAR45;
            }
            for (VAR42 = 0; VAR42 < VAR43; VAR42++)
            {
                int VAR46, VAR47 = 0;
                if (VAR38)
                    VAR47 = FUN8(VAR4, VAR42, VAR43);
                if (VAR42 + 1 == VAR43)
                    VAR46 = VAR19[VAR20] - VAR47;
                else
                    VAR46 = FUN8(VAR4, VAR42 + 1, VAR43) - VAR47;
                VAR15 = FUN6(sizeof(VAR11));
                if (VAR12)
                    *VAR12 = VAR15;
                if (FUN9(VAR15, VAR46) < 0)
                {
                    VAR13 = VAR48;
                    VAR20 = VAR22 - 1;
                    break;
                }
                memcpy(VAR15->VAR4, VAR4 + VAR47, VAR46);
                if (VAR20 == 0)
                    VAR15->VAR21 = VAR8;
                VAR15->VAR30 = VAR2->VAR29[VAR14]->VAR30;
                VAR15->VAR49 = VAR40;
                VAR15->VAR6 = VAR6;
                FUN10(VAR2, VAR15);
            }
            VAR4 += VAR19[VAR20];
        }
    }
    FUN4(VAR19);
    FUN4(VAR16);
    return VAR13;
}