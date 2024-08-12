static void FUN1(VAR1 *VAR2, int VAR3, TCGv VAR4, TCGv VAR5, TCGv VAR6, int VAR7)
{
    switch (VAR3)
    {
    case VAR8:
        FUN2(VAR4, VAR5, VAR6);
        FUN3(VAR2, VAR4);
        break;
    case VAR9:
        FUN2(VAR4, VAR5, VAR6);
        FUN4(VAR4, 0);
        break;
    case VAR10:
        FUN2(VAR4, VAR5, VAR6);
        FUN4(VAR4, 8);
        break;
    case VAR11:
        FUN5(VAR4, VAR5, VAR6);
        FUN6(VAR2, VAR4);
        break;
    case VAR12:
        FUN7(VAR4, VAR6);
        break;
    case VAR13:
        FUN8(VAR4, VAR5, VAR6);
        break;
    case VAR14:
        FUN9(VAR4, VAR5, VAR6);
        break;
    case VAR15:
        FUN10(VAR4, VAR5, VAR6);
        break;
    case VAR16:
        FUN11(VAR4, VAR5, VAR6);
        break;
    case VAR17:
        FUN12(VAR4, VAR5, VAR6);
        break;
    case VAR18:
        FUN13(VAR4, VAR5, VAR6);
        break;
    case VAR19:
        FUN14(VAR4, VAR6);
        FUN6(VAR2, VAR4);
        break;
    case VAR20:
        FUN15(VAR4, VAR6);
        break;
    case VAR21:
        FUN16(VAR4, VAR22[VAR23], VAR5, VAR6);
        break;
    case VAR24:
        FUN17(VAR4, VAR22[VAR23], VAR5, VAR6);
        break;
    case VAR25:
        FUN18(VAR4, VAR5, VAR6);
        break;
    case VAR26:
        FUN19(VAR4, VAR5, VAR6, VAR22[VAR27]);
        break;
    case VAR28:
    {
        VAR29 *VAR30 = FUN20();
        FUN7(VAR4, VAR5);
        FUN21(VAR31, VAR5, VAR6, VAR30);
        FUN7(VAR4, VAR6);
        FUN22(VAR30);
    }
    break;
    case VAR32:
        FUN5(VAR4, VAR5, VAR6);
        FUN6(VAR2, VAR4);
        break;
    default:
        FUN23("");
        FUN24();
        break;
    }
    if (VAR7 == 1)
    {
        FUN25(VAR4, VAR4, 0xff);
    }
    else if (VAR7 == 2)
    {
        FUN25(VAR4, VAR4, 0xffff);
    }
}