static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[7], int VAR7, int VAR8)
{
    const int VAR9 = 6 * (VAR2->VAR10.VAR11 - 8);
    int VAR12 = VAR8 - VAR9 + VAR2->VAR13;
    int VAR14 = VAR15[VAR12];
    int VAR16 = VAR17[VAR8 - VAR9 + VAR2->VAR18];
    if (VAR14 == 0 || VAR16 == 0)
        return;
    if (VAR6[0] < 4)
    {
        int8_t VAR19[4];
        VAR19[0] = VAR20[VAR12][VAR6[0 * VAR7]] + 1;
        VAR19[1] = VAR20[VAR12][VAR6[1 * VAR7]] + 1;
        VAR19[2] = VAR20[VAR12][VAR6[2 * VAR7]] + 1;
        VAR19[3] = VAR20[VAR12][VAR6[3 * VAR7]] + 1;
        VAR2->VAR21.FUN2(VAR4, VAR5, VAR14, VAR16, VAR19);
    }
    else
    {
        VAR2->VAR21.FUN3(VAR4, VAR5, VAR14, VAR16);
    }
}