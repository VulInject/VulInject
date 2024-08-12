int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    int VAR11[10][2];
    const int VAR12 = 1 + VAR2->VAR13;
    const int VAR14 = VAR3 + VAR4 * VAR2->VAR15;
    FUN2(VAR6, VAR2->VAR16.VAR17.VAR18, VAR2->VAR19.VAR17.VAR18, NULL, 16 * VAR3, 16 * VAR4, 0);
    assert(VAR2->VAR13 == 0 || VAR2->VAR13 == 1);
    VAR6->VAR20 = FUN3(VAR2->VAR21, VAR2->VAR22, VAR6->VAR23->VAR24);
    VAR6->VAR25 = VAR6->VAR26[VAR2->VAR27] + VAR28;
    FUN4(VAR2, 16 * VAR3, 16 * VAR4);
    VAR6->VAR29 = 0;
    VAR30[0] = VAR2->VAR31[VAR14 + 1][0];
    VAR30[1] = VAR2->VAR31[VAR14 + 1][1];
    if (VAR30[0] < (VAR6->VAR32 << VAR12))
        VAR30[0] = (VAR6->VAR32 << VAR12);
    if (VAR2->VAR33)
    {
        VAR6->VAR34 = VAR30[0];
        VAR6->VAR35 = VAR30[1];
        VAR36[0] = VAR37[0] = VAR38[0] = VAR36[1] = VAR37[1] = VAR38[1] = 0;
    }
    else
    {
        VAR36[0] = VAR2->VAR31[VAR14 + VAR2->VAR15][0];
        VAR36[1] = VAR2->VAR31[VAR14 + VAR2->VAR15][1];
        VAR37[0] = VAR2->VAR31[VAR14 + VAR2->VAR15 - 1][0];
        VAR37[1] = VAR2->VAR31[VAR14 + VAR2->VAR15 - 1][1];
        if (VAR36[1] < (VAR6->VAR39 << VAR12))
            VAR36[1] = (VAR6->VAR39 << VAR12);
        if (VAR37[0] > (VAR6->VAR40 << VAR12))
            VAR37[0] = (VAR6->VAR40 << VAR12);
        if (VAR37[1] < (VAR6->VAR39 << VAR12))
            VAR37[1] = (VAR6->VAR39 << VAR12);
        VAR38[0] = FUN5(VAR30[0], VAR36[0], VAR37[0]);
        VAR38[1] = FUN5(VAR30[1], VAR36[1], VAR37[1]);
        VAR6->VAR34 = VAR38[0];
        VAR6->VAR35 = VAR38[1];
    }
    VAR10 = FUN6(VAR2, &VAR8, &VAR9, VAR11, 0, 0, VAR2->VAR31, (1 << 16) >> VAR12, 0, 16);
    VAR2->VAR31[VAR14][0] = VAR8 << VAR12;
    VAR2->VAR31[VAR14][1] = VAR9 << VAR12;
    return VAR10;
}