static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint8_t VAR7;
    FUN2("", VAR6->VAR8, VAR2, FUN3(VAR2), (long long unsigned int)VAR3);
    switch (VAR2)
    {
    case VAR9:
    case VAR10:
    case VAR11:
        VAR6->VAR12[FUN4(VAR2)] = VAR3;
        FUN5(VAR6);
        break;
    case VAR13:
        VAR6->VAR12[FUN4(VAR13)] = VAR3;
        if (VAR3 & VAR14)
        {
            FUN6(&VAR6->VAR15);
            VAR6->VAR12[FUN4(VAR13)] &= ~VAR14;
            FUN7("", VAR6->VAR8);
        }
        if (VAR3 & VAR16)
        {
            FUN6(&VAR6->VAR17);
            VAR6->VAR12[FUN4(VAR13)] &= ~VAR16;
            FUN7("", VAR6->VAR8);
        }
        break;
    case VAR18:
        if (VAR6->VAR19)
        {
            VAR6->VAR12[FUN4(VAR20)] &= ~(VAR21 | VAR22);
            VAR7 = (VAR23)VAR3;
            FUN8(VAR6->VAR19, &VAR7, 1);
            fprintf(VAR24, "", VAR7);
            VAR6->VAR12[FUN4(VAR20)] |= VAR21 | VAR22;
            VAR6->VAR12[FUN4(VAR25)] |= VAR26;
            FUN9(VAR6);
        }
        break;
    case VAR27:
        VAR6->VAR12[FUN4(VAR27)] &= ~VAR3;
        VAR6->VAR12[FUN4(VAR25)] &= ~VAR3;
        FUN7("", VAR6->VAR8, VAR2, VAR6->VAR12[FUN4(VAR27)]);
        FUN9(VAR6);
        break;
    case VAR20:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
        FUN7("", VAR6->VAR8, FUN3(VAR2), VAR2);
        break;
    case VAR25:
        VAR6->VAR12[FUN4(VAR25)] &= ~VAR3;
        break;
    case VAR32:
        VAR6->VAR12[FUN4(VAR32)] = VAR3;
        FUN9(VAR6);
        break;
    case VAR33:
    case VAR34:
    default:
        VAR6->VAR12[FUN4(VAR2)] = VAR3;
        break;
    }
}