static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2("", VAR2->VAR4, VAR2->VAR5);
    switch (VAR2->VAR5)
    {
    case VAR6:
        FUN3(VAR7, VAR8[VAR2->VAR4]);
        FUN4(VAR9, VAR2->VAR10 + 4);
        VAR2->VAR11 = VAR12;
        break;
    case VAR13:
        if (VAR14)
        {
            FUN5();
        }
        FUN6(VAR15, VAR8[VAR2->VAR4]);
        FUN4(VAR9, VAR2->VAR10 + 4);
        if (VAR14)
        {
            FUN7();
        }
        VAR2->VAR11 = VAR12;
        break;
    case VAR16:
        if (VAR14)
        {
            FUN5();
        }
        FUN8(VAR15, VAR8[VAR2->VAR4]);
        FUN4(VAR9, VAR2->VAR10 + 4);
        if (VAR14)
        {
            FUN7();
        }
        VAR2->VAR11 = VAR12;
        break;
    case VAR17:
        break;
    case VAR18:
        break;
    case VAR19:
        FUN3(VAR20, VAR8[VAR2->VAR4]);
        break;
    case VAR21:
        FUN3(VAR22, VAR8[VAR2->VAR4]);
        break;
    case VAR23:
        FUN9(VAR15, VAR8[VAR2->VAR4]);
        break;
    case VAR24:
        FUN10(VAR15, VAR8[VAR2->VAR4]);
        break;
    case VAR25:
        FUN3(VAR26, VAR8[VAR2->VAR4]);
        break;
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
        VAR3 = VAR2->VAR5 - VAR27;
        if (VAR2->VAR31->VAR32 <= VAR3)
        {
            FUN11(VAR2->VAR31, "", VAR3);
        }
        FUN3(VAR33[VAR3], VAR8[VAR2->VAR4]);
        break;
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
        VAR3 = VAR2->VAR5 - VAR34;
        if (VAR2->VAR31->VAR38 <= VAR3)
        {
            FUN11(VAR2->VAR31, "", VAR3);
        }
        FUN3(VAR39[VAR3], VAR8[VAR2->VAR4]);
        break;
    case VAR40:
    case VAR41:
        FUN11(VAR2->VAR31, "", VAR2->VAR5);
        break;
    default:
        FUN11(VAR2->VAR31, "", VAR2->VAR5);
        break;
    }
}