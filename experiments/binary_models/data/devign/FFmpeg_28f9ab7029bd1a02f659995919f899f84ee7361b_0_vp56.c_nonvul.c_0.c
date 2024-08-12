static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7, *VAR8;
    VP56mb VAR9;
    VP56Frame VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    if (VAR2->VAR16[VAR17]->VAR18)
        VAR9 = VAR19;
    else
        VAR9 = FUN2(VAR2, VAR3, VAR4);
    VAR10 = VAR20[VAR9];
    VAR2->VAR21.FUN3(*VAR2->VAR22);
    VAR2->FUN4(VAR2);
    FUN5(VAR2, VAR10);
    VAR7 = VAR2->VAR16[VAR17];
    VAR8 = VAR2->VAR16[VAR10];
    if (VAR9 != VAR19 && !VAR8->VAR23[0])
        return;
    VAR12 = 6 * VAR5;
    VAR13 = 6 - 2 * VAR5;
    switch (VAR9)
    {
    case VAR19:
        for (VAR11 = 0; VAR11 < VAR13; VAR11++)
        {
            VAR14 = VAR24[VAR11 + VAR12];
            VAR2->VAR25.FUN6(VAR7->VAR23[VAR14] + VAR2->VAR26[VAR11], VAR2->VAR27[VAR14], VAR2->VAR22[VAR11]);
        }
        break;
    case VAR28:
    case VAR29:
        for (VAR11 = 0; VAR11 < VAR13; VAR11++)
        {
            VAR14 = VAR24[VAR11 + VAR12];
            VAR15 = VAR2->VAR26[VAR11];
            VAR2->VAR21.VAR30[1][0](VAR7->VAR23[VAR14] + VAR15, VAR8->VAR23[VAR14] + VAR15, VAR2->VAR27[VAR14], 8);
            VAR2->VAR25.FUN7(VAR7->VAR23[VAR14] + VAR15, VAR2->VAR27[VAR14], VAR2->VAR22[VAR11]);
        }
        break;
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
        for (VAR11 = 0; VAR11 < VAR13; VAR11++)
        {
            int VAR38 = VAR11 == 1 || VAR11 == 3 ? 8 : 0;
            int VAR39 = VAR11 == 2 || VAR11 == 3 ? 8 : 0;
            VAR14 = VAR24[VAR11 + VAR12];
            FUN8(VAR2, VAR11, VAR14, VAR8->VAR23[VAR14], VAR2->VAR27[VAR14], 16 * VAR4 + VAR38, 16 * VAR3 + VAR39);
            VAR2->VAR25.FUN7(VAR7->VAR23[VAR14] + VAR2->VAR26[VAR11], VAR2->VAR27[VAR14], VAR2->VAR22[VAR11]);
        }
        break;
    }
}