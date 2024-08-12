static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    uint32_t VAR19;
    const VAR5 *VAR20;
    *VAR6 = NULL;
    *VAR7 = 0;
    VAR20 = VAR8;
    while (VAR9 > 0)
    {
        VAR13 = VAR11->VAR21 - VAR11->VAR22;
        if (VAR11->VAR18 == 0)
        {
            if (VAR11->VAR23 != 0)
            {
                FUN2(VAR11->VAR22, VAR11->VAR23);
                VAR11->VAR21 = VAR11->VAR22 + 4;
                VAR11->VAR23 = 0;
                goto VAR24;
            }
            VAR13 = FUN3(VAR25 - VAR13, VAR9);
            if (VAR13 > 0)
            {
                memcpy(VAR11->VAR21, VAR20, VAR13);
                VAR20 += VAR13;
                VAR9 -= VAR13;
                VAR11->VAR21 += VAR13;
            }
            if ((VAR11->VAR21 - VAR11->VAR22) >= VAR25)
            {
            VAR24:
                VAR19 = FUN4(VAR11->VAR22);
                VAR14 = FUN5(VAR4, VAR19, &VAR15, &VAR16, &VAR18, &VAR17);
                if (VAR14 < 0)
                {
                    VAR11->VAR26 = -2;
                    memmove(VAR11->VAR22, VAR11->VAR22 + 1, VAR11->VAR21 - VAR11->VAR22 - 1);
                    VAR11->VAR21--;
                    FUN6(VAR4, "", VAR19);
                    VAR11->VAR27 = 0;
                }
                else
                {
                    if ((VAR19 & VAR28) != (VAR11->VAR19 & VAR28) && VAR11->VAR19)
                        VAR11->VAR26 = -3;
                    VAR11->VAR19 = VAR19;
                    VAR11->VAR26++;
                    VAR11->VAR18 = VAR14;
                    if (FUN7(VAR11, VAR19) == 1)
                    {
                        VAR11->VAR18 = -1;
                    }
                    if (VAR11->VAR26 > 1)
                    {
                        VAR4->VAR29 = VAR15;
                        VAR4->VAR16 = VAR16;
                        VAR4->VAR18 = VAR18;
                        VAR4->VAR17 = VAR17;
                    }
                }
            }
        }
        else if (VAR11->VAR18 == -1)
        {
            VAR13 = VAR30 - VAR13;
            if (VAR13 > VAR9)
                VAR13 = VAR9;
            if (VAR13 == 0)
            {
                VAR11->VAR18 = 0;
                memmove(VAR11->VAR22, VAR11->VAR22 + 1, VAR11->VAR21 - VAR11->VAR22 - 1);
                VAR11->VAR21--;
            }
            else
            {
                VAR5 *VAR31, *VAR32;
                uint32_t VAR33;
                int VAR34;
                memcpy(VAR11->VAR21, VAR20, VAR13);
                VAR31 = VAR11->VAR21 - 3;
                VAR32 = VAR11->VAR21 + VAR13 - 4;
                while (VAR31 <= VAR32)
                {
                    VAR19 = FUN4(VAR31);
                    VAR33 = FUN4(VAR11->VAR22);
                    if ((VAR19 & VAR28) == (VAR33 & VAR28))
                    {
                        VAR13 = (VAR31 + 4) - VAR11->VAR21;
                        VAR20 += VAR13;
                        VAR9 -= VAR13;
                        VAR11->VAR21 = VAR31;
                        VAR11->VAR23 = VAR19;
                        VAR11->VAR27 = VAR11->VAR21 - VAR11->VAR22;
                        VAR34 = (VAR33 >> 9) & 1;
                        if (VAR11->VAR35 == 1)
                            VAR11->VAR27 -= VAR34 * 4;
                        else
                            VAR11->VAR27 -= VAR34;
                        FUN6(VAR4, "", VAR11->VAR27, VAR34);
                        FUN7(VAR11, VAR33);
                        goto VAR36;
                    }
                    VAR31++;
                }
                VAR20 += VAR13;
                VAR11->VAR21 += VAR13;
                VAR9 -= VAR13;
            }
        }
        else if (VAR13 < VAR11->VAR18)
        {
            if (VAR11->VAR18 > VAR30)
                VAR11->VAR18 = VAR30;
            VAR13 = FUN3(VAR11->VAR18 - VAR13, VAR9);
            memcpy(VAR11->VAR21, VAR20, VAR13);
            VAR20 += VAR13;
            VAR11->VAR21 += VAR13;
            VAR9 -= VAR13;
        }
        if (VAR11->VAR18 > 0 && VAR20 - VAR8 == VAR11->VAR21 - VAR11->VAR22 && VAR9 + VAR20 - VAR8 >= VAR11->VAR18)
        {
            if (VAR11->VAR26 > 0)
            {
                *VAR6 = VAR8;
                *VAR7 = VAR11->VAR18;
            }
            VAR20 = VAR8 + VAR11->VAR18;
            VAR11->VAR21 = VAR11->VAR22;
            VAR11->VAR18 = 0;
            break;
        }
        if (VAR11->VAR18 > 0 && (VAR11->VAR21 - VAR11->VAR22) >= VAR11->VAR18)
        {
            if (VAR11->VAR26 > 0)
            {
                *VAR6 = VAR11->VAR22;
                *VAR7 = VAR11->VAR21 - VAR11->VAR22;
            }
            VAR11->VAR21 = VAR11->VAR22;
            VAR11->VAR18 = 0;
            break;
        }
    }
    return VAR20 - VAR8;
}