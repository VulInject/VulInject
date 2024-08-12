static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    const int VAR6 = 4 * VAR5->VAR7 + 4 * VAR5->VAR8 * VAR2->VAR9;
    const int VAR10 = 2 * VAR5->VAR7 + 2 * VAR5->VAR8 * VAR2->VAR11;
    int VAR12;
    if (!FUN2(VAR3, 0))
        FUN3(&VAR5->VAR13.VAR14[0][VAR10], 2, 2, VAR2->VAR11, (VAR15)VAR16, 1);
    for (VAR12 = 0; VAR12 < VAR2->VAR17; VAR12++)
    {
        int VAR18;
        if (!FUN2(VAR3, VAR12))
            continue;
        for (VAR18 = 0; VAR18 < 4; VAR18++)
        {
            *(VAR19 *)VAR5->VAR13.VAR20[VAR12][VAR6 + 0 + VAR18 * VAR2->VAR9] = *(VAR19 *)VAR2->VAR21[VAR12][VAR22[0] + 0 + 8 * VAR18];
            *(VAR19 *)VAR5->VAR13.VAR20[VAR12][VAR6 + 2 + VAR18 * VAR2->VAR9] = *(VAR19 *)VAR2->VAR21[VAR12][VAR22[0] + 2 + 8 * VAR18];
        }
        if (VAR2->VAR23.VAR24)
        {
            if (FUN4(VAR3))
                FUN3(VAR2->VAR25[VAR12][VAR6], 4, 4, VAR2->VAR9, 0, 4);
            else
                for (VAR18 = 0; VAR18 < 4; VAR18++)
                {
                    *(VAR19 *)VAR2->VAR25[VAR12][VAR6 + 0 + VAR18 * VAR2->VAR9] = *(VAR19 *)VAR2->VAR26[VAR12][VAR22[0] + 0 + 8 * VAR18];
                    *(VAR19 *)VAR2->VAR25[VAR12][VAR6 + 2 + VAR18 * VAR2->VAR9] = *(VAR19 *)VAR2->VAR26[VAR12][VAR22[0] + 2 + 8 * VAR18];
                }
        }
        {
            VAR27 *VAR14 = &VAR5->VAR13.VAR14[VAR12][VAR10];
            VAR14[0 + 0 * VAR2->VAR11] = VAR2->VAR28[VAR12][VAR22[0]];
            VAR14[1 + 0 * VAR2->VAR11] = VAR2->VAR28[VAR12][VAR22[4]];
            VAR14[0 + 1 * VAR2->VAR11] = VAR2->VAR28[VAR12][VAR22[8]];
            VAR14[1 + 1 * VAR2->VAR11] = VAR2->VAR28[VAR12][VAR22[12]];
        }
    }
    if (VAR2->VAR29 == VAR30 && VAR2->VAR23.VAR24)
    {
        if (FUN5(VAR3))
        {
            VAR15 *VAR31 = &VAR2->VAR31[VAR10];
            VAR31[1 + 0 * VAR2->VAR11] = FUN6(VAR2->VAR32[1]) ? 1 : 0;
            VAR31[0 + 1 * VAR2->VAR11] = FUN6(VAR2->VAR32[2]) ? 1 : 0;
            VAR31[1 + 1 * VAR2->VAR11] = FUN6(VAR2->VAR32[3]) ? 1 : 0;
        }
    }
}