static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (FUN2(VAR5, VAR2))
    {
        unsigned VAR6 = FUN3(VAR2);
        unsigned VAR7 = VAR2 & VAR8;
        switch (VAR7)
        {
        case VAR9:
            VAR5->VAR10 = (VAR11)VAR3;
            break;
        case VAR9 + 4:
            FUN4(VAR5->VAR12[VAR6], ((VAR11)VAR3) << 32 | VAR5->VAR10);
            VAR5->VAR10 = 0;
            break;
        case VAR13:
            FUN5(VAR5->VAR12[VAR6], VAR3);
            break;
        case VAR14:
            if (FUN6(VAR5->VAR12[VAR6], VAR3))
            {
                FUN7(VAR5, FUN8(VAR5->VAR12[VAR6]));
            }
            break;
        case VAR15:
            FUN9(VAR5->VAR12[VAR6], VAR3);
            break;
        case VAR16:
            if (FUN10(VAR5->VAR12[VAR6], VAR3))
            {
                FUN7(VAR5, FUN8(VAR5->VAR12[VAR6]));
            }
            break;
        default:
            FUN11("" VAR17 "", VAR2, VAR3, VAR6, VAR7);
            break;
        }
        return;
    }
    switch (VAR2)
    {
    case VAR18:
        VAR5->VAR19 = VAR3;
        break;
    case VAR20:
    case VAR21:
    case VAR22:
        VAR5->VAR10 = (VAR11)VAR3;
        break;
    case VAR20 + 4:
        VAR5->VAR23 = ((VAR11)VAR3) << 32 | VAR5->VAR10;
        VAR5->VAR10 = 0;
        break;
    case VAR24:
        FUN7(VAR5, VAR3);
        break;
    case VAR25:
        VAR5->VAR26 = VAR3 & 0xFFFF;
        break;
    case VAR21 + 4:
        VAR5->VAR27 = ((VAR11)VAR3) << 32 | VAR5->VAR10;
        VAR5->VAR10 = 0;
        break;
    case VAR28:
        FUN12(VAR5, VAR3);
        break;
    case VAR29:
        FUN13(VAR5, VAR3);
        break;
    case VAR22 + 4:
        FUN14(VAR5, ((VAR11)VAR3) << 32 | VAR5->VAR10);
        VAR5->VAR10 = 0;
        break;
    default:
        FUN11("" VAR17 "", VAR2, VAR3);
        break;
    }
}