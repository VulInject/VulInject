static int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4 = VAR2->VAR5.VAR4;
    int VAR6 = (VAR7 && VAR2->VAR8->VAR9 & VAR10) ? VAR2->VAR8->VAR11 : 1;
    int VAR12, VAR13;
    FUN2(VAR2->VAR8, VAR4->VAR14);
    FUN3(VAR2->VAR8->VAR15, &VAR2->VAR16, &VAR2->VAR17);
    if (VAR4->VAR18)
    {
        int64_t VAR19 = VAR4->VAR20;
        if (VAR2->VAR21 < 44U)
            VAR19 *= 2;
        FUN4(&VAR2->VAR8->VAR22.VAR19, &VAR2->VAR8->VAR22.VAR23, VAR4->VAR24, VAR19, 1 << 30);
    }
    FUN5(VAR2);
    VAR2->VAR25 = 0;
    VAR2->VAR26 = 1;
    FUN6(VAR2);
    VAR13 = FUN7(VAR2);
    if (VAR13 < 0)
    {
        FUN8(VAR2->VAR8, VAR27, "");
        return VAR13;
    }
    if (VAR4->VAR28 < 8 || VAR4->VAR28 > 10)
    {
        FUN8(VAR2->VAR8, VAR27, "", VAR4->VAR28);
        return VAR29;
    }
    VAR2->VAR8->VAR30 = VAR4->VAR28;
    VAR2->VAR31 = VAR4->VAR28 > 8;
    VAR2->VAR32 = VAR4->VAR32;
    VAR2->VAR28 = VAR4->VAR28;
    FUN9(&VAR2->VAR33, VAR4->VAR28, VAR4->VAR32);
    FUN10(&VAR2->VAR34, VAR4->VAR35);
    FUN11(&VAR2->VAR36, VAR4->VAR28);
    FUN12(&VAR2->VAR37, VAR2->VAR8->VAR38, VAR4->VAR28, VAR4->VAR32);
    FUN13(&VAR2->VAR39, VAR4->VAR28);
    if (VAR6 > VAR40 || (VAR6 > VAR2->VAR41 && VAR2->VAR41))
    {
        int VAR42;
        if (VAR2->VAR41)
            VAR42 = FUN14(VAR40, VAR2->VAR41);
        else
            VAR42 = VAR40;
        FUN8(VAR2->VAR8, VAR43, ""
                                         "",
               VAR6, VAR42);
        VAR6 = VAR42;
    }
    VAR2->VAR44 = VAR6;
    if (!VAR7 || !(VAR2->VAR8->VAR9 & VAR10))
    {
        VAR13 = FUN15(VAR2, &VAR2->VAR45[0]);
        if (VAR13 < 0)
        {
            FUN8(VAR2->VAR8, VAR27, "");
            return VAR13;
        }
    }
    else
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR44; VAR12++)
        {
            VAR46 *VAR47 = &VAR2->VAR45[VAR12];
            VAR47->VAR48 = VAR2;
            VAR47->VAR49 = VAR2->VAR49 + VAR12 * 8 * 2 * VAR2->VAR50;
            VAR47->VAR51[0] = VAR2->VAR51[0] + VAR12 * 8 * 2 * VAR2->VAR50;
            VAR47->VAR51[1] = VAR2->VAR51[1] + VAR12 * 8 * 2 * VAR2->VAR50;
            if ((VAR13 = FUN15(VAR2, VAR47)) < 0)
            {
                FUN8(VAR2->VAR8, VAR27, "");
                return VAR13;
            }
        }
    }
    VAR2->VAR52 = 1;
    return 0;
}