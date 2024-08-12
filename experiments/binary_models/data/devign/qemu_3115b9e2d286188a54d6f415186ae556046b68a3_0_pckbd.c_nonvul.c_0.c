static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    FUN2("" VAR7 "", VAR3);
    if ((VAR3 & VAR8) == VAR8)
    {
        if (!(VAR3 & 1))
            VAR3 = VAR9;
        else
            VAR3 = VAR10;
    }
    switch (VAR3)
    {
    case VAR11:
        FUN3(VAR6, VAR6->VAR12, 0);
        break;
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
        VAR6->VAR18 = VAR3;
        break;
    case VAR19:
        VAR6->VAR12 |= VAR20;
        break;
    case VAR21:
        VAR6->VAR12 &= ~VAR20;
        break;
    case VAR22:
        FUN3(VAR6, 0x00, 0);
        break;
    case VAR23:
        VAR6->VAR24 |= VAR25;
        FUN3(VAR6, 0x55, 0);
        break;
    case VAR26:
        FUN3(VAR6, 0x00, 0);
        break;
    case VAR27:
        VAR6->VAR12 |= VAR28;
        FUN4(VAR6);
        break;
    case VAR29:
        VAR6->VAR12 &= ~VAR28;
        FUN4(VAR6);
        break;
    case VAR30:
        FUN3(VAR6, 0x80, 0);
        break;
    case VAR31:
        FUN3(VAR6, VAR6->VAR32, 0);
        break;
    case VAR33:
        FUN5(VAR6->VAR34);
        VAR6->VAR32 |= VAR35;
        break;
    case VAR36:
        FUN6(VAR6->VAR34);
        VAR6->VAR32 &= ~VAR35;
        break;
    case VAR9:
        FUN7();
        break;
    case VAR10:
        break;
    default:
        fprintf(VAR37, "", (int)VAR3);
        break;
    }
}