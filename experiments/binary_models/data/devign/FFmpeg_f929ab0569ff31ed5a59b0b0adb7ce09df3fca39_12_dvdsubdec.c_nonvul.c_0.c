static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[256] = {0};
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13;
    if (VAR2->VAR14 == 0 || !VAR2->VAR15 || VAR2->VAR15[0]->VAR9 <= 0 || VAR2->VAR15[0]->VAR10 <= 0)
        return 0;
    for (VAR11 = 0; VAR11 < VAR2->VAR15[0]->VAR16; VAR11++)
    {
        if ((((VAR17 *)VAR2->VAR15[0]->VAR18.VAR19[1])[VAR11] >> 24) == 0)
            VAR3[VAR11] = 1;
    }
    VAR4 = 0;
    while (VAR4 < VAR2->VAR15[0]->VAR10 && FUN2(VAR2->VAR15[0]->VAR18.VAR19[0] + VAR4 * VAR2->VAR15[0]->VAR18.VAR20[0], 1, VAR2->VAR15[0]->VAR9, VAR3))
        VAR4++;
    if (VAR4 == VAR2->VAR15[0]->VAR10)
    {
        FUN3(&VAR2->VAR15[0]->VAR18.VAR19[0]);
        VAR2->VAR15[0]->VAR9 = VAR2->VAR15[0]->VAR10 = 0;
        return 0;
    }
    VAR5 = VAR2->VAR15[0]->VAR10 - 1;
    while (VAR5 > 0 && FUN2(VAR2->VAR15[0]->VAR18.VAR19[0] + VAR5 * VAR2->VAR15[0]->VAR18.VAR20[0], 1, VAR2->VAR15[0]->VAR9, VAR3))
        VAR5--;
    VAR6 = 0;
    while (VAR6 < (VAR2->VAR15[0]->VAR9 - 1) && FUN2(VAR2->VAR15[0]->VAR18.VAR19[0] + VAR6, VAR2->VAR15[0]->VAR18.VAR20[0], VAR2->VAR15[0]->VAR10, VAR3))
        VAR6++;
    VAR7 = VAR2->VAR15[0]->VAR9 - 1;
    while (VAR7 > 0 && FUN2(VAR2->VAR15[0]->VAR18.VAR19[0] + VAR7, VAR2->VAR15[0]->VAR18.VAR20[0], VAR2->VAR15[0]->VAR10, VAR3))
        VAR7--;
    VAR9 = VAR7 - VAR6 + 1;
    VAR10 = VAR5 - VAR4 + 1;
    VAR13 = FUN4(VAR9 * VAR10);
    if (!VAR13)
        return 1;
    for (VAR8 = 0; VAR8 < VAR10; VAR8++)
    {
        memcpy(VAR13 + VAR9 * VAR8, VAR2->VAR15[0]->VAR18.VAR19[0] + VAR6 + (VAR4 + VAR8) * VAR2->VAR15[0]->VAR18.VAR20[0], VAR9);
    }
    FUN3(&VAR2->VAR15[0]->VAR18.VAR19[0]);
    VAR2->VAR15[0]->VAR18.VAR19[0] = VAR13;
    VAR2->VAR15[0]->VAR18.VAR20[0] = VAR9;
    VAR2->VAR15[0]->VAR9 = VAR9;
    VAR2->VAR15[0]->VAR10 = VAR10;
    VAR2->VAR15[0]->VAR21 += VAR6;
    VAR2->VAR15[0]->VAR8 += VAR4;
    return 1;
}