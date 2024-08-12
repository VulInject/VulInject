static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint32_t VAR11;
    VAR5 *VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16 = VAR3;
    VAR12 = VAR6;
    while (VAR7 > 0)
    {
        VAR13 = VAR9->VAR17 - VAR9->VAR18;
        if (VAR9->VAR19 == 0)
        {
            if (VAR9->VAR20 != 0)
            {
                VAR9->VAR18[0] = VAR9->VAR20 >> 24;
                VAR9->VAR18[1] = VAR9->VAR20 >> 16;
                VAR9->VAR18[2] = VAR9->VAR20 >> 8;
                VAR9->VAR18[3] = VAR9->VAR20;
                VAR9->VAR17 = VAR9->VAR18 + 4;
                VAR9->VAR20 = 0;
                goto VAR21;
            }
            VAR13 = VAR22 - VAR13;
            if (VAR13 > VAR7)
                VAR13 = VAR7;
            if (VAR13 > 0)
            {
                memcpy(VAR9->VAR17, VAR12, VAR13);
                VAR12 += VAR13;
                VAR7 -= VAR13;
                VAR9->VAR17 += VAR13;
            }
            if ((VAR9->VAR17 - VAR9->VAR18) >= VAR22)
            {
            VAR21:
                VAR11 = (VAR9->VAR18[0] << 24) | (VAR9->VAR18[1] << 16) | (VAR9->VAR18[2] << 8) | VAR9->VAR18[3];
                if (FUN2(VAR11) < 0)
                {
                    memmove(VAR9->VAR18, VAR9->VAR18 + 1, VAR9->VAR17 - VAR9->VAR18 - 1);
                    VAR9->VAR17--;
                    FUN3("", VAR11);
                    VAR9->VAR23 = 0;
                }
                else
                {
                    if (FUN4(VAR9, VAR11) == 1)
                    {
                        VAR9->VAR19 = -1;
                    }
                    VAR2->VAR24 = VAR9->VAR24;
                    VAR2->VAR25 = VAR9->VAR26;
                    VAR2->VAR27 = VAR9->VAR27;
                    VAR2->VAR28 = VAR9->VAR29;
                    switch (VAR9->VAR29)
                    {
                    case 1:
                        VAR2->VAR19 = 384;
                        break;
                    case 2:
                        VAR2->VAR19 = 1152;
                        break;
                    case 3:
                        if (VAR9->VAR30)
                            VAR2->VAR19 = 576;
                        else
                            VAR2->VAR19 = 1152;
                        break;
                    }
                }
            }
        }
        else if (VAR9->VAR19 == -1)
        {
            VAR13 = VAR31 - VAR13;
            if (VAR13 > VAR7)
                VAR13 = VAR7;
            if (VAR13 == 0)
            {
                VAR9->VAR19 = 0;
                memmove(VAR9->VAR18, VAR9->VAR18 + 1, VAR9->VAR17 - VAR9->VAR18 - 1);
                VAR9->VAR17--;
            }
            else
            {
                VAR5 *VAR32, *VAR33;
                uint32_t VAR34;
                int VAR35;
                memcpy(VAR9->VAR17, VAR12, VAR13);
                VAR32 = VAR9->VAR17 - 3;
                VAR33 = VAR9->VAR17 + VAR13 - 4;
                while (VAR32 <= VAR33)
                {
                    VAR11 = (VAR32[0] << 24) | (VAR32[1] << 16) | (VAR32[2] << 8) | VAR32[3];
                    VAR34 = (VAR9->VAR18[0] << 24) | (VAR9->VAR18[1] << 16) | (VAR9->VAR18[2] << 8) | VAR9->VAR18[3];
                    if ((VAR11 & VAR36) == (VAR34 & VAR36))
                    {
                        VAR13 = (VAR32 + 4) - VAR9->VAR17;
                        VAR12 += VAR13;
                        VAR7 -= VAR13;
                        VAR9->VAR17 = VAR32;
                        VAR9->VAR20 = VAR11;
                        VAR9->VAR23 = VAR9->VAR17 - VAR9->VAR18;
                        VAR35 = (VAR34 >> 9) & 1;
                        if (VAR9->VAR29 == 1)
                            VAR9->VAR23 -= VAR35 * 4;
                        else
                            VAR9->VAR23 -= VAR35;
                        FUN3("", VAR9->VAR23, VAR35);
                        FUN4(VAR9, VAR34);
                        goto VAR37;
                    }
                    VAR32++;
                }
                VAR12 += VAR13;
                VAR9->VAR17 += VAR13;
                VAR7 -= VAR13;
            }
        }
        else if (VAR13 < VAR9->VAR19)
        {
            if (VAR9->VAR19 > VAR31)
                VAR9->VAR19 = VAR31;
            VAR13 = VAR9->VAR19 - VAR13;
            if (VAR13 > VAR7)
                VAR13 = VAR7;
            memcpy(VAR9->VAR17, VAR12, VAR13);
            VAR12 += VAR13;
            VAR9->VAR17 += VAR13;
            VAR7 -= VAR13;
        }
    VAR37:
        if (VAR9->VAR19 > 0 && (VAR9->VAR17 - VAR9->VAR18) >= VAR9->VAR19)
        {
            if (VAR2->VAR38)
            {
                *(VAR5 **)VAR3 = VAR9->VAR18;
                VAR14 = VAR9->VAR17 - VAR9->VAR18;
            }
            else
            {
                VAR14 = FUN5(VAR9, VAR16);
            }
            VAR9->VAR17 = VAR9->VAR18;
            VAR9->VAR19 = 0;
            if (VAR14 >= 0)
                *VAR4 = VAR14;
            else
                FUN6(VAR2, VAR39, "");
            break;
        }
    }
    return VAR12 - VAR6;
}