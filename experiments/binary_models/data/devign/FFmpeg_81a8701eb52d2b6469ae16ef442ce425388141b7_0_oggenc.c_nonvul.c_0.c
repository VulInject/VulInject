static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned VAR7, int64_t VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR4->VAR12;
    VAR13 *VAR14 = VAR2->VAR12;
    int VAR15 = VAR7 / 255 + 1;
    VAR5 *VAR16 = VAR6;
    int VAR17, VAR18, VAR19, VAR20 = 0;
    if (VAR4->VAR21->VAR22 == VAR23 && !VAR9 && (FUN2(VAR11, VAR8) > FUN2(VAR11, VAR11->VAR24) + 1 || FUN3(VAR11, VAR8)))
    {
        if (VAR11->VAR25.VAR8 != -1)
            FUN4(VAR2, VAR11);
        VAR20 = 1;
    }
    if (!VAR9 && VAR11->VAR25.VAR7 > 0 && VAR26 - VAR11->VAR25.VAR7 < VAR7)
    {
        FUN4(VAR2, VAR11);
    }
    for (VAR17 = 0; VAR17 < VAR15;)
    {
        VAR27 *VAR25 = &VAR11->VAR25;
        VAR18 = FUN5(VAR15 - VAR17, 255 - VAR25->VAR28);
        if (VAR17 && !VAR25->VAR28)
            VAR25->VAR29 |= 1;
        memset(VAR25->VAR18 + VAR25->VAR28, 255, VAR18 - 1);
        VAR25->VAR28 += VAR18 - 1;
        VAR19 = FUN5(VAR7, VAR18 * 255);
        VAR25->VAR18[VAR25->VAR28++] = VAR19 - (VAR18 - 1) * 255;
        memcpy(VAR25->VAR6 + VAR25->VAR7, VAR16, VAR19);
        VAR16 += VAR19;
        VAR7 -= VAR19;
        VAR17 += VAR18;
        VAR25->VAR7 += VAR19;
        if (VAR17 == VAR15)
            VAR25->VAR8 = VAR8;
        {
            VAR3 *VAR4 = VAR2->VAR30[VAR25->VAR31];
            int64_t VAR32 = FUN6(VAR25->VAR33, VAR4->VAR34, VAR35);
            int64_t VAR36 = FUN6(VAR25->VAR8, VAR4->VAR34, VAR35);
            if (VAR25->VAR28 == 255)
            {
                FUN4(VAR2, VAR11);
            }
            else if (!VAR9)
            {
                if ((VAR14->VAR37 > 0 && VAR25->VAR7 >= VAR14->VAR37) || (VAR14->VAR38 > 0 && VAR36 - VAR32 >= VAR14->VAR38))
                {
                    FUN4(VAR2, VAR11);
                }
            }
        }
    }
    if (VAR20 && VAR11->VAR25.VAR8 != -1)
        FUN4(VAR2, VAR11);
    return 0;
}