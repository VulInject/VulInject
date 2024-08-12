static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15;
    uint32_t VAR16;
    const VAR5 *VAR17;
    *VAR6 = NULL;
    *VAR7 = 0;
    VAR17 = VAR8;
    while (VAR9 > 0)
    {
        VAR13 = VAR11->VAR18 - VAR11->VAR19;
        if (VAR11->VAR20 == 0)
        {
            if (VAR11->VAR21 != 0)
            {
                VAR11->VAR19[0] = VAR11->VAR21 >> 24;
                VAR11->VAR19[1] = VAR11->VAR21 >> 16;
                VAR11->VAR19[2] = VAR11->VAR21 >> 8;
                VAR11->VAR19[3] = VAR11->VAR21;
                VAR11->VAR18 = VAR11->VAR19 + 4;
                VAR11->VAR21 = 0;
                goto VAR22;
            }
            VAR13 = VAR23 - VAR13;
            if (VAR13 > VAR9)
                VAR13 = VAR9;
            if (VAR13 > 0)
            {
                memcpy(VAR11->VAR18, VAR17, VAR13);
                VAR17 += VAR13;
                VAR9 -= VAR13;
                VAR11->VAR18 += VAR13;
            }
            if ((VAR11->VAR18 - VAR11->VAR19) >= VAR23)
            {
            VAR22:
                VAR15 = VAR4->VAR24;
                VAR16 = (VAR11->VAR19[0] << 24) | (VAR11->VAR19[1] << 16) | (VAR11->VAR19[2] << 8) | VAR11->VAR19[3];
                VAR14 = FUN2(VAR4, VAR16);
                if (VAR14 < 0)
                {
                    VAR11->VAR25 = -2;
                    memmove(VAR11->VAR19, VAR11->VAR19 + 1, VAR11->VAR18 - VAR11->VAR19 - 1);
                    VAR11->VAR18--;
                    FUN3("", VAR16);
                    VAR11->VAR26 = 0;
                }
                else
                {
                    if ((VAR16 & VAR27) != (VAR11->VAR16 & VAR27) && VAR11->VAR16)
                        VAR11->VAR25 = -3;
                    VAR11->VAR16 = VAR16;
                    VAR11->VAR25++;
                    VAR11->VAR20 = VAR14;
                    if (FUN4(VAR11, VAR16) == 1)
                    {
                        VAR11->VAR20 = -1;
                    }
                }
                if (VAR11->VAR25 <= 0)
                    VAR4->VAR24 = VAR15;
            }
        }
        else if (VAR11->VAR20 == -1)
        {
            VAR13 = VAR28 - VAR13;
            if (VAR13 > VAR9)
                VAR13 = VAR9;
            if (VAR13 == 0)
            {
                VAR11->VAR20 = 0;
                memmove(VAR11->VAR19, VAR11->VAR19 + 1, VAR11->VAR18 - VAR11->VAR19 - 1);
                VAR11->VAR18--;
            }
            else
            {
                VAR5 *VAR29, *VAR30;
                uint32_t VAR31;
                int VAR32;
                memcpy(VAR11->VAR18, VAR17, VAR13);
                VAR29 = VAR11->VAR18 - 3;
                VAR30 = VAR11->VAR18 + VAR13 - 4;
                while (VAR29 <= VAR30)
                {
                    VAR16 = (VAR29[0] << 24) | (VAR29[1] << 16) | (VAR29[2] << 8) | VAR29[3];
                    VAR31 = (VAR11->VAR19[0] << 24) | (VAR11->VAR19[1] << 16) | (VAR11->VAR19[2] << 8) | VAR11->VAR19[3];
                    if ((VAR16 & VAR27) == (VAR31 & VAR27))
                    {
                        VAR13 = (VAR29 + 4) - VAR11->VAR18;
                        VAR17 += VAR13;
                        VAR9 -= VAR13;
                        VAR11->VAR18 = VAR29;
                        VAR11->VAR21 = VAR16;
                        VAR11->VAR26 = VAR11->VAR18 - VAR11->VAR19;
                        VAR32 = (VAR31 >> 9) & 1;
                        if (VAR11->VAR33 == 1)
                            VAR11->VAR26 -= VAR32 * 4;
                        else
                            VAR11->VAR26 -= VAR32;
                        FUN3("", VAR11->VAR26, VAR32);
                        FUN4(VAR11, VAR31);
                        goto VAR34;
                    }
                    VAR29++;
                }
                VAR17 += VAR13;
                VAR11->VAR18 += VAR13;
                VAR9 -= VAR13;
            }
        }
        else if (VAR13 < VAR11->VAR20)
        {
            if (VAR11->VAR20 > VAR28)
                VAR11->VAR20 = VAR28;
            VAR13 = VAR11->VAR20 - VAR13;
            if (VAR13 > VAR9)
                VAR13 = VAR9;
            memcpy(VAR11->VAR18, VAR17, VAR13);
            VAR17 += VAR13;
            VAR11->VAR18 += VAR13;
            VAR9 -= VAR13;
        }
        if (VAR11->VAR20 > 0 && (VAR11->VAR18 - VAR11->VAR19) >= VAR11->VAR20)
        {
            if (VAR11->VAR25 > 0)
            {
                *VAR6 = VAR11->VAR19;
                *VAR7 = VAR11->VAR18 - VAR11->VAR19;
            }
            VAR11->VAR18 = VAR11->VAR19;
            VAR11->VAR20 = 0;
            break;
        }
    }
    return VAR17 - VAR8;
}