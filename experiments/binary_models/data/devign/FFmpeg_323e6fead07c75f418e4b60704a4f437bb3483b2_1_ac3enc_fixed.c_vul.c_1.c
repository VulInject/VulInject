static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR5 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    VAR10 = 1 << VAR2->VAR18;
    VAR11 = VAR10 >> 1;
    VAR12 = VAR10 >> 2;
    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
        VAR13[VAR7] = -VAR6[VAR7 + 3 * VAR12];
    memcpy(&VAR13[VAR12], &VAR6[0], 3 * VAR12 * sizeof(*VAR6));
    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
    {
        VAR8 = ((int)VAR13[2 * VAR7] - (int)VAR13[VAR10 - 1 - 2 * VAR7]) >> 1;
        VAR9 = -((int)VAR13[VAR11 + 2 * VAR7] - (int)VAR13[VAR11 - 1 - 2 * VAR7]) >> 1;
        FUN2(VAR16[VAR7].VAR8, VAR16[VAR7].VAR9, VAR8, VAR9, -VAR2->VAR19[VAR7], VAR2->VAR20[VAR7]);
    }
    FUN3(VAR2, VAR16, VAR2->VAR18 - 2);
    for (VAR7 = 0; VAR7 < VAR12; VAR7++)
    {
        VAR8 = VAR16[VAR7].VAR8;
        VAR9 = VAR16[VAR7].VAR9;
        FUN2(VAR4[VAR11 - 1 - 2 * VAR7], VAR4[2 * VAR7], VAR8, VAR9, VAR2->VAR20[VAR7], VAR2->VAR19[VAR7]);
    }
}