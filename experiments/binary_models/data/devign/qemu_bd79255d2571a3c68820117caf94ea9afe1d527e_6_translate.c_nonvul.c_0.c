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
        if (VAR2->VAR14->VAR15 & VAR16)
        {
            FUN5();
        }
        FUN6(VAR17, VAR8[VAR2->VAR4]);
        FUN4(VAR9, VAR2->VAR10 + 4);
        if (VAR2->VAR14->VAR15 & VAR16)
        {
            FUN7();
        }
        VAR2->VAR11 = VAR12;
        break;
    case VAR18:
        if (VAR2->VAR14->VAR15 & VAR16)
        {
            FUN5();
        }
        FUN8(VAR17, VAR8[VAR2->VAR4]);
        FUN4(VAR9, VAR2->VAR10 + 4);
        if (VAR2->VAR14->VAR15 & VAR16)
        {
            FUN7();
        }
        VAR2->VAR11 = VAR12;
        break;
    case VAR19:
        break;
    case VAR20:
        break;
    case VAR21:
        FUN3(VAR22, VAR8[VAR2->VAR4]);
        break;
    case VAR23:
        FUN3(VAR24, VAR8[VAR2->VAR4]);
        break;
    case VAR25:
        FUN9(VAR17, VAR8[VAR2->VAR4]);
        break;
    case VAR26:
        FUN10(VAR17, VAR8[VAR2->VAR4]);
        break;
    case VAR27:
        FUN11(VAR17, VAR8[VAR2->VAR4]);
        break;
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
        VAR3 = VAR2->VAR5 - VAR28;
        if (VAR2->VAR32 <= VAR3)
        {
            FUN12(VAR33, "", VAR3);
            FUN13(VAR2);
            break;
        }
        FUN14(VAR17, VAR8[VAR2->VAR4], FUN15(VAR3));
        break;
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
        VAR3 = VAR2->VAR5 - VAR34;
        if (VAR2->VAR38 <= VAR3)
        {
            FUN12(VAR33, "", VAR3);
            FUN13(VAR2);
            break;
        }
        FUN16(VAR17, VAR8[VAR2->VAR4], FUN15(VAR3));
        break;
    case VAR39:
    case VAR40:
        FUN12(VAR33, "", VAR2->VAR5);
        break;
    default:
        FUN12(VAR33, "", VAR2->VAR5);
        break;
    }
}