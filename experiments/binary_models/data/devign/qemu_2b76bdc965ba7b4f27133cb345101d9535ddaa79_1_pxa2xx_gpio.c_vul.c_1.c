static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR1;
    int VAR6;
    VAR2 -= VAR5->VAR7;
    if (VAR2 >= 0x200)
        return;
    VAR6 = VAR8[VAR2].VAR6;
    switch (VAR8[VAR2].VAR9)
    {
    case VAR10:
        VAR5->VAR11[VAR6] = VAR3;
        FUN2(VAR5);
        break;
    case VAR12:
        VAR5->VAR13[VAR6] |= VAR3;
        FUN2(VAR5);
        break;
    case VAR14:
        VAR5->VAR13[VAR6] &= ~VAR3;
        FUN2(VAR5);
        break;
    case VAR15:
        VAR5->VAR16[VAR6] = VAR3;
        break;
    case VAR17:
        VAR5->VAR18[VAR6] = VAR3;
        break;
    case VAR19:
        VAR5->VAR20[VAR6 * 2] = VAR3;
        break;
    case VAR21:
        VAR5->VAR20[VAR6 * 2 + 1] = VAR3;
        break;
    case VAR22:
        VAR5->VAR23[VAR6] &= ~VAR3;
        FUN3(VAR5);
        break;
    default:
        FUN4(VAR24, "" VAR25 "", VAR26, VAR2);
    }