static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6 = VAR2->VAR7 ? 0 : VAR5;
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10 = 0;
    while (1)
    {
        int VAR11 = 0;
        int VAR12, VAR13, VAR14;
        const VAR3 *VAR15;
        if (VAR9 >= VAR6)
        {
            VAR11 = FUN2(VAR2, VAR4, VAR5, &VAR9);
            if (VAR11 < 0)
                break;
            VAR6 = VAR9 + VAR11;
        }
        else
        {
            VAR9 = FUN3(VAR4, VAR5, VAR9, VAR6);
            if (VAR9 >= VAR5)
                break;
        }
        VAR15 = FUN4(VAR2, VAR4 + VAR9, &VAR12, &VAR14, VAR6 - VAR9);
        if (!VAR15 || VAR12 < 0)
            return VAR16;
        VAR9 += VAR14;
        VAR13 = FUN5(VAR2, VAR4, VAR15, VAR12, VAR9, VAR6);
        VAR8++;
        switch (VAR2->VAR17)
        {
        case VAR18:
        case VAR19:
            VAR10 = VAR8;
            break;
        case VAR20:
        case VAR21:
        case VAR22:
            FUN6(&VAR2->VAR23, VAR15, VAR13);
            if (!FUN7(&VAR2->VAR23))
                VAR10 = VAR8;
        }
    }
    return VAR10;
}