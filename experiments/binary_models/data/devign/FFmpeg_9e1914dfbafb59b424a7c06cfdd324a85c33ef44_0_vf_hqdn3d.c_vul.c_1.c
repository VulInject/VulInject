static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR1 *VAR9 = VAR2->VAR7->VAR10[0];
    VAR3 *VAR11;
    int VAR12, VAR13;
    if (VAR4->VAR14 & VAR15)
    {
        VAR12 = 1;
        VAR11 = VAR4;
    }
    else
    {
        VAR11 = FUN2(VAR9, VAR15, VAR9->VAR16, VAR9->VAR17);
        if (!VAR11)
        {
            FUN3(&VAR4);
            return FUN4(VAR18);
        }
        FUN5(VAR11, VAR4);
        VAR11->VAR19->VAR16 = VAR9->VAR16;
        VAR11->VAR19->VAR17 = VAR9->VAR17;
    }
    for (VAR13 = 0; VAR13 < 3; VAR13++)
    {
        FUN6(VAR6, VAR4->VAR20[VAR13], VAR11->VAR20[VAR13], VAR6->VAR21, &VAR6->VAR22[VAR13], VAR4->VAR19->VAR16 >> (!!VAR13 * VAR6->VAR23), VAR4->VAR19->VAR17 >> (!!VAR13 * VAR6->VAR24), VAR4->VAR25[VAR13], VAR11->VAR25[VAR13], VAR6->VAR26[VAR13 ? 2 : 0], VAR6->VAR26[VAR13 ? 3 : 1]);
    }
    if (!VAR12)
        FUN3(&VAR4);
    return FUN7(VAR9, VAR11);
}