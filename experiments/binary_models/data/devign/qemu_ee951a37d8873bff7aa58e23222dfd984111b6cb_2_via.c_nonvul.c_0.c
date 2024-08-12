static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    struct
    {
        int VAR4;
        int VAR5;
        int VAR6;
    } VAR7[] = {
        {0x1f0, 0x3f6, 14},
        {0x170, 0x376, 15},
    };
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        FUN2(&VAR2->VAR8[VAR3], &VAR2->VAR9.VAR10, VAR3);
        FUN3(&VAR2->VAR8[VAR3], VAR7[VAR3].VAR4, VAR7[VAR3].VAR5);
        FUN4(&VAR2->VAR8[VAR3], FUN5(VAR7[VAR3].VAR6));
        FUN6(&VAR2->VAR8[VAR3], &VAR2->VAR11[VAR3]);
        VAR2->VAR11[VAR3].VAR8 = &VAR2->VAR8[VAR3];
        FUN7(VAR2->VAR8[VAR3].VAR12->VAR13->VAR14, &VAR2->VAR11[VAR3].VAR12);
    }
}