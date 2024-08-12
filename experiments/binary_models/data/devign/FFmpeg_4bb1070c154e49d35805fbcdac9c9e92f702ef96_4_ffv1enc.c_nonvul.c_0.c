static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = *(void **)VAR3;
    VAR4 *VAR6 = VAR5->VAR7->VAR8;
    int VAR9 = VAR5->VAR10;
    int VAR11 = VAR5->VAR12;
    int VAR13 = VAR5->VAR14;
    int VAR15 = VAR5->VAR16;
    const VAR17 *const VAR18 = VAR6->VAR19;
    const int VAR20 = (FUN2(VAR2->VAR21)->VAR22 & VAR23) ? (VAR6->VAR24 > 8) + 1 : 4;
    if (VAR6->VAR25)
        FUN3(VAR6, VAR5);
    if (VAR6->VAR26 > 2)
    {
        FUN4(VAR6, VAR5);
    }
    if (VAR5->VAR27 == VAR28)
    {
        if (VAR6->VAR26 > 2)
            FUN5(&VAR5->VAR2, (VAR29[]){129}, 0);
        VAR5->VAR30 = VAR6->VAR26 > 2 || (!VAR13 && !VAR15) ? FUN6(&VAR5->VAR2) : 0;
        FUN7(&VAR5->VAR31, VAR5->VAR2.VAR32 + VAR5->VAR30, VAR5->VAR2.VAR33 - VAR5->VAR2.VAR32 - VAR5->VAR30);
    }
    if (VAR6->VAR34 == 0)
    {
        const int VAR35 = -((-VAR9) >> VAR6->VAR36);
        const int VAR37 = -((-VAR11) >> VAR6->VAR38);
        const int VAR39 = VAR13 >> VAR6->VAR36;
        const int VAR40 = VAR15 >> VAR6->VAR38;
        FUN8(VAR5, VAR18->VAR41[0] + VAR20 * VAR13 + VAR15 * VAR18->VAR42[0], VAR9, VAR11, VAR18->VAR42[0], 0);
        if (VAR6->VAR43)
        {
            FUN8(VAR5, VAR18->VAR41[1] + VAR20 * VAR39 + VAR40 * VAR18->VAR42[1], VAR35, VAR37, VAR18->VAR42[1], 1);
            FUN8(VAR5, VAR18->VAR41[2] + VAR20 * VAR39 + VAR40 * VAR18->VAR42[2], VAR35, VAR37, VAR18->VAR42[2], 1);
        }
        if (VAR5->VAR44)
            FUN8(VAR5, VAR18->VAR41[3] + VAR20 * VAR13 + VAR15 * VAR18->VAR42[3], VAR9, VAR11, VAR18->VAR42[3], 2);
    }
    else
    {
        const VAR29 *VAR45[3] = {VAR18->VAR41[0] + VAR20 * VAR13 + VAR15 * VAR18->VAR42[0], VAR18->VAR41[1] + VAR20 * VAR13 + VAR15 * VAR18->VAR42[1], VAR18->VAR41[2] + VAR20 * VAR13 + VAR15 * VAR18->VAR42[2]};
        FUN9(VAR5, VAR45, VAR9, VAR11, VAR18->VAR42);
    }
    FUN10();
    return 0;
}