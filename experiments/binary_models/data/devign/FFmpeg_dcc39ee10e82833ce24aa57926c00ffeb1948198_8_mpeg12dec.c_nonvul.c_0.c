static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    int VAR9, VAR10, VAR11;
    VAR7->VAR12 = VAR13;
    if (VAR4->VAR14)
    {
        FUN2(VAR7);
    }
    VAR7->VAR15 = VAR2->VAR16;
    VAR7->VAR17 = VAR2->VAR18;
    VAR2->VAR19 = 0;
    VAR7->VAR20 = 1;
    VAR2->VAR21 = FUN3(VAR2);
    if (VAR2->VAR22 && VAR2->VAR23 == VAR24)
        VAR2->VAR23 = VAR25;
    FUN4(VAR7);
    if ((VAR11 = FUN5(VAR7)) < 0)
        return VAR11;
    VAR4->VAR14 = 1;
    for (VAR9 = 0; VAR9 < 64; VAR9++)
    {
        int VAR26 = VAR7->VAR27.VAR28[VAR9];
        VAR10 = VAR29[VAR9];
        VAR7->VAR30[VAR26] = VAR10;
        VAR7->VAR31[VAR26] = VAR10;
        VAR10 = VAR32[VAR9];
        VAR7->VAR33[VAR26] = VAR10;
        VAR7->VAR34[VAR26] = VAR10;
    }
    VAR7->VAR35 = 1;
    VAR7->VAR36 = 1;
    VAR7->VAR37 = VAR38;
    VAR7->VAR39 = 1;
    VAR7->VAR40 = 1;
    VAR7->VAR41 = VAR7->VAR2->VAR41 = VAR42;
    VAR4->VAR43 = VAR7->VAR15;
    VAR4->VAR44 = VAR7->VAR17;
    VAR4->VAR45 = VAR7->VAR35;
    return 0;
}