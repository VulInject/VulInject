static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = *(void **)VAR3;
    VAR4 *VAR6 = VAR5->VAR7->VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    const int VAR14 = (FUN2(VAR2->VAR15)->VAR16 & VAR17) ? (VAR2->VAR18 > 8) + 1 : 4;
    VAR19 *const VAR20 = VAR6->VAR21;
    if (VAR6->VAR22 > 2)
    {
        if (FUN3(VAR6, VAR5) < 0)
        {
            VAR5->VAR23 = 1;
            return VAR24;
        }
    }
    if ((VAR13 = FUN4(VAR6, VAR5)) < 0)
        return VAR13;
    if (VAR6->VAR21->VAR25)
        FUN5(VAR6, VAR5);
    VAR9 = VAR5->VAR26;
    VAR10 = VAR5->VAR27;
    VAR11 = VAR5->VAR28;
    VAR12 = VAR5->VAR29;
    if (VAR5->VAR30 == VAR31)
    {
        if (VAR6->VAR22 == 3 && VAR6->VAR32 > 1 || VAR6->VAR22 > 3)
            FUN6(&VAR5->VAR2, (VAR33[]){129});
        VAR5->VAR34 = VAR6->VAR22 > 2 || (!VAR11 && !VAR12) ? VAR5->VAR2.VAR35 - VAR5->VAR2.VAR36 - 1 : 0;
        FUN7(&VAR5->VAR37, VAR5->VAR2.VAR36 + VAR5->VAR34, (VAR5->VAR2.VAR38 - VAR5->VAR2.VAR36 - VAR5->VAR34) * 8);
    }
    FUN8(VAR9 && VAR10);
    if (VAR6->VAR39 == 0)
    {
        const int VAR40 = -((-VAR9) >> VAR6->VAR41);
        const int VAR42 = -((-VAR10) >> VAR6->VAR43);
        const int VAR44 = VAR11 >> VAR6->VAR41;
        const int VAR45 = VAR12 >> VAR6->VAR43;
        FUN9(VAR5, VAR20->VAR46[0] + VAR14 * VAR11 + VAR12 * VAR20->VAR47[0], VAR9, VAR10, VAR20->VAR47[0], 0);
        if (VAR6->VAR48)
        {
            FUN9(VAR5, VAR20->VAR46[1] + VAR14 * VAR44 + VAR45 * VAR20->VAR47[1], VAR40, VAR42, VAR20->VAR47[1], 1);
            FUN9(VAR5, VAR20->VAR46[2] + VAR14 * VAR44 + VAR45 * VAR20->VAR47[2], VAR40, VAR42, VAR20->VAR47[2], 1);
        }
        if (VAR5->VAR49)
            FUN9(VAR5, VAR20->VAR46[3] + VAR14 * VAR11 + VAR12 * VAR20->VAR47[3], VAR9, VAR10, VAR20->VAR47[3], 2);
    }
    else
    {
        VAR33 *VAR50[3] = {VAR20->VAR46[0] + VAR14 * VAR11 + VAR12 * VAR20->VAR47[0], VAR20->VAR46[1] + VAR14 * VAR11 + VAR12 * VAR20->VAR47[1], VAR20->VAR46[2] + VAR14 * VAR11 + VAR12 * VAR20->VAR47[2]};
        FUN10(VAR5, VAR50, VAR9, VAR10, VAR20->VAR47);
    }
    if (VAR5->VAR30 != VAR31 && VAR6->VAR22 > 2)
    {
        int VAR51;
        FUN6(&VAR5->VAR2, (VAR33[]){129});
        VAR51 = VAR5->VAR2.VAR38 - VAR5->VAR2.VAR35 - 2 - 5 * VAR6->VAR52;
        if (VAR51)
        {
            FUN11(VAR6->VAR7, VAR53, "", VAR51);
            VAR5->VAR23 = 1;
        }
    }
    FUN12();
    return 0;
}