static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (;;)
    {
        if (VAR2->VAR5 >= VAR2->VAR6)
        {
            VAR4 = FUN2(VAR2);
            if (VAR4 < 0)
                return -1;
            else if (VAR4)
                break;
        }
        else
        {
            if (VAR2->VAR7)
            {
                VAR3 = VAR2->VAR6 - VAR2->VAR5;
                if (VAR3 < 4)
                {
                VAR8:
                    VAR2->VAR5 = VAR2->VAR6;
                    return 0;
                }
                VAR3 = (VAR2->VAR5[0] << 24) | (VAR2->VAR5[1] << 16) | (VAR2->VAR5[2] << 8) | (VAR2->VAR5[3]);
                if (VAR3 > (VAR2->VAR6 - VAR2->VAR5))
                    goto VAR8;
                if ((FUN3(VAR2) - FUN4(VAR2)) > 0)
                {
                    return 0;
                }
                VAR2->VAR9 += VAR3;
                FUN5(&VAR2->VAR10, VAR2->VAR9);
                if (VAR2->VAR11)
                    VAR2->VAR11->VAR12 += VAR3;
                if (VAR2->VAR13 == VAR14)
                {
                    VAR15 *VAR16;
                    int VAR17, VAR18;
                    uint8_t VAR19[4];
                    VAR1 *VAR20;
                    VAR20 = VAR2->VAR20;
                    if (!VAR20)
                        return -1;
                    if (VAR20->VAR21 != VAR22)
                        break;
                    if (FUN6(&VAR16) < 0)
                        goto VAR8;
                    VAR17 = VAR2->VAR23 * 2;
                    if (VAR2->VAR5[1] == 200)
                        VAR17++;
                    VAR19[0] = '';
                    VAR19[1] = VAR17;
                    VAR19[2] = VAR3 >> 8;
                    VAR19[3] = VAR3;
                    FUN7(VAR16, VAR19, 4);
                    VAR2->VAR5 += 4;
                    FUN7(VAR16, VAR2->VAR5, VAR3);
                    VAR18 = FUN8(VAR16, &VAR2->VAR24);
                    VAR20->VAR25 = VAR2->VAR24;
                    VAR20->VAR26 = VAR2->VAR24 + VAR18;
                    VAR2->VAR5 += VAR3;
                    VAR3 = send(VAR20->VAR27, VAR20->VAR25, VAR20->VAR26 - VAR20->VAR25, 0);
                    if (VAR3 > 0)
                        VAR20->VAR25 += VAR3;
                    if (VAR20->VAR25 < VAR20->VAR26)
                    {
                        VAR20->VAR21 = VAR28;
                        break;
                    }
                    else
                        FUN9(&VAR2->VAR24);
                }
                else
                {
                    VAR2->VAR5 += 4;
                    FUN10(VAR2->VAR29[VAR2->VAR23], VAR2->VAR5, VAR3);
                    VAR2->VAR5 += VAR3;
                }
            }
            else
            {
                VAR3 = send(VAR2->VAR27, VAR2->VAR5, VAR2->VAR6 - VAR2->VAR5, 0);
                if (VAR3 < 0)
                {
                    if (FUN11() != FUN12(VAR30) && FUN11() != FUN12(VAR31))
                        return -1;
                    else
                        return 0;
                }
                else
                    VAR2->VAR5 += VAR3;
                VAR2->VAR9 += VAR3;
                FUN5(&VAR2->VAR10, VAR2->VAR9);
                if (VAR2->VAR11)
                    VAR2->VAR11->VAR12 += VAR3;
                break;
            }
        }
    }
    return 0;
}