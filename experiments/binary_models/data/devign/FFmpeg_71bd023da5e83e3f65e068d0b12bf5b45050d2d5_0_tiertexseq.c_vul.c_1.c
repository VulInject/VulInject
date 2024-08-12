static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5[4], VAR6[4];
    VAR7 *VAR8;
    int VAR9, VAR10;
    VAR2->VAR11 += VAR12;
    FUN2(VAR4, VAR2->VAR11, VAR13);
    VAR2->VAR14 = FUN3(VAR4);
    if (VAR2->VAR14 != 0)
    {
        VAR2->VAR15 = VAR16 * 2;
    }
    else
    {
        VAR2->VAR15 = 0;
    }
    VAR2->VAR17 = FUN3(VAR4);
    if (VAR2->VAR17 != 0)
    {
        VAR2->VAR18 = 768;
    }
    else
    {
        VAR2->VAR18 = 0;
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        VAR6[VAR9] = FUN4(VAR4);
    for (VAR9 = 0; VAR9 < 4; VAR9++)
        VAR5[VAR9] = FUN3(VAR4);
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        if (VAR5[VAR9] != 0)
        {
            for (VAR10 = VAR9 + 1; VAR10 < 4 && VAR5[VAR10] == 0; VAR10++)
                ;
            FUN5(VAR2, VAR4, VAR6[1 + VAR9], VAR5[VAR9], VAR5[VAR10] - VAR5[VAR9]);
        }
    }
    if (VAR6[0] != 255)
    {
        VAR8 = &VAR2->VAR19[VAR6[0]];
        VAR2->VAR20 = VAR8->VAR21;
        VAR2->VAR22 = VAR8->VAR23;
        VAR8->VAR21 = 0;
    }
    else
    {
        VAR2->VAR20 = 0;
        VAR2->VAR22 = 0;
    }
    return 0;
}