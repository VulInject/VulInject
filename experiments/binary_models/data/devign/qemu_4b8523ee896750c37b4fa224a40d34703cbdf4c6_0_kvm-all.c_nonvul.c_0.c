int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR3;
    int VAR5, VAR6;
    FUN2("");
    if (FUN3(VAR2))
    {
        VAR2->VAR7 = 0;
        return VAR8;
    }
    FUN4();
    do
    {
        MemTxAttrs VAR9;
        if (VAR2->VAR10)
        {
            FUN5(VAR2, VAR11);
            VAR2->VAR10 = false;
        }
        FUN6(VAR2, VAR4);
        if (VAR2->VAR7)
        {
            FUN2("");
            FUN7();
        }
        VAR6 = FUN8(VAR2, VAR12, 0);
        VAR9 = FUN9(VAR2, VAR4);
        if (VAR6 < 0)
        {
            if (VAR6 == -VAR13 || VAR6 == -VAR14)
            {
                FUN2("");
                VAR5 = VAR15;
                break;
            }
            fprintf(VAR16, "", strerror(-VAR6));
            if (VAR6 == -VAR17)
            {
                fprintf(VAR16, ""
                                ""
                                "");
            }
            VAR5 = -1;
            break;
        }
        FUN10(VAR2->VAR18, VAR4->VAR19);
        switch (VAR4->VAR19)
        {
        case VAR20:
            FUN2("");
            FUN11();
            FUN12(VAR4->VAR21.VAR22, VAR9, (VAR23 *)VAR4 + VAR4->VAR21.VAR24, VAR4->VAR21.VAR25, VAR4->VAR21.VAR26, VAR4->VAR21.VAR27);
            FUN4();
            VAR5 = 0;
            break;
        case VAR28:
            FUN2("");
            FUN11();
            FUN13(&VAR29, VAR4->VAR30.VAR31, VAR9, VAR4->VAR30.VAR32, VAR4->VAR30.VAR33, VAR4->VAR30.VAR34);
            FUN4();
            VAR5 = 0;
            break;
        case VAR35:
            FUN2("");
            VAR5 = VAR15;
            break;
        case VAR36:
            FUN2("");
            FUN14();
            VAR5 = VAR15;
            break;
        case VAR37:
            fprintf(VAR16, "" VAR38 "", (VAR39)VAR4->VAR40.VAR41);
            VAR5 = -1;
            break;
        case VAR42:
            VAR5 = FUN15(VAR2, VAR4);
            break;
        case VAR43:
            switch (VAR4->VAR44.VAR45)
            {
            case VAR46:
                FUN16();
                VAR5 = VAR15;
                break;
            case VAR47:
                FUN14();
                VAR5 = VAR15;
                break;
            default:
                FUN2("");
                VAR5 = FUN17(VAR2, VAR4);
                break;
            }
            break;
        default:
            FUN2("");
            VAR5 = FUN17(VAR2, VAR4);
            break;
        }
    } while (VAR5 == 0);
    FUN11();
    if (VAR5 < 0)
    {
        FUN18(VAR2, VAR16, fprintf, VAR48);
        FUN19(VAR49);
    }
    VAR2->VAR7 = 0;
    return VAR5;
}