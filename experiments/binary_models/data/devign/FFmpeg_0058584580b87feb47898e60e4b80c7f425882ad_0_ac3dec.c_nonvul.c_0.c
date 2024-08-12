static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR4->VAR9 = FUN2(VAR8, 16);
    VAR4->VAR10 = FUN2(VAR8, 16);
    VAR4->VAR11 = FUN2(VAR8, 2);
    if (VAR4->VAR11 == 0x03)
        return 0;
    VAR4->VAR12 = FUN2(VAR8, 6);
    if (VAR4->VAR12 >= 38)
        return 0;
    VAR4->VAR13 = VAR14[VAR4->VAR11];
    VAR4->VAR15 = VAR16[VAR4->VAR12 >> 1];
    VAR6->VAR17 = FUN2(VAR8, 5);
    if (VAR6->VAR17 > 0x08)
        return 0;
    VAR6->VAR18 = FUN2(VAR8, 3);
    switch (VAR4->VAR11)
    {
    case 0x00:
        VAR4->VAR19 = 4 * VAR4->VAR15;
        return VAR4->VAR19;
    case 0x01:
        VAR4->VAR19 = 2 * (320 * VAR4->VAR15 / 147 + (VAR4->VAR12 & 1));
        return VAR4->VAR19;
    case 0x02:
        VAR4->VAR19 = 6 * VAR4->VAR15;
        return VAR4->VAR19;
    }
    return 0;
}