static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    static const int VAR6 = sizeof(VAR2->VAR7[0]) / sizeof(VAR8);
    static const int VAR9 = (VAR6 / 2);
    int VAR10 = VAR2->VAR11[VAR5];
    uint16_t VAR12 = VAR2->VAR13;
    uint16_t VAR14 = VAR2->VAR15;
    int VAR16, VAR17;
    VAR16 = VAR2->VAR18.VAR19[0][VAR10][0];
    if ((unsigned)(VAR16 + VAR9) < VAR6)
    {
        VAR2->VAR20[0][VAR5][0] = VAR2->VAR7[0][VAR16 + VAR9] + VAR3;
        VAR2->VAR20[1][VAR5][0] = VAR3 ? VAR2->VAR20[0][VAR5][0] - VAR16 : VAR2->VAR7[1][VAR16 + VAR9];
    }
    else
    {
        VAR2->VAR20[0][VAR5][0] = VAR16 * VAR14 / VAR12 + VAR3;
        VAR2->VAR20[1][VAR5][0] = VAR3 ? VAR2->VAR20[0][VAR5][0] - VAR16 : VAR16 * (VAR14 - VAR12) / VAR12;
    }
    VAR17 = VAR2->VAR18.VAR19[0][VAR10][1];
    if ((unsigned)(VAR17 + VAR9) < VAR6)
    {
        VAR2->VAR20[0][VAR5][1] = VAR2->VAR7[0][VAR17 + VAR9] + VAR4;
        VAR2->VAR20[1][VAR5][1] = VAR4 ? VAR2->VAR20[0][VAR5][1] - VAR17 : VAR2->VAR7[1][VAR17 + VAR9];
    }
    else
    {
        VAR2->VAR20[0][VAR5][1] = VAR17 * VAR14 / VAR12 + VAR4;
        VAR2->VAR20[1][VAR5][1] = VAR4 ? VAR2->VAR20[0][VAR5][1] - VAR17 : VAR17 * (VAR14 - VAR12) / VAR12;
    }
}