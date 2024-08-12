static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = 0;
    unsigned int VAR6;
    VAR2->VAR7[VAR3] = FUN2(&VAR2->VAR8);
    if (VAR2->VAR7[VAR3])
    {
        VAR2->VAR9[VAR3] = FUN3(&VAR2->VAR8, FUN4(VAR4));
        if (VAR2->VAR9[VAR3])
            VAR2->VAR7[VAR3] = 0;
        VAR2->VAR10[VAR3].VAR11 = FUN5(VAR2->VAR10[VAR3].VAR11, VAR2->VAR12 / 2);
    }
    else if (VAR2->VAR10[VAR3].VAR11)
        VAR2->VAR7[VAR3] = 1;
    if (VAR2->VAR13)
    {
        VAR6 = FUN3(&VAR2->VAR8, VAR2->VAR14);
        VAR2->VAR15[VAR3] = VAR6 << (VAR2->VAR16 + 1);
    }
    if (VAR2->VAR13)
    {
        if (VAR2->VAR17)
            VAR2->VAR18[VAR3][0] = FUN6(&VAR2->VAR8, VAR2->VAR14 + 1);
        else
            VAR2->VAR18[VAR3][0] = FUN6(&VAR2->VAR8, VAR2->VAR14);
        VAR5++;
    }
    for (; VAR5 < VAR4; VAR5++)
    {
        int VAR19 = 0, VAR20, VAR21, VAR22;
        while (FUN2(&VAR2->VAR8))
        {
            VAR19++;
            if (FUN7(&VAR2->VAR8) <= 0)
                return -1;
        }
        if (VAR19 >= 32)
            VAR19 += FUN8(&VAR2->VAR8, FUN3(&VAR2->VAR8, 5) + 1);
        VAR6 = (VAR2->VAR15[VAR3] + (1 << VAR2->VAR16)) >> (VAR2->VAR16 + 1);
        if (VAR6 <= 1)
            VAR22 = VAR19;
        else
        {
            VAR21 = FUN9(VAR6);
            VAR20 = VAR21 ? FUN3(&VAR2->VAR8, VAR21) : 0;
            VAR22 = (VAR19 << VAR21) + VAR20;
        }
        VAR2->VAR15[VAR3] = VAR22 + VAR2->VAR15[VAR3] - (VAR2->VAR15[VAR3] >> VAR2->VAR16);
        if (VAR22 & 1)
            VAR22 = -(VAR22 >> 1) - 1;
        else
            VAR22 = VAR22 >> 1;
        VAR2->VAR18[VAR3][VAR5] = VAR22;
    }
    return 0;
}