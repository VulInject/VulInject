static void FUN1(VAR1 *VAR2, TCGv VAR3, int VAR4)
{
    int VAR5, VAR6;
    VAR5 = FUN2(VAR2) && !VAR2->VAR7;
    VAR6 = (VAR2->VAR8 == VAR9) && VAR2->VAR7;
    switch (VAR4)
    {
    case VAR10:
        if (VAR5 || VAR6)
        {
            int VAR11;
            VAR11 = FUN3();
            FUN4(VAR3, 0);
            FUN5(VAR12, VAR13, 0, VAR11);
            FUN4(VAR3, 1);
            FUN6(VAR11);
        }
        else
        {
            FUN7(VAR2);
            FUN8(VAR3, VAR14[VAR15], VAR16);
        }
        break;
    case VAR17:
        if (VAR5 || VAR6)
            FUN9(VAR3, VAR13);
        else
        {
            FUN7(VAR2);
            FUN10(VAR3, VAR14[VAR15], VAR16);
            FUN8(VAR3, VAR3, VAR16);
        }
        break;
    case VAR18:
        FUN7(VAR2);
        FUN8(VAR3, VAR14[VAR15], VAR19);
        break;
    case VAR20:
        FUN7(VAR2);
        FUN10(VAR3, VAR14[VAR15], VAR19);
        FUN8(VAR3, VAR3, VAR19);
        break;
    case VAR21:
        FUN7(VAR2);
        FUN8(VAR3, VAR14[VAR15], VAR22);
        break;
    case VAR23:
        FUN7(VAR2);
        FUN10(VAR3, VAR14[VAR15], VAR22);
        FUN8(VAR3, VAR3, VAR22);
        break;
    case VAR24:
        if (VAR5 || VAR6)
        {
            int VAR25 = 31;
            if (VAR2->VAR26 == 1)
                VAR25 = 7;
            else if (VAR2->VAR26 == 2)
                VAR25 = 15;
            FUN11(VAR3, VAR13, VAR25);
            FUN10(VAR3, VAR3, 1);
        }
        else
        {
            FUN7(VAR2);
            FUN10(VAR3, VAR14[VAR15], VAR27);
            FUN8(VAR3, VAR3, VAR27);
        }
        break;
    case VAR28:
        if (VAR5 || VAR6)
        {
            int VAR25 = 31;
            if (VAR2->VAR26 == 1)
                VAR25 = 7;
            else if (VAR2->VAR26 == 2)
                VAR25 = 15;
            FUN11(VAR3, VAR13, 31);
        }
        else
        {
            FUN7(VAR2);
            FUN8(VAR3, VAR14[VAR15], VAR27);
        }
        break;
    case VAR29:
        FUN7(VAR2);
        FUN8(VAR3, VAR14[VAR15], VAR19 | VAR16);
        break;
    case VAR30:
        FUN7(VAR2);
        {
            TCGv VAR31;
            VAR31 = FUN12();
            FUN10(VAR31, VAR14[VAR15], VAR19 | VAR16);
            FUN13(VAR3, VAR31, 2);
            FUN14(VAR3, VAR31, VAR3);
            FUN8(VAR3, VAR3, VAR16);
            FUN15(VAR31);
        }
        break;
    case VAR32:
        FUN7(VAR2);
        FUN13(VAR3, VAR14[VAR15], 2);
        FUN16(VAR3, VAR14[VAR15], VAR3);
        FUN8(VAR3, VAR3, VAR27);
        FUN10(VAR3, VAR3, VAR27);
        break;
    case VAR33:
        FUN7(VAR2);
        FUN13(VAR3, VAR14[VAR15], 2);
        FUN16(VAR3, VAR14[VAR15], VAR3);
        FUN8(VAR3, VAR3, VAR27);
        break;
    case VAR34:
        FUN7(VAR2);
        {
            TCGv VAR35, VAR36;
            VAR35 = FUN12();
            VAR36 = FUN12();
            FUN11(VAR35, VAR14[VAR15], 2);
            FUN11(VAR36, VAR14[VAR15], 1);
            FUN10(VAR36, VAR36, 2);
            FUN16(VAR35, VAR35, VAR14[VAR15]);
            FUN10(VAR35, VAR35, 2);
            FUN14(VAR3, VAR36, VAR35);
            FUN8(VAR3, VAR3, 2);
            FUN15(VAR35);
            FUN15(VAR36);
        }
        break;
    case VAR37:
        FUN7(VAR2);
        {
            TCGv VAR35, VAR36;
            VAR35 = FUN12();
            VAR36 = FUN12();
            FUN11(VAR35, VAR14[VAR15], 2);
            FUN11(VAR36, VAR14[VAR15], 1);
            FUN16(VAR35, VAR35, VAR14[VAR15]);
            FUN17(VAR3, VAR36, VAR35);
            FUN8(VAR3, VAR3, 2);
            FUN15(VAR35);
            FUN15(VAR36);
        }
        break;
    case VAR38:
        FUN7(VAR2);
        FUN8(VAR3, VAR14[VAR15], VAR39);
        break;
    case VAR40:
        FUN4(VAR3, 1);
        break;
    default:
        FUN18();
        break;
    };
}