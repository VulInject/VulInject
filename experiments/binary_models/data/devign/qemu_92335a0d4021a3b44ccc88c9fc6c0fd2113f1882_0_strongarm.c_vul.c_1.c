static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8 = VAR3;
        FUN2(VAR6);
        break;
    case VAR9:
        VAR6->VAR10 |= VAR3;
        FUN2(VAR6);
        VAR6->VAR11 = VAR3;
        break;
    case VAR12:
        VAR6->VAR10 &= ~VAR3;
        FUN2(VAR6);
        break;
    case VAR13:
        VAR6->VAR14 = VAR3;
        break;
    case VAR15:
        VAR6->VAR16 = VAR3;
        break;
    case VAR17:
        VAR6->VAR18 = VAR3;
        break;
    case VAR19:
        VAR6->VAR20 &= ~VAR3;
        FUN3(VAR6);
        break;
    default:
        FUN4("" VAR21 "", VAR22, VAR2);
    }
}