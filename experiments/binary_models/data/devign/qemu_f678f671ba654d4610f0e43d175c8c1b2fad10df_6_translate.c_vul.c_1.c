static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int32_t VAR7;
    TCGv VAR8, VAR9;
    VAR6 = FUN2(VAR4->VAR10);
    VAR7 = FUN3(VAR4->VAR10);
    switch (VAR5)
    {
    case VAR11:
        FUN4(VAR12[VAR6], VAR12[VAR6], VAR7);
        break;
    case VAR13:
        FUN4(VAR12[VAR6], VAR12[15], VAR7);
        break;
    case VAR14:
        FUN4(VAR12[15], VAR12[VAR6], VAR7);
        break;
    case VAR15:
        FUN5(VAR16[VAR6], VAR16[VAR6], VAR7);
        break;
    case VAR17:
        FUN6(VAR18, VAR12[VAR6], VAR7, VAR12[VAR6], VAR12[15]);
        break;
    case VAR19:
        FUN6(VAR20, VAR12[VAR6], VAR7, VAR12[VAR6], VAR12[15]);
        break;
    case VAR21:
        VAR8 = FUN7(0);
        VAR9 = FUN7(VAR7);
        FUN8(VAR18, VAR12[VAR6], VAR12[15], VAR8, VAR9, VAR12[VAR6]);
        FUN9(VAR8);
        FUN9(VAR9);
        break;
    case VAR22:
        VAR8 = FUN7(0);
        VAR9 = FUN7(VAR7);
        FUN8(VAR20, VAR12[VAR6], VAR12[15], VAR8, VAR9, VAR12[VAR6]);
        FUN9(VAR8);
        FUN9(VAR9);
        break;
    case VAR23:
        FUN10(VAR20, VAR12[15], VAR12[VAR6], VAR7);
        break;
    case VAR24:
        FUN10(VAR25, VAR12[15], VAR12[VAR6], VAR7);
        break;
    case VAR26:
        FUN11(VAR12[VAR6], VAR7);
        break;
    case VAR27:
        VAR7 = FUN12(VAR4->VAR10);
        FUN11(VAR16[VAR6], VAR7);
        break;
    case VAR28:
        if (FUN13(VAR2, VAR29))
        {
            FUN11(VAR12[VAR6], VAR7);
            FUN14(VAR12[VAR6 + 1], VAR12[VAR6], 31);
        }
        break;
    case VAR30:
        FUN15(VAR12[VAR6], VAR12[VAR6], VAR7);
        break;
    case VAR31:
        FUN16(VAR12[VAR6], VAR12[VAR6], VAR7);
        break;
    }
}