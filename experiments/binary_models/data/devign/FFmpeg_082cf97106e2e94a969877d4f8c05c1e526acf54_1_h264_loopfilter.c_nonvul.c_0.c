static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[4], int VAR7)
{
    const int VAR8 = VAR7 + VAR2->VAR9;
    const int VAR10 = (VAR11 + 52)[VAR8];
    const int VAR12 = (VAR13 + 52)[VAR7 + VAR2->VAR14];
    if (VAR10 == 0 || VAR12 == 0)
        return;
    if (VAR6[0] < 4)
    {
        int8_t VAR15[4];
        VAR15[0] = (VAR16 + 52)[VAR8][VAR6[0]] + 1;
        VAR15[1] = (VAR16 + 52)[VAR8][VAR6[1]] + 1;
        VAR15[2] = (VAR16 + 52)[VAR8][VAR6[2]] + 1;
        VAR15[3] = (VAR16 + 52)[VAR8][VAR6[3]] + 1;
        VAR2->VAR17.VAR18.FUN2(VAR4, VAR5, VAR10, VAR12, VAR15);
    }
    else
    {
        VAR2->VAR17.VAR18.FUN3(VAR4, VAR5, VAR10, VAR12);
    }
}