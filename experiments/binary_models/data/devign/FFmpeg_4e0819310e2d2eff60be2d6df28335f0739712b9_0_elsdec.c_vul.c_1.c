unsigned FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    if (VAR2->VAR11)
        return 0;
    for (VAR6 = 0; VAR6 < VAR12 + 1; VAR6++)
        if (FUN2(VAR2, &VAR4->VAR13[VAR6]))
            break;
    if (VAR2->VAR11 || VAR6 >= VAR12)
    {
        VAR2->VAR11 = FUN3(VAR14);
        return 0;
    }
    if (!VAR6)
        return 0;
    if (!VAR4->VAR15)
    {
        VAR4->VAR15 = FUN4(NULL, VAR16);
        if (!VAR4->VAR15)
        {
            VAR2->VAR11 = FUN3(VAR17);
            return 0;
        }
        memset(VAR4->VAR15, 0, VAR16);
        VAR4->VAR18 = VAR16;
        VAR4->VAR19 = VAR12;
    }
    for (VAR5 = 0, VAR7 = 0, VAR8 = 0; VAR5 < VAR6; VAR5++)
    {
        if (!VAR5)
            VAR10 = &VAR4->VAR15[VAR6];
        else
        {
            if (!VAR10->VAR20)
            {
                if (VAR4->VAR18 <= (VAR4->VAR19 + 2) * sizeof(VAR9))
                {
                    ptrdiff_t VAR21 = VAR10 - VAR4->VAR15;
                    VAR4->VAR15 = FUN4(VAR4->VAR15, VAR4->VAR18 + VAR16);
                    if (!VAR4->VAR15)
                    {
                        FUN5(VAR4->VAR15);
                        VAR2->VAR11 = FUN3(VAR17);
                        return 0;
                    }
                    memset((VAR22 *)VAR4->VAR15 + VAR4->VAR18, 0, VAR16);
                    VAR4->VAR18 += VAR16;
                    VAR10 = &VAR4->VAR15[VAR21];
                }
                VAR10->VAR20 = VAR4->VAR19;
                VAR4->VAR19 += 2;
            }
            VAR10 = &VAR4->VAR15[VAR10->VAR20 + VAR8];
        }
        VAR8 = FUN2(VAR2, &VAR10->VAR23);
        if (VAR2->VAR11)
            return VAR8;
        VAR7 = (VAR7 << 1) + VAR8;
    }
    return (1 << VAR6) - 1 + VAR7;
}