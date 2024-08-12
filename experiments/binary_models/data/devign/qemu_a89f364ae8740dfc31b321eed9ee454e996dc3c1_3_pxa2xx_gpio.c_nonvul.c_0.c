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
        break;
    case VAR14:
        VAR6->VAR13[VAR7] &= ~VAR3;
        FUN2(VAR6);
        break;
    case VAR15:
        VAR6->VAR16[VAR7] = VAR3;
        break;
    case VAR17:
        VAR6->VAR18[VAR7] = VAR3;
        break;
    case VAR19:
        VAR6->VAR20[VAR7 * 2] = VAR3;
        break;
    case VAR21:
        VAR6->VAR20[VAR7 * 2 + 1] = VAR3;
        break;
    case VAR22:
        VAR6->VAR23[VAR7] &= ~VAR3;
        FUN3(VAR6);
        break;
    default:
        FUN4("" VAR24 "", VAR25, VAR2);
    }
}