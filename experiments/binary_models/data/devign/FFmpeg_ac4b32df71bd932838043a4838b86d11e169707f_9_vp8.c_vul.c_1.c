void FUN1(VAR1 *VAR2, VAR3 *VAR4[3], VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11;
    int VAR12 = VAR6->VAR12;
    int VAR13 = VAR6->VAR13;
    int VAR14 = VAR6->VAR14;
    int VAR15 = VAR2->VAR15;
    int VAR16 = VAR2->VAR16;
    static const uint8_t VAR17[2][64] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}};
    if (!VAR12)
        return;
    VAR10 = 2 * VAR12 + VAR13;
    VAR9 = VAR10 + 4;
    VAR11 = VAR17[VAR2->VAR18][VAR12];
    if (VAR7)
    {
        VAR2->VAR19.FUN2(VAR4[0], VAR15, VAR9, VAR13, VAR11);
        VAR2->VAR19.FUN3(VAR4[1], VAR4[2], VAR16, VAR9, VAR13, VAR11);
    }
    if (VAR14)
    {
        VAR2->VAR19.FUN4(VAR4[0] + 4, VAR15, VAR10, VAR13, VAR11);
        VAR2->VAR19.FUN4(VAR4[0] + 8, VAR15, VAR10, VAR13, VAR11);
        VAR2->VAR19.FUN4(VAR4[0] + 12, VAR15, VAR10, VAR13, VAR11);
        VAR2->VAR19.FUN5(VAR4[1] + 4, VAR4[2] + 4, VAR16, VAR10, VAR13, VAR11);
    }
    if (VAR8)
    {
        VAR2->VAR19.FUN6(VAR4[0], VAR15, VAR9, VAR13, VAR11);
        VAR2->VAR19.FUN7(VAR4[1], VAR4[2], VAR16, VAR9, VAR13, VAR11);
    }
    if (VAR14)
    {
        VAR2->VAR19.FUN8(VAR4[0] + 4 * VAR15, VAR15, VAR10, VAR13, VAR11);
        VAR2->VAR19.FUN8(VAR4[0] + 8 * VAR15, VAR15, VAR10, VAR13, VAR11);
        VAR2->VAR19.FUN8(VAR4[0] + 12 * VAR15, VAR15, VAR10, VAR13, VAR11);
        VAR2->VAR19.FUN9(VAR4[1] + 4 * VAR16, VAR4[2] + 4 * VAR16, VAR16, VAR10, VAR13, VAR11);
    }
}