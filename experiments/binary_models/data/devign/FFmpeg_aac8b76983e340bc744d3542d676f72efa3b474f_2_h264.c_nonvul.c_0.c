static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[4], int VAR7)
{
    int VAR8, VAR9;
    const int VAR10 = VAR7 + VAR2->VAR11;
    const int VAR12 = (VAR13 + 52)[VAR10];
    const int VAR14 = (VAR15 + 52)[VAR7 + VAR2->VAR16];
    const int VAR17 = VAR5;
    if (VAR6[0] < 4)
    {
        int8_t VAR18[4];
        VAR18[0] = (VAR19 + 52)[VAR10][VAR6[0]];
        VAR18[1] = (VAR19 + 52)[VAR10][VAR6[1]];
        VAR18[2] = (VAR19 + 52)[VAR10][VAR6[2]];
        VAR18[3] = (VAR19 + 52)[VAR10][VAR6[3]];
        VAR2->VAR20.VAR21.FUN2(VAR4, VAR5, VAR12, VAR14, VAR18);
    }
    else
    {
        VAR2->VAR20.VAR21.FUN3(VAR4, VAR5, VAR12, VAR14);
    }
}