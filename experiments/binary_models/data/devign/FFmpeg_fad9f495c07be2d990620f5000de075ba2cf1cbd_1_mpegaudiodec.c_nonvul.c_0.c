static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    UINT32 VAR11;
    VAR5 *VAR12;
    int VAR13, VAR14;
    short *VAR15 = VAR3;
    *VAR4 = 0;
    VAR12 = VAR6;
    while (VAR7 > 0)
    {
        VAR13 = VAR9->VAR16 - VAR9->VAR17;
        if (VAR9->VAR18 == 0)
        {
            if (VAR9->VAR19 != 0)
            {
                VAR9->VAR17[0] = VAR9->VAR19 >> 24;
                VAR9->VAR17[1] = VAR9->VAR19 >> 16;
                VAR9->VAR17[2] = VAR9->VAR19 >> 8;
                VAR9->VAR17[3] = VAR9->VAR19;
                VAR9->VAR16 = VAR9->VAR17 + 4;
                VAR9->VAR19 = 0;
                goto VAR20;
            }
            VAR13 = VAR21 - VAR13;
            if (VAR13 > VAR7)
                VAR13 = VAR7;
            if (VAR13 > 0)
            {
                memcpy(VAR9->VAR16, VAR12, VAR13);
                VAR12 += VAR13;
                VAR7 -= VAR13;
                VAR9->VAR16 += VAR13;
            }
            if ((VAR9->VAR16 - VAR9->VAR17) >= VAR21)
            {
            VAR20:
                VAR11 = (VAR9->VAR17[0] << 24) | (VAR9->VAR17[1] << 16) | (VAR9->VAR17[2] << 8) | VAR9->VAR17[3];
                if (FUN2(VAR11) < 0)
                {
                    memcpy(VAR9->VAR17, VAR9->VAR17 + 1, VAR9->VAR16 - VAR9->VAR17 - 1);
                    VAR9->VAR16--;
                    FUN3("", VAR11);
                    VAR9->VAR22 = 0;
                }
                else
                {
                    if (FUN4(VAR9, VAR11) == 1)
                    {
                        VAR9->VAR18 = -1;
                        memcpy(VAR9->VAR17, VAR9->VAR17 + 1, VAR9->VAR16 - VAR9->VAR17 - 1);
                        VAR9->VAR16--;
                    }
                    else
                    {
                        VAR2->VAR23 = VAR9->VAR23;
                        VAR2->VAR24 = VAR9->VAR25;
                        VAR2->VAR26 = VAR9->VAR26;
                        VAR2->VAR18 = VAR9->VAR18;
                    }
                }
            }
        }
        else if (VAR9->VAR18 == -1)
        {
            VAR13 = VAR27 - VAR13;
            if (VAR13 > VAR7)
                VAR13 = VAR7;
            if (VAR13 == 0)
            {
                VAR9->VAR18 = 0;
            }
            else
            {
                VAR5 *VAR28, *VAR29;
                UINT32 VAR30;
                int VAR31;
                memcpy(VAR9->VAR16, VAR12, VAR13);
                VAR28 = VAR9->VAR16 - 3;
                VAR29 = VAR9->VAR16 + VAR13 - 4;
                while (VAR28 <= VAR29)
                {
                    VAR11 = (VAR28[0] << 24) | (VAR28[1] << 16) | (VAR28[2] << 8) | VAR28[3];
                    VAR30 = (VAR9->VAR17[0] << 24) | (VAR9->VAR17[1] << 16) | (VAR9->VAR17[2] << 8) | VAR9->VAR17[3];
                    if ((VAR11 & VAR32) == (VAR30 & VAR32))
                    {
                        VAR13 = (VAR28 + 4) - VAR9->VAR16;
                        VAR12 += VAR13;
                        VAR7 -= VAR13;
                        VAR9->VAR16 = VAR28;
                        VAR9->VAR19 = VAR11;
                        VAR9->VAR22 = VAR9->VAR16 - VAR9->VAR17;
                        VAR31 = (VAR30 >> 9) & 1;
                        if (VAR9->VAR33 == 1)
                            VAR9->VAR22 -= VAR31 * 4;
                        else
                            VAR9->VAR22 -= VAR31;
                        FUN3("", VAR9->VAR22, VAR31);
                        FUN4(VAR9, VAR30);
                        goto VAR34;
                    }
                    VAR28++;
                }
                VAR12 += VAR13;
                VAR9->VAR16 += VAR13;
                VAR7 -= VAR13;
            }
        }
        else if (VAR13 < VAR9->VAR18)
        {
            if (VAR9->VAR18 > VAR27)
                VAR9->VAR18 = VAR27;
            VAR13 = VAR9->VAR18 - VAR13;
            if (VAR13 > VAR7)
                VAR13 = VAR7;
            memcpy(VAR9->VAR16, VAR12, VAR13);
            VAR12 += VAR13;
            VAR9->VAR16 += VAR13;
            VAR7 -= VAR13;
        }
        else
        {
            VAR14 = FUN5(VAR9, VAR15);
            VAR9->VAR16 = VAR9->VAR17;
            VAR9->VAR18 = 0;
            *VAR4 = VAR14;
            break;
        }
    VAR34:
    }
    return VAR12 - VAR6;
}