static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR2->VAR5 + VAR2->VAR6);
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12 = 0;
    int VAR13;
    if (VAR2->VAR6 < 10)
        return -1;
    VAR10 = VAR2->VAR5[0];
    VAR11 = FUN2(&VAR2->VAR5[8]);
    VAR13 = ((VAR2->VAR5[1] << 16) | FUN2(&VAR2->VAR5[2]));
    if (VAR2->VAR14 == -1)
    {
        if (VAR13 != VAR2->VAR6)
        {
            if ((VAR2->VAR5[10] == 0xFE) && (VAR2->VAR5[11] == 0x00) && (VAR2->VAR5[12] == 0x00) && (VAR2->VAR5[13] == 0x06) && (VAR2->VAR5[14] == 0x00) && (VAR2->VAR5[15] == 0x00))
                VAR2->VAR14 = 6;
            else
                VAR2->VAR14 = 2;
        }
        else
            VAR2->VAR14 = 0;
    }
    VAR2->VAR5 += 10 + VAR2->VAR14;
    if (VAR11 > VAR15)
        VAR11 = VAR15;
    for (VAR7 = 0; VAR7 < VAR11; VAR7++)
    {
        if ((VAR2->VAR5 + 12) > VAR4)
            return -1;
        VAR2->VAR16[VAR7].VAR17 = FUN2(VAR2->VAR5);
        VAR2->VAR16[VAR7].VAR18 = VAR12;
        VAR2->VAR16[VAR7].VAR19 = 0;
        VAR2->VAR16[VAR7].VAR20 = VAR12 + FUN2(&VAR2->VAR5[8]);
        VAR2->VAR16[VAR7].VAR21 = VAR2->VAR22->VAR23;
        VAR9 = FUN2(&VAR2->VAR5[2]) - 12;
        VAR2->VAR5 += 12;
        VAR9 = ((VAR2->VAR5 + VAR9) > VAR4) ? (VAR4 - VAR2->VAR5) : VAR9;
        if ((VAR7 > 0) && !(VAR10 & 0x01))
        {
            memcpy(VAR2->VAR16[VAR7].VAR24, VAR2->VAR16[VAR7 - 1].VAR24, sizeof(VAR2->VAR16[VAR7].VAR24));
            memcpy(VAR2->VAR16[VAR7].VAR25, VAR2->VAR16[VAR7 - 1].VAR25, sizeof(VAR2->VAR16[VAR7].VAR25));
        }
        VAR8 = FUN3(VAR2, &VAR2->VAR16[VAR7], VAR2->VAR5, VAR9);
        if (VAR8 != 0)
            return VAR8;
        VAR2->VAR5 += VAR9;
        VAR12 = VAR2->VAR16[VAR7].VAR20;
    }
    return 0;
}