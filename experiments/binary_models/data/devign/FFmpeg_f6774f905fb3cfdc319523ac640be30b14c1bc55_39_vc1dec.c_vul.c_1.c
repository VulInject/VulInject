static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    if (!VAR2->VAR4.VAR5.VAR6.VAR7[0])
        return;
    FUN2(&VAR4->VAR8, 0, VAR4->VAR9, VAR4->VAR10 - 1, VAR4->VAR11 - 1, VAR12);
    VAR4->VAR13 = 1;
    for (VAR4->VAR14 = VAR4->VAR9; VAR4->VAR14 < VAR4->VAR11; VAR4->VAR14++)
    {
        VAR4->VAR15 = 0;
        FUN3(VAR2);
        FUN4(VAR4);
        memcpy(VAR4->VAR16[0], VAR4->VAR5.VAR6.VAR7[0] + VAR4->VAR14 * 16 * VAR4->VAR17, VAR4->VAR17 * 16);
        memcpy(VAR4->VAR16[1], VAR4->VAR5.VAR6.VAR7[1] + VAR4->VAR14 * 8 * VAR4->VAR18, VAR4->VAR18 * 8);
        memcpy(VAR4->VAR16[2], VAR4->VAR5.VAR6.VAR7[2] + VAR4->VAR14 * 8 * VAR4->VAR18, VAR4->VAR18 * 8);
        FUN5(VAR4, VAR4->VAR14 * 16, 16);
        VAR4->VAR13 = 0;
    }
    VAR4->VAR19 = VAR20;
}