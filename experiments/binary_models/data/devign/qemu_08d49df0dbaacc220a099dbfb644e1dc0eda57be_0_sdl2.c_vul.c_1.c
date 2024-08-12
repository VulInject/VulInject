static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2->VAR5.VAR6);
    switch (VAR2->VAR5.VAR7)
    {
    case VAR8:
    {
        QemuUIInfo VAR9;
        memset(&VAR9, 0, sizeof(VAR9));
        VAR9.VAR10 = VAR2->VAR5.VAR11;
        VAR9.VAR12 = VAR2->VAR5.VAR13;
        FUN3(VAR4->VAR14.VAR15, &VAR9);
        FUN4(VAR4);
        break;
    case VAR16:
        FUN4(VAR4);
        break;
    case VAR17:
    case VAR18:
        if (!VAR19 && (FUN5() || VAR20))
        {
            FUN6(VAR4);
            break;
        case VAR21:
            if (VAR19 && !VAR22)
            {
                FUN7(VAR4);
                break;
            case VAR23:
                FUN8(&VAR4->VAR14, VAR24);
                break;
            case VAR25:
                FUN8(&VAR4->VAR14, 500);
                break;
            case VAR26:
                if (!VAR27)
                {
                    VAR28 = 0;
                    FUN9();
                    break;
                case VAR29:
                    if (VAR4->VAR30)
                    {
                        FUN10(VAR4->VAR31);
                        break;
                    case VAR32:
                        if (!VAR4->VAR30)
                        {
                            FUN11(VAR4->VAR31);
                            break