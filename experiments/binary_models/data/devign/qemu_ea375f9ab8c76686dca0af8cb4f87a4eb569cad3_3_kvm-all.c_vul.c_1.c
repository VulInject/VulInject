int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR3;
    int VAR5;
    FUN2("");
    do
    {
        if (VAR2->VAR6)
        {
            FUN2("");
            VAR5 = 0;
            break;
        }
        if (VAR2->VAR7)
        {
            FUN3(VAR2);
            VAR2->VAR7 = 0;
        }
        FUN4(VAR2, VAR4);
        FUN5();
        VAR5 = FUN6(VAR2, VAR8, 0);
        FUN7();
        FUN8(VAR2, VAR4);
        if (VAR5 == -VAR9 || VAR5 == -VAR10)
        {
            FUN9(VAR2);
            FUN2("");
            VAR5 = 0;
            break;
        }
        if (VAR5 < 0)
        {
            FUN2("", strerror(-VAR5));
            FUN10();
        }
        FUN11();
        VAR5 = 0;
        switch (VAR4->VAR11)
        {
        case VAR12:
            FUN2("");
            VAR5 = FUN12(VAR4->VAR13.VAR14, (VAR15 *)VAR4 + VAR4->VAR13.VAR16, VAR4->VAR13.VAR17, VAR4->VAR13.VAR18, VAR4->VAR13.VAR19);
            break;
        case VAR20:
            FUN2("");
            FUN13(VAR4->VAR21.VAR22, VAR4->VAR21.VAR23, VAR4->VAR21.VAR24, VAR4->VAR21.VAR25);
            VAR5 = 1;
            break;
        case VAR26:
            FUN2("");
            break;
        case VAR27:
            FUN2("");
            FUN14();
            VAR5 = 1;
            break;
        case VAR28:
            FUN2("");
            break;
        case VAR29:
            FUN2("");
            break;
        case VAR30:
            FUN2("");
            break;
        case VAR31:
            FUN2("");
            if (FUN15(&VAR4->VAR32.VAR33))
            {
                FUN16(VAR2);
                FUN17(VAR34);
                VAR2->VAR35 = VAR34;
                return 0;
            }
            VAR5 = 1;
            break;
        default:
            FUN2("");
            VAR5 = FUN18(VAR2, VAR4);
            break;
        }
    } while (VAR5 > 0);
    if (VAR2->VAR6)
    {
        VAR2->VAR6 = 0;
        VAR2->VAR35 = VAR36;
    }
    return VAR5;
}