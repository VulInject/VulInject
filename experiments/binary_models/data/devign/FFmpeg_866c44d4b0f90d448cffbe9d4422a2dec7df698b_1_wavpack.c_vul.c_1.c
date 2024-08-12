static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const int VAR6)
{
    int VAR7, VAR8, VAR9 = 0;
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15 = VAR2->VAR15;
    uint32_t VAR16 = VAR2->VAR17.VAR16;
    uint32_t VAR18 = VAR2->VAR19.VAR16;
    VAR20 *VAR21 = VAR5;
    VAR22 *VAR23 = VAR5;
    float *VAR24 = VAR5;
    VAR2->VAR25 = VAR2->VAR26 = VAR2->VAR27 = 0;
    do
    {
        VAR14 = FUN2(VAR2, VAR4, 0, &VAR10);
        VAR13 = 0;
        if (VAR10)
            break;
        for (VAR7 = 0; VAR7 < VAR2->VAR28; VAR7++)
        {
            VAR11 = VAR2->VAR29[VAR7].VAR30;
            if (VAR11 > 8)
            {
                if (VAR11 & 1)
                    VAR12 = 2 * VAR2->VAR29[VAR7].VAR31[0] - VAR2->VAR29[VAR7].VAR31[1];
                else
                    VAR12 = (3 * VAR2->VAR29[VAR7].VAR31[0] - VAR2->VAR29[VAR7].VAR31[1]) >> 1;
                VAR2->VAR29[VAR7].VAR31[1] = VAR2->VAR29[VAR7].VAR31[0];
                VAR8 = 0;
            }
            else
            {
                VAR12 = VAR2->VAR29[VAR7].VAR31[VAR15];
                VAR8 = (VAR15 + VAR11) & 7;
                if (VAR6 != VAR32)
                    VAR13 = VAR14 + ((VAR2->VAR29[VAR7].VAR33 * (VAR34)VAR12 + 512) >> 10);
                else
                    VAR13 = VAR14 + ((VAR2->VAR29[VAR7].VAR33 * VAR12 + 512) >> 10);
                if (VAR12 && VAR14)
                    VAR2->VAR29[VAR7].VAR33 -= ((((VAR14 ^ VAR12) >> 30) & 2) - 1) * VAR2->VAR29[VAR7].VAR35;
                VAR2->VAR29[VAR7].VAR31[VAR8] = VAR14 = VAR13;
                VAR15 = (VAR15 + 1) & 7;
                VAR16 = VAR16 * 3 + VAR13;
                if (VAR6 == VAR36)
                {
                    *VAR24++ = FUN3(VAR2, &VAR18, VAR13);
                }
                else if (VAR6 == VAR37)
                {
                    *VAR23++ = FUN4(VAR2, &VAR18, VAR13);
                }
                else
                {
                    *VAR21++ = FUN4(VAR2, &VAR18, VAR13);
                    VAR9++;
                }
                while (!VAR10 && VAR9 < VAR2->VAR38)
                    ;
                FUN5(VAR2);
                if (VAR2->VAR39->VAR40 & VAR41)
                {
                    int VAR42 = FUN6(VAR2, VAR16, VAR18);
                    if (VAR42 < 0 && VAR2->VAR39->VAR40 & VAR43)
                        return VAR42;
                    return 0