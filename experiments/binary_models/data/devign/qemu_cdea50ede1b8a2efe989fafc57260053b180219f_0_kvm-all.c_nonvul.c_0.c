int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR3;
    int VAR5;
    FUN2("");
    if (FUN3(VAR2))
    {
        VAR2->VAR6 = 0;
        VAR2->VAR7 = VAR8;
        return 0;
    }
    do
    {
        if (VAR2->VAR9)
        {
            FUN4(VAR2, VAR10);
            VAR2->VAR9 = 0;
        }
        FUN5(VAR2, VAR4);
        if (VAR2->VAR6)
        {
            FUN2("");
            FUN6();
        }
        VAR11 = NULL;
        FUN7();
        VAR5 = FUN8(VAR2, VAR12, 0);
        FUN9();
        VAR11 = VAR2;
        FUN10(VAR2, VAR4);
        FUN11();
        if (VAR5 == -VAR13 || VAR5 == -VAR14)
        {
            FUN12(VAR2);
            FUN2("");
            VAR5 = 0;
            break;
        }
        if (VAR5 < 0)
        {
            FUN2("", strerror(-VAR5));
            FUN13();
        }
        VAR5 = 0;
        switch (VAR4->VAR15)
        {
        case VAR16:
            FUN2("");
            FUN14(VAR4->VAR17.VAR18, (VAR19 *)VAR4 + VAR4->VAR17.VAR20, VAR4->VAR17.VAR21, VAR4->VAR17.VAR22, VAR4->VAR17.VAR23);
            VAR5 = 1;
            break;
        case VAR24:
            FUN2("");
            FUN15(VAR4->VAR25.VAR26, VAR4->VAR25.VAR27, VAR4->VAR25.VAR28, VAR4->VAR25.VAR29);
            VAR5 = 1;
            break;
        case VAR30:
            FUN2("");
            break;
        case VAR31:
            FUN2("");
            FUN16();
            break;
        case VAR32:
            fprintf(VAR33, "" VAR34 "", (VAR35)VAR4->VAR36.VAR37);
            VAR5 = -1;
            break;
        case VAR38:
            VAR5 = FUN17(VAR2, VAR4);
            break;
        case VAR39:
            FUN2("");
            if (FUN18(&VAR4->VAR40.VAR41))
            {
                VAR2->VAR7 = VAR42;
                return 0;
            }
            VAR5 = 1;
            break;
        default:
            FUN2("");
            VAR5 = FUN19(VAR2, VAR4);
            break;
        }
    } while (VAR5 > 0);
    if (VAR5 < 0)
    {
        FUN20(VAR2, VAR33, fprintf, VAR43);
        FUN21(0);
        VAR2->VAR6 = 1;
    }
    if (VAR2->VAR6)
    {
        VAR2->VAR6 = 0;
        VAR2->VAR7 = VAR44;
    }
    return VAR5;
}