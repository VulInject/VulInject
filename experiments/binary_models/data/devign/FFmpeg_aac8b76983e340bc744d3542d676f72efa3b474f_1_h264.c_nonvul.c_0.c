static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[4], int VAR7)
{
    int VAR8;
    const int VAR9 = VAR7 + VAR2->VAR10;
    const int VAR11 = (VAR12 + 52)[VAR9];
    const int VAR13 = (VAR14 + 52)[VAR7 + VAR2->VAR15];
    if (VAR6[0] < 4)
    {
        int8_t VAR16[4];
        VAR16[0] = (VAR17 + 52)[VAR9][VAR6[0]] + 1;
        VAR16[1] = (VAR17 + 52)[VAR9][VAR6[1]] + 1;
        VAR16[2] = (VAR17 + 52)[VAR9][VAR6[2]] + 1;
        VAR16[3] = (VAR17 + 52)[VAR9][VAR6[3]] + 1;
        VAR2->VAR18.VAR19.FUN2(VAR4, VAR5, VAR11, VAR13, VAR16);
    }
    else
    {
        VAR2->VAR18.VAR19.FUN3(VAR4, VAR5, VAR11, VAR13);
    }
}