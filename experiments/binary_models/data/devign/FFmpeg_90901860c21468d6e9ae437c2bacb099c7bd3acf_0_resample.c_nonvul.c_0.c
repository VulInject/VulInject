int FUN1(VAR1 *VAR2, short *VAR3, short *VAR4, int VAR5)
{
    int VAR6, VAR7;
    short *VAR8[2];
    short *VAR9[2];
    short *VAR10[2], *VAR11[2];
    int VAR12;
    if (VAR2->VAR13 == VAR2->VAR14 && VAR2->VAR15 == 1.0 && 0)
    {
        memcpy(VAR3, VAR4, VAR5 * VAR2->VAR13 * sizeof(short));
        return VAR5;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
    {
        VAR8[VAR6] = FUN2((VAR5 + VAR2->VAR17) * sizeof(short));
        memcpy(VAR8[VAR6], VAR2->VAR18[VAR6], VAR2->VAR17 * sizeof(short));
        VAR10[VAR6] = VAR8[VAR6] + VAR2->VAR17;
    }
    VAR12 = (int)(4 * VAR5 * VAR2->VAR15) + 16;
    VAR9[0] = FUN2(VAR12 * sizeof(short));
    VAR9[1] = FUN2(VAR12 * sizeof(short));
    if (VAR2->VAR13 == 2 && VAR2->VAR14 == 1)
    {
        VAR11[0] = VAR3;
        FUN3(VAR10[0], VAR4, VAR5);
    }
    else if (VAR2->VAR14 >= 2 && VAR2->VAR13 == 1)
    {
        VAR11[0] = VAR9[0];
        memcpy(VAR10[0], VAR4, VAR5 * sizeof(short));
    }
    else if (VAR2->VAR14 >= 2)
    {
        VAR11[0] = VAR9[0];
        VAR11[1] = VAR9[1];
        FUN4(VAR10[0], VAR10[1], VAR4, VAR5);
    }
    else
    {
        VAR11[0] = VAR3;
        memcpy(VAR10[0], VAR4, VAR5 * sizeof(short));
    }
    VAR5 += VAR2->VAR17;
    VAR7 = 0;
    for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
    {
        int VAR19;
        int VAR20 = VAR6 + 1 == VAR2->VAR16;
        VAR7 = FUN5(VAR2->VAR21, VAR11[VAR6], VAR8[VAR6], &VAR19, VAR5, VAR12, VAR20);
        VAR2->VAR17 = VAR5 - VAR19;
        VAR2->VAR18[VAR6] = FUN6(VAR2->VAR18[VAR6], VAR2->VAR17 * sizeof(short));
        memcpy(VAR2->VAR18[VAR6], VAR8[VAR6] + VAR19, VAR2->VAR17 * sizeof(short));
    }
    if (VAR2->VAR14 == 2 && VAR2->VAR13 == 1)
    {
        FUN7(VAR3, VAR11[0], VAR7);
    }
    else if (VAR2->VAR14 == 2)
    {
        FUN8(VAR3, VAR11[0], VAR11[1], VAR7);
    }
    else if (VAR2->VAR14 == 6)
    {
        FUN9(VAR3, VAR11[0], VAR11[1], VAR7);
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR16; VAR6++)
        FUN10(VAR8[VAR6]);
    FUN10(VAR9[0]);
    FUN10(VAR9[1]);
    return VAR7;
}