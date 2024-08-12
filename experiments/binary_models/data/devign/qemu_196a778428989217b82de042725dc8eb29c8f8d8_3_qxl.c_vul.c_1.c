static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6 = VAR2 - VAR5->VAR7;
    switch (VAR6)
    {
    case VAR8:
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
        break;
    default:
        if (VAR5->VAR13 == VAR14 || VAR5->VAR13 == VAR15)
            break;
        FUN2(VAR5, 1, "", VAR16, VAR6);
        return;
    }
    switch (VAR6)
    {
    case VAR17:
    {
        QXLRect update = VAR5->VAR18->VAR19;
        FUN3();
        VAR5->VAR20.VAR21->FUN4(VAR5->VAR20.VAR21, VAR5->VAR18->VAR22, &update, NULL, 0, 0);
        FUN5();
        break;
    }
    case VAR23:
        VAR5->VAR20.VAR21->FUN6(VAR5->VAR20.VAR21);
        break;
    case VAR24:
        VAR5->VAR20.VAR21->FUN6(VAR5->VAR20.VAR21);
        break;
    case VAR25:
        FUN7(VAR5);
        break;
    case VAR26:
        if (!FUN8(&VAR5->VAR18->VAR27))
        {
            break;
        }
        FUN9();
        if (!FUN8(&VAR5->VAR18->VAR27))
        {
            break;
        }
        VAR5->VAR28 = 1;
        VAR5->VAR20.VAR21->FUN10(VAR5->VAR20.VAR21);
        VAR5->VAR28 = 0;
        break;
    case VAR9:
        FUN2(VAR5, 1, "", VAR3);
        FUN11(VAR5, VAR3, 0);
        break;
    case VAR29:
        if (VAR5->VAR30)
        {
            fprintf(VAR31, "", VAR5->VAR18->VAR32);
        }
        break;
    case VAR8:
        FUN2(VAR5, 1, "");
        FUN12(VAR5, 0);
        break;
    case VAR10:
        FUN13(VAR3 >= VAR33);
        FUN13(VAR5->VAR34[VAR3].VAR35);
        VAR5->VAR34[VAR3].VAR36 = VAR5->VAR18->VAR37;
        FUN14(VAR5, VAR3, 0);
        break;
    case VAR11:
        FUN15(VAR5, VAR3);
        break;
    case VAR12:
        FUN13(VAR3 != 0);
        FUN2(VAR5, 1, "");
        VAR5->VAR38.VAR39 = VAR5->VAR18->VAR40;
        FUN16(VAR5, 0);
        break;
    case VAR41:
        FUN13(VAR3 != 0);
        FUN2(VAR5, 1, "");
        FUN17(VAR5);
        break;
    case VAR42:
        VAR5->VAR20.VAR21->FUN18(VAR5->VAR20.VAR21, VAR3);
        break;
    case VAR43:
        VAR5->VAR20.VAR21->FUN19(VAR5->VAR20.VAR21);
        break;
    default:
        fprintf(VAR31, "", VAR16, VAR6);
        FUN20();
    }
}