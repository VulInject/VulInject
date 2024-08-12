static void FUN1(VAR1 *VAR2, int VAR3, const float *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12[VAR3];
    int VAR13 = 0;
    int VAR14, VAR15, VAR16;
    const int VAR17 = VAR2->VAR17[VAR6->VAR18 == 8];
    const VAR19 *VAR20 = VAR2->VAR21[VAR6->VAR18 == 8];
    VAR22 *VAR23 = &VAR8->VAR24[VAR6->VAR18 == 8];
    for (VAR15 = 0; VAR15 < VAR6->VAR18 * 16; VAR15 += 16)
    {
        for (VAR16 = 0; VAR16 < VAR17; VAR16++)
        {
            VAR25 *VAR26 = &VAR11->VAR26[VAR15 + VAR16];
            VAR26->VAR27 = 0.0f;
            for (VAR14 = 0; VAR14 < VAR20[VAR16]; VAR14++)
                VAR26->VAR27 += VAR4[VAR13 + VAR14] * VAR4[VAR13 + VAR14];
            VAR26->VAR28 = VAR26->VAR27 * 0.001258925f;
            VAR13 += VAR20[VAR16];
        }
    }
    for (VAR15 = 0; VAR15 < VAR6->VAR18 * 16; VAR15 += 16)
    {
        VAR25 *VAR21 = &VAR11->VAR26[VAR15];
        for (VAR16 = 1; VAR16 < VAR17; VAR16++)
            VAR21[VAR16].VAR28 = FUN2(VAR21[VAR16].VAR28, VAR21[VAR16 - 1].VAR28 * VAR23[VAR16].VAR29[0]);
        for (VAR16 = VAR17 - 2; VAR16 >= 0; VAR16--)
            VAR21[VAR16].VAR28 = FUN2(VAR21[VAR16].VAR28, VAR21[VAR16 + 1].VAR28 * VAR23[VAR16].VAR30[0]);
        for (VAR16 = 0; VAR16 < VAR17; VAR16++)
        {
            VAR25 *VAR26 = &VAR21[VAR16];
            VAR26->VAR31 = VAR26->VAR28 = FUN2(VAR26->VAR28, VAR23[VAR16].VAR32);
            if (!(VAR6->VAR33[0] == VAR34 || (VAR6->VAR33[1] == VAR35 && !VAR15)))
                VAR26->VAR28 = FUN2(VAR36 * VAR26->VAR28, FUN3(VAR26->VAR28, VAR37 * VAR11->VAR38[VAR15 + VAR16].VAR31));
        }
    }
    for (VAR15 = 0; VAR15 < VAR6->VAR18 * 16; VAR15 += 16)
    {
        for (VAR16 = 0; VAR16 < VAR17; VAR16++)
        {
            VAR25 *VAR26 = &VAR11->VAR26[VAR15 + VAR16];
            VAR39 *VAR40 = &VAR2->VAR41[VAR3 * VAR42 + VAR15 + VAR16];
            VAR40->VAR43 = VAR26->VAR28;
            VAR40->VAR27 = VAR26->VAR27;
        }
    }
    memcpy(VAR11->VAR38, VAR11->VAR26, sizeof(VAR11->VAR26));
}