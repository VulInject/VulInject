VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR1 *VAR7 = FUN2(VAR1, 1);
    VAR8 *VAR9, *VAR10 = NULL;
    VAR10 = FUN3(VAR2);
    if (VAR10)
    {
        FUN4(VAR6, "", VAR2);
        FUN5(VAR7);
        return NULL;
    }
    switch (VAR4->VAR11)
    {
    case VAR12:
        VAR10 = FUN6(VAR4->VAR13, VAR6);
        break;
    case VAR14:
        VAR10 = FUN7(VAR4->VAR15, VAR6);
        break;
    case VAR16:
        VAR10 = FUN8(VAR4->VAR17, VAR6);
        break;
    case VAR18:
        VAR10 = FUN9(VAR4->socket, VAR6);
        break;
    case VAR19:
        VAR10 = FUN10(VAR2, VAR7);
        break;
    case VAR20:
        VAR10 = FUN11();
        break;
    case VAR21:
        VAR9 = FUN3(VAR4->VAR22->VAR23);
        if (VAR9 == NULL)
        {
            FUN4(VAR6, "", VAR4->VAR22->VAR23);
            break;
        }
        VAR10 = FUN12(VAR9);
        break;
    case VAR24:
        VAR10 = FUN13();
        break;
    case VAR25:
        VAR10 = FUN14();
        break;
    case VAR26:
        VAR10 = FUN15(VAR4->VAR27);
        break;
    default:
        FUN4(VAR6, "", VAR4->VAR11);
        break;
    }
    if (VAR10 == NULL && !FUN16(VAR6))
    {
        FUN4(VAR6, "");
    }
    if (VAR10)
    {
        VAR10->VAR28 = FUN17(VAR2);
        VAR10->VAR29 = (VAR4->VAR11 == VAR21) ? VAR30 : 1;
        FUN18(&VAR31, VAR10, VAR32);
        return VAR7;
    }
    else
    {
        FUN5(VAR7);
        return NULL;
    }
}