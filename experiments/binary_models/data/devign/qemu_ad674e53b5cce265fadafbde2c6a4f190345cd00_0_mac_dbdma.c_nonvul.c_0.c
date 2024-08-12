static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    int VAR4 = VAR2 >> VAR5;
    VAR6 *VAR7 = (VAR6 *)VAR1 + VAR4;
    int VAR8 = (VAR2 - (VAR4 << VAR5)) >> 2;
    FUN2("" VAR9 "", VAR2, VAR3);
    FUN2("", (VAR10)VAR2 >> VAR5, VAR8);
    VAR3 = FUN3(VAR3);
    if (VAR8 == VAR11 && (VAR7->VAR12[VAR13] & (VAR14 | VAR15)))
        return;
    VAR7->VAR12[VAR8] = VAR3;
    switch (VAR8)
    {
    case VAR16:
        FUN4(VAR7);
        break;
    case VAR11:
        VAR7->VAR12[VAR11] &= ~0xf;
        FUN5(VAR7);
        break;
    case VAR13:
    case VAR17:
    case VAR18:
    case VAR19:
        break;
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
        break;
    }
}