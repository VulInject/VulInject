static int FUN1(void *VAR1, int *VAR2, int *VAR3, int *VAR4, int *VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR1;
    uint32_t VAR8 = ((VAR9)VAR7[0] << 24) | ((VAR9)VAR7[1] << 16) | ((VAR9)VAR7[2] << 8) | (VAR9)VAR7[3];
    int VAR10 = 3 - ((VAR8 >> 17) & 0x03);
    int VAR11 = ((VAR8 >> 12) & 0x0f);
    int VAR12 = ((VAR8 >> 10) & 0x03);
    int VAR13 = 0;
    int VAR14 = VAR15[VAR10];
    int VAR16 = ((VAR8 >> 9) & 0x01);
    if (((VAR8 >> 21) & 0x7ff) != 0x7ff)
    {
        return 0;
    }
    if (!VAR16)
    {
        FUN2("");
        FUN3(0);
    }
    *VAR5 = ((VAR8 >> 6) & 0x03) == 0x03;
    if ((VAR8 >> 19) & 0x01)
    {
        *VAR4 = VAR17[0][VAR12];
        VAR13 = VAR18[0][VAR10][VAR11] * 1000;
        *VAR3 = VAR19[0][VAR10];
    }
    else
    {
        if ((VAR8 >> 20) & 0x01)
        {
            *VAR4 = VAR17[1][VAR12];
            VAR13 = VAR18[1][VAR10][VAR11] * 1000;
            *VAR3 = VAR19[1][VAR10];
        }
        else
        {
            *VAR4 = VAR17[2][VAR12];
            VAR13 = VAR18[1][VAR10][VAR11] * 1000;
            *VAR3 = VAR19[2][VAR10];
        }
    }
    *VAR2 = ((((*VAR3 * (VAR13 / VAR14)) / *VAR4) + VAR16) * VAR14);
    return 1;
}