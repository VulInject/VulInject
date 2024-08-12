static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR14;
    int VAR15 = VAR16;
    GetBitContext VAR17;
    int VAR18 = 0;
    int VAR19 = VAR9 ? VAR20 : 8;
    if (VAR2->VAR21 & VAR22)
    {
        TAKStreamInfo VAR23;
        FUN2(&VAR17, VAR8, VAR9);
        if (!FUN3(VAR4, &VAR17, &VAR23, 127))
            VAR2->VAR24 = VAR11->VAR23.VAR25 ? VAR11->VAR23.VAR25 : VAR11->VAR23.VAR26;
        *VAR6 = VAR8;
        *VAR7 = VAR9;
        return VAR9;
    }
    while (VAR9 || VAR11->VAR27 + VAR19 <= VAR14->VAR27)
    {
        if (VAR9 && VAR11->VAR27 + VAR20 > VAR14->VAR27)
        {
            int VAR28 = FUN4(2 * VAR20, VAR9);
            const VAR5 *VAR29 = VAR8;
            if (FUN5(VAR14, VAR16, &VAR29, &VAR28) != -1)
                return FUN6(VAR30);
            VAR18 += VAR28;
            VAR8 += VAR28;
            VAR9 -= VAR28;
        }
        for (; VAR11->VAR27 + VAR19 <= VAR14->VAR27; VAR11->VAR27++)
        {
            if (VAR14->VAR31[VAR11->VAR27] == 0xFF && VAR14->VAR31[VAR11->VAR27 + 1] == 0xA0)
            {
                TAKStreamInfo VAR23;
                FUN2(&VAR17, VAR14->VAR31 + VAR11->VAR27, 8 * (VAR14->VAR27 - VAR11->VAR27));
                if (!FUN3(VAR4, &VAR17, VAR14->VAR32 ? &VAR23 : &VAR11->VAR23, 127) && !FUN7(VAR14->VAR31 + VAR11->VAR27, FUN8(&VAR17) / 8))
                {
                    if (!VAR14->VAR32)
                    {
                        VAR14->VAR32 = 1;
                        VAR2->VAR24 = VAR11->VAR23.VAR25 ? VAR11->VAR23.VAR25 : VAR11->VAR23.VAR26;
                    }
                    else
                    {
                        VAR14->VAR32 = 0;
                        VAR15 = VAR11->VAR27 - VAR14->VAR27;
                        VAR11->VAR27 = 0;
                        goto VAR33;
                    }
                }
            }
        }
    }
VAR33:
    if (VAR18 && !VAR9 && VAR15 == VAR16 || FUN5(VAR14, VAR15, &VAR8, &VAR9) < 0)
    {
        *VAR6 = NULL;
        *VAR7 = 0;
        return VAR9 + VAR18;
    }
    if (VAR15 != VAR16)
    {
        VAR15 += VAR18;
        VAR14->VAR34 = FUN9(0, -VAR15);
    }
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
}