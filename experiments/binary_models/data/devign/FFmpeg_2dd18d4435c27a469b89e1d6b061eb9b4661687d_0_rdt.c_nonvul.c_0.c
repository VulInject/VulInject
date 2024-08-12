FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9[VAR3];
    const char *VAR10 = VAR6;
    if (FUN2(VAR10, "", &VAR10))
    {
        VAR5->VAR11 = FUN3(&VAR5->VAR12, VAR10);
    }
    else if (FUN2(VAR10, "", &VAR10))
        VAR8->VAR13 = FUN4(VAR10);
    else if (FUN2(VAR10, "", &VAR10))
    {
        int VAR14, VAR15 = -1;
        for (VAR14 = 0; VAR14 < VAR2->VAR16; VAR14++)
            if (VAR2->VAR9[VAR14]->VAR17 == VAR8->VAR17)
            {
                int VAR18 = VAR2->VAR9[VAR14]->VAR19 + 1;
                if (VAR15 == -1)
                    VAR15 = VAR14;
                if (VAR5->VAR20 < VAR18)
                {
                    VAR21 **VAR22 = FUN5(VAR5->VAR22, VAR18 * sizeof(*VAR22));
                    if (!VAR22)
                        return FUN6(VAR23);
                    memset(VAR22 + VAR5->VAR20, 0, (VAR18 - VAR5->VAR20) * sizeof(*VAR22));
                    VAR5->VAR22 = VAR22;
                    VAR5->VAR20 = VAR18;
                }
                VAR5->VAR22[VAR2->VAR9[VAR14]->VAR19] = FUN7();
                FUN8(VAR5, VAR2->VAR9[VAR14], (VAR14 - VAR15) * 2);
            }
    }
    return 0;
}