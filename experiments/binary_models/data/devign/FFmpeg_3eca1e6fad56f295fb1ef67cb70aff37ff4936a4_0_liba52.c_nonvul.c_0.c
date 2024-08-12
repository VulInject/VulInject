static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    short *VAR17 = VAR3;
    float VAR18;
    static const int VAR19[8] = {2, 1, 2, 3, 3, 4, 4, 5};
    *VAR4 = 0;
    VAR11 = VAR6;
    while (VAR7 > 0)
    {
        VAR14 = VAR9->VAR20 - VAR9->VAR21;
        if (VAR9->VAR22 == 0)
        {
            VAR14 = VAR23 - VAR14;
            if (VAR14 > VAR7)
                VAR14 = VAR7;
            memcpy(VAR9->VAR20, VAR11, VAR14);
            VAR11 += VAR14;
            VAR9->VAR20 += VAR14;
            VAR7 -= VAR14;
            if ((VAR9->VAR20 - VAR9->VAR21) == VAR23)
            {
                VAR14 = VAR9->FUN2(VAR9->VAR21, &VAR9->VAR12, &VAR15, &VAR16);
                if (VAR14 == 0)
                {
                    memcpy(VAR9->VAR21, VAR9->VAR21 + 1, VAR23 - 1);
                    VAR9->VAR20--;
                }
                else
                {
                    VAR9->VAR22 = VAR14;
                    VAR2->VAR15 = VAR15;
                    VAR9->VAR24 = VAR19[VAR9->VAR12 & 7];
                    if (VAR9->VAR12 & VAR25)
                        VAR9->VAR24++;
                    if (VAR2->VAR26 > 0 && VAR2->VAR26 <= 2 && VAR2->VAR26 < VAR9->VAR24)
                    {
                        VAR2->VAR24 = VAR2->VAR26;
                    }
                    else
                    {
                        VAR2->VAR24 = VAR9->VAR24;
                    }
                    VAR2->VAR16 = VAR16;
                }
            }
        }
        else if (VAR14 < VAR9->VAR22)
        {
            VAR14 = VAR9->VAR22 - VAR14;
            if (VAR14 > VAR7)
                VAR14 = VAR7;
            memcpy(VAR9->VAR20, VAR11, VAR14);
            VAR11 += VAR14;
            VAR9->VAR20 += VAR14;
            VAR7 -= VAR14;
        }
        else
        {
            VAR12 = VAR9->VAR12;
            if (VAR2->VAR24 == 1)
                VAR12 = VAR27;
            else if (VAR2->VAR24 == 2)
                VAR12 = VAR28;
            else
                VAR12 |= VAR29;
            VAR18 = 1;
            if (VAR9->FUN3(VAR9->VAR30, VAR9->VAR21, &VAR12, &VAR18, 384))
            {
            VAR31:
                FUN4(VAR2, VAR32, "");
                VAR9->VAR20 = VAR9->VAR21;
                VAR9->VAR22 = 0;
                continue;
            }
            for (VAR13 = 0; VAR13 < 6; VAR13++)
            {
                if (VAR9->FUN5(VAR9->VAR30))
                    goto VAR31;
                FUN6(VAR9->VAR33, VAR17 + VAR13 * 256 * VAR2->VAR24, VAR2->VAR24);
            }
            VAR9->VAR20 = VAR9->VAR21;
            VAR9->VAR22 = 0;
            *VAR4 = 6 * VAR2->VAR24 * 256 * sizeof(VAR34);
            break;
        }
    }
    return VAR11 - VAR6;
}