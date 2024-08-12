static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR2;
    uint32_t VAR6;
    int VAR7;
    VAR3 -= VAR5->VAR8;
    if (VAR3 >= 0x200)
        return 0;
    VAR7 = VAR9[VAR3].VAR7;
    switch (VAR9[VAR3].VAR10)
    {
    case VAR11:
        return VAR5->VAR12[VAR7];
    case VAR13:
        return VAR5->VAR14[VAR7];
    case VAR15:
        return VAR5->VAR16[VAR7];
    case VAR17:
        return VAR5->VAR18[VAR7 * 2];
    case VAR19:
        return VAR5->VAR18[VAR7 * 2 + 1];
    case VAR20:
        VAR6 = (VAR5->VAR21[VAR7] & VAR5->VAR12[VAR7]) | (VAR5->VAR22[VAR7] & ~VAR5->VAR12[VAR7]);
        if (VAR5->VAR23)
            VAR5->FUN2(VAR5->VAR2);
        return VAR6;
    case VAR24:
        return VAR5->VAR25[VAR7];
    default:
        FUN3(VAR26, "" VAR27 "", VAR28, VAR3);
    }
    return 0;