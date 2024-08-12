static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, unsigned int VAR7, unsigned int VAR8)
{
    int VAR9;
    VAR10 *VAR11 = FUN2(VAR12);
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        int VAR13 = !!VAR9;
        int VAR14 = ((VAR3 + 4 * VAR15 - 1) & (~(2 * VAR15 - 1))) >> VAR13;
        int VAR16 = ((VAR4 + 4 * VAR15 - 1) & (~(2 * VAR15 - 1))) >> VAR13;
        VAR2->VAR17->VAR18[VAR9] = VAR14;
        VAR2->VAR17->VAR19[VAR9] = malloc(VAR2->VAR17->VAR18[VAR9] * VAR16 * sizeof(VAR20));
        VAR2->VAR17->VAR21[VAR9] = malloc(VAR2->VAR17->VAR18[VAR9] * VAR16 * sizeof(VAR22));
    }
    for (VAR9 = 0; VAR9 < (1 << VAR2->VAR17->VAR23); VAR9++)
    {
        VAR24 *VAR25;
        VAR26 *VAR27 = NULL;
        VAR25 = VAR2->VAR17->VAR25[VAR9] = FUN3(NULL);
        VAR25->VAR3 = VAR3 + VAR15;
        VAR25->VAR4 = VAR4 + VAR15;
        VAR25->VAR28 = (VAR29){1, 25};
        VAR25->VAR30 = 300;
        VAR25->VAR31 = 0;
        VAR25->VAR32 = VAR33;
        VAR25->VAR7 = VAR34 | VAR35;
        VAR25->VAR36 = VAR37;
        VAR25->VAR38 = 123;
        FUN4(&VAR27, "", "", 0);
        if (FUN5(VAR25, VAR11, &VAR27) < 0)
            return 0;
        FUN6(&VAR27);
        assert(VAR25->VAR39);
    }
    VAR2->VAR17->VAR40 = FUN7();
    VAR2->VAR17->VAR41 = FUN7();
    VAR2->VAR17->VAR42 = (VAR3 + VAR15) * (VAR4 + VAR15) * 10;
    VAR2->VAR17->VAR43 = malloc(VAR2->VAR17->VAR42);
    return FUN8(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8);
}