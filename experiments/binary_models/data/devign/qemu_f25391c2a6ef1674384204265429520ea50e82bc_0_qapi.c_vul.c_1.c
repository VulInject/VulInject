static void FUN1(fprintf_function VAR1, void *VAR2, int VAR3, VAR4 *VAR5)
{
    switch (FUN2(VAR5))
    {
    case VAR6:
    {
        VAR7 *VAR8 = FUN3(VAR5);
        FUN4(VAR2, "" VAR9, FUN5(VAR8));
        break;
    }
    case VAR10:
    {
        VAR11 *VAR8 = FUN6(VAR5);
        FUN4(VAR2, "", FUN7(VAR8));
        break;
    }
    case VAR12:
    {
        VAR13 *VAR8 = FUN8(VAR5);
        FUN9(VAR1, VAR2, VAR3, VAR8);
        break;
    }
    case VAR14:
    {
        VAR15 *VAR8 = FUN10(VAR5);
        FUN11(VAR1, VAR2, VAR3, VAR8);
        break;
    }
    case VAR16:
    {
        VAR17 *VAR8 = FUN12(VAR5);
        FUN4(VAR2, "", FUN13(VAR8));
        break;
    }
    case VAR18:
    {
        VAR19 *VAR8 = FUN14(VAR5);
        FUN4(VAR2, "", FUN15(VAR8) ? "" : "");
        break;
    }
    case VAR20:
    {
        VAR11 *VAR8 = FUN16((VAR21 *)VAR5);
        FUN4(VAR2, "", FUN7(VAR8));
        break;
    }
    case VAR22:
        break;
    case VAR23:
    default:
        FUN17();
    }