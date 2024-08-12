static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    VAR8 *VAR9 = VAR4->VAR9;
    uint32_t VAR10 = 0;
    uint32_t VAR11 = 0;
    int VAR12;
    VAR12 = FUN2(VAR9->VAR13);
    if (VAR12 < 0 || VAR12 >= VAR14)
    {
        FUN3(&VAR2->VAR15, "", VAR12);
        return -1;
    }
    *VAR6 = FUN4(&VAR2->VAR16.VAR17[VAR12]);
    switch (VAR2->VAR18[VAR12].VAR19)
    {
    case VAR20:
        VAR11 = VAR21;
        break;
    case VAR22:
        VAR11 = VAR23;
        break;
    case VAR24:
        VAR11 = VAR25;
        break;
    default:
        break;
    }
    VAR10 = VAR11 & VAR7;
    *VAR6 = FUN5(*VAR6, VAR4->VAR26, ~VAR10);
    return 0;
}