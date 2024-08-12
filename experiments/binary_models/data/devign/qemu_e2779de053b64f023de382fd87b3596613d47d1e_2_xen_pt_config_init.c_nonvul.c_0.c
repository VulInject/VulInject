static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7, uint32_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = &VAR2->VAR15;
    const VAR16 *VAR17;
    uint32_t VAR18 = 0;
    uint32_t VAR19 = 0;
    uint32_t VAR20 = 0;
    uint32_t VAR21 = 0;
    int VAR22 = 0;
    VAR5 *VAR23 = VAR4->VAR24.VAR25;
    VAR22 = FUN2(VAR10->VAR26);
    if (VAR22 < 0 || VAR22 >= VAR27)
    {
        FUN3(VAR14, "", VAR22);
        return -1;
    }
    VAR17 = &VAR14->VAR28[VAR22];
    VAR12 = &VAR2->VAR29[VAR22];
    VAR21 = FUN4(VAR12->VAR30, VAR17->VAR31);
    switch (VAR2->VAR29[VAR22].VAR30)
    {
    case VAR32:
        VAR19 = VAR33;
        if (!VAR21)
        {
            VAR20 = VAR34;
        }
        else
        {
            VAR20 = VAR35 | (VAR21 - 1);
        }
        break;
    case VAR36:
        VAR19 = VAR37;
        VAR20 = VAR38 | (VAR21 - 1);
        break;
    case VAR39:
        VAR19 = VAR34;
        VAR20 = VAR21 ? VAR21 - 1 : 0;
        break;
    default:
        break;
    }
    VAR18 = VAR19 & ~VAR20 & VAR8;
    *VAR23 = FUN5(*VAR6, *VAR23, VAR18);
    switch (VAR2->VAR29[VAR22].VAR30)
    {
    case VAR39:
    case VAR32:
        break;
    case VAR36:
        break;
    default:
        break;
    }
    *VAR6 = FUN5(*VAR6, VAR7, 0);
    return 0;
}