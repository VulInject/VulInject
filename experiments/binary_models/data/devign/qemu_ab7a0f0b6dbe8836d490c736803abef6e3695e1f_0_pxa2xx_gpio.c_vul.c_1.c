static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7;
    if (VAR2 >= 0x200)
        return;
    VAR7 = VAR8[VAR2].VAR7;
    switch (VAR8[VAR2].VAR9)
    {
    case VAR10:
        VAR6->VAR11[VAR7] = VAR3;
        FUN2(VAR6);
        break;
    case VAR12:
        VAR6->VAR13[VAR7] |= VAR3;
        FUN2(VAR6);
        VAR6->VAR14[VAR7] = VAR3;
        break;
    case VAR15:
        VAR6->VAR13[VAR7] &= ~VAR3;
        FUN2(VAR6);
        break;
    case VAR16:
        VAR6->VAR17[VAR7] = VAR3;
        break;
    case VAR18:
        VAR6->VAR19[VAR7] = VAR3;
        break;
    case VAR20:
        VAR6->VAR21[VAR7 * 2] = VAR3;
        break;
    case VAR22:
        VAR6->VAR21[VAR7 * 2 + 1] = VAR3;
        break;
    case VAR23:
        VAR6->VAR24[VAR7] &= ~VAR3;
        FUN3(VAR6);
        break;
    default:
        FUN4("" VAR25 "", VAR26, VAR2);
    }
}