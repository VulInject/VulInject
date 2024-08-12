static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    FUN2(VAR4, 0, VAR4->VAR5, VAR4->VAR6 - 1, VAR4->VAR7 - 1, VAR8);
    VAR4->VAR9 = 1;
    for (VAR4->VAR10 = VAR4->VAR5; VAR4->VAR10 < VAR4->VAR7; VAR4->VAR10++)
    {
        VAR4->VAR11 = 0;
        FUN3(VAR2);
        FUN4(VAR4);
        if (VAR4->VAR12.VAR13.VAR14[0])
        {
            memcpy(VAR4->VAR15[0], VAR4->VAR12.VAR13.VAR14[0] + VAR4->VAR10 * 16 * VAR4->VAR16, VAR4->VAR16 * 16);
            memcpy(VAR4->VAR15[1], VAR4->VAR12.VAR13.VAR14[1] + VAR4->VAR10 * 8 * VAR4->VAR17, VAR4->VAR17 * 8);
            memcpy(VAR4->VAR15[2], VAR4->VAR12.VAR13.VAR14[2] + VAR4->VAR10 * 8 * VAR4->VAR17, VAR4->VAR17 * 8);
        }
        FUN5(VAR4, VAR4->VAR10 * 16, 16);
        VAR4->VAR9 = 0;
    }
    VAR4->VAR18 = VAR19;
}