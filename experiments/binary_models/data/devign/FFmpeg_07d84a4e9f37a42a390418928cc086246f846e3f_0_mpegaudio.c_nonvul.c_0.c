static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = VAR2->VAR7;
    int VAR8 = VAR2->VAR9;
    int VAR10 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    float VAR14;
    if (VAR10 <= 0 || VAR10 > 2)
    {
        FUN2(VAR2, VAR15, "", VAR10);
        return -1;
    }
    VAR8 = VAR8 / 1000;
    VAR4->VAR16 = VAR10;
    VAR4->VAR6 = VAR6;
    VAR4->VAR9 = VAR8 * 1000;
    VAR2->VAR17 = VAR18;
    VAR4->VAR19 = 0;
    for (VAR11 = 0; VAR11 < 3; VAR11++)
    {
        if (VAR20[VAR11] == VAR6)
            break;
        if ((VAR20[VAR11] / 2) == VAR6)
        {
            VAR4->VAR19 = 1;
            break;
        }
    }
    if (VAR11 == 3)
    {
        FUN2(VAR2, VAR15, "", VAR6);
        return -1;
    }
    VAR4->VAR21 = VAR11;
    for (VAR11 = 0; VAR11 < 15; VAR11++)
    {
        if (VAR22[VAR4->VAR19][1][VAR11] == VAR8)
            break;
    }
    if (VAR11 == 15)
    {
        FUN2(VAR2, VAR15, "", VAR8);
        return -1;
    }
    VAR4->VAR23 = VAR11;
    VAR14 = (float)(VAR8 * 1000 * VAR18) / (VAR6 * 8.0);
    VAR4->VAR17 = ((int)VAR14) * 8;
    VAR4->VAR24 = 0;
    VAR4->VAR25 = (int)((VAR14 - FUN3(VAR14)) * 65536.0);
    VAR13 = FUN4(VAR8, VAR4->VAR16, VAR6, VAR4->VAR19);
    VAR4->VAR26 = VAR27[VAR13];
    VAR4->VAR28 = VAR29[VAR13];
    FUN2(VAR2, VAR30, "", VAR8, VAR6, VAR4->VAR17, VAR13, VAR4->VAR25);
    for (VAR11 = 0; VAR11 < VAR4->VAR16; VAR11++)
        VAR4->VAR31[VAR11] = 0;
    for (VAR11 = 0; VAR11 < 257; VAR11++)
    {
        int VAR12;
        VAR12 = VAR32[VAR11];
        VAR12 = (VAR12 + (1 << (16 - VAR33 - 1))) >> (16 - VAR33);
        VAR34[VAR11] = VAR12;
        if ((VAR11 & 63) != 0)
            VAR12 = -VAR12;
        if (VAR11 != 0)
            VAR34[512 - VAR11] = VAR12;
    }
    for (VAR11 = 0; VAR11 < 64; VAR11++)
    {
        VAR12 = (int)(FUN5(2.0, (3 - VAR11) / 3.0) * (1 << 20));
        if (VAR12 <= 0)
            VAR12 = 1;
        VAR35[VAR11] = VAR12;
        VAR36[VAR11] = FUN5(2.0, -(3 - VAR11) / 3.0) / (float)(1 << 20);
        VAR37[VAR11] = 21 - VAR38 - (VAR11 / 3);
        VAR39[VAR11] = (1 << VAR38) * FUN5(2.0, (VAR11 % 3) / 3.0);
    }
    for (VAR11 = 0; VAR11 < 128; VAR11++)
    {
        VAR12 = VAR11 - 64;
        if (VAR12 <= -3)
            VAR12 = 0;
        else if (VAR12 < 0)
            VAR12 = 1;
        else if (VAR12 == 0)
            VAR12 = 2;
        else if (VAR12 < 3)
            VAR12 = 3;
        else
            VAR12 = 4;
        VAR40[VAR11] = VAR12;
    }
    for (VAR11 = 0; VAR11 < 17; VAR11++)
    {
        VAR12 = VAR41[VAR11];
        if (VAR12 < 0)
            VAR12 = -VAR12;
        else
            VAR12 = VAR12 * 3;
        VAR42[VAR11] = 12 * VAR12;
    }
    VAR2->VAR43 = FUN6();
    VAR2->VAR43->VAR44 = 1;
    return 0;
}