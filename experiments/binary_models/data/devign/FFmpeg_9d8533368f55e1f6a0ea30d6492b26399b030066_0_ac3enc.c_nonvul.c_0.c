static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    int16_t VAR10[VAR11];
    IComplex VAR12[VAR11 / 4];
    for (VAR5 = 0; VAR5 < VAR11 / 4; VAR5++)
        VAR10[VAR5] = -VAR4[VAR5 + 3 * VAR11 / 4];
    memcpy(&VAR10[VAR11 / 4], &VAR4[0], 3 * VAR11 / 4 * sizeof(*VAR4));
    for (VAR5 = 0; VAR5 < VAR11 / 4; VAR5++)
    {
        VAR6 = ((int)VAR10[2 * VAR5] - (int)VAR10[VAR11 - 1 - 2 * VAR5]) >> 1;
        VAR7 = -((int)VAR10[VAR11 / 2 + 2 * VAR5] - (int)VAR10[VAR11 / 2 - 1 - 2 * VAR5]) >> 1;
        FUN2(VAR12[VAR5].VAR6, VAR12[VAR5].VAR7, VAR6, VAR7, -VAR13[VAR5], VAR14[VAR5]);
    }
    FUN3(VAR12, VAR15 - 2);
    for (VAR5 = 0; VAR5 < VAR11 / 4; VAR5++)
    {
        VAR6 = VAR12[VAR5].VAR6;
        VAR7 = VAR12[VAR5].VAR7;
        FUN2(VAR8, VAR9, VAR6, VAR7, VAR14[VAR5], VAR13[VAR5]);
        VAR2[2 * VAR5] = VAR9;
        VAR2[VAR11 / 2 - 1 - 2 * VAR5] = VAR8;
    }
}