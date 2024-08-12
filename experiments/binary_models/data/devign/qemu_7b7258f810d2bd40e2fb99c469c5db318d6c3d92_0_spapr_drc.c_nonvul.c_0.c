static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10, VAR11, VAR12;
    uint32_t VAR13 = VAR14;
    if (VAR6 != 3 || VAR8 != 1)
    {
        VAR13 = VAR15;
        goto VAR16;
    }
    VAR10 = FUN2(VAR7, 0);
    VAR11 = FUN2(VAR7, 1);
    VAR12 = FUN2(VAR7, 2);
    switch (VAR10)
    {
    case VAR17:
        VAR13 = FUN3(VAR11, VAR12);
        break;
    case VAR18:
        VAR13 = FUN4(VAR11, VAR12);
        break;
    case VAR19:
        VAR13 = FUN5(VAR11, VAR12);
        break;
    default:
        VAR13 = VAR20;
    }
VAR16:
    FUN6(VAR9, 0, VAR13);
}