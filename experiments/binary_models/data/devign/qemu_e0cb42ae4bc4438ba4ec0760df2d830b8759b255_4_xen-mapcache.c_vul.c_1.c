static void FUN1(VAR1 *VAR2, hwaddr VAR3, hwaddr VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int *VAR9;
    unsigned int VAR10;
    hwaddr VAR11 = VAR3 >> VAR12;
    FUN2(VAR4);
    VAR8 = FUN3(VAR11 * sizeof(VAR7));
    VAR9 = FUN3(VAR11 * sizeof(int));
    if (VAR2->VAR6 != NULL)
    {
        if (FUN4(VAR2->VAR6, VAR2->VAR3) != 0)
        {
            FUN5("");
            FUN6(-1);
        }
    }
    FUN7(VAR2->VAR13);
    VAR2->VAR13 = NULL;
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        VAR8[VAR10] = (VAR4 << (VAR14 - VAR12)) + VAR10;
    }
    VAR6 = FUN8(VAR15, VAR16, VAR17 | VAR18, VAR8, VAR9, VAR11);
    if (VAR6 == NULL)
    {
        FUN5("");
        FUN6(-1);
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR19 = VAR4;
    VAR2->VAR3 = VAR3;
    VAR2->VAR13 = (unsigned long *)FUN3(sizeof(unsigned long) * FUN9(VAR3 >> VAR12));
    FUN10(VAR2->VAR13, VAR11);
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        if (!VAR9[VAR10])
        {
            FUN11(VAR2->VAR13, VAR10, 1);
        }
    }
    FUN7(VAR8);
    FUN7(VAR9);
}