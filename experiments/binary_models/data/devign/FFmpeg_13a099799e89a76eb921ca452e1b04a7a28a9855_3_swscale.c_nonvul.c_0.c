static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5, const VAR3 *VAR6, const VAR3 *VAR7, VAR8 *VAR9[4], int VAR10, int VAR11)
{
    VAR8 *VAR12 = VAR9[0], *VAR13 = VAR9[1], *VAR14 = VAR9[2], *VAR15 = VAR16 ? VAR9[3] : NULL;
    int VAR17;
    for (VAR17 = 0; VAR17 < VAR10; VAR17++)
    {
        int VAR18 = (VAR4[VAR17] + 64) >> 7;
        VAR12[VAR17] = FUN2(VAR18);
    }
    if (VAR13)
        for (VAR17 = 0; VAR17 < VAR11; VAR17++)
        {
            int VAR19 = (VAR5[VAR17] + 64) >> 7;
            int VAR20 = (VAR6[VAR17] + 64) >> 7;
            VAR13[VAR17] = FUN2(VAR19);
            VAR14[VAR17] = FUN2(VAR20);
        }
    if (VAR16 && VAR15)
        for (VAR17 = 0; VAR17 < VAR10; VAR17++)
        {
            int VAR18 = (VAR7[VAR17] + 64) >> 7;
            VAR15[VAR17] = FUN2(VAR18);
        }
}