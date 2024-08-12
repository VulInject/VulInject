int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    target_phys_addr_t VAR10;
    int VAR11, VAR12, VAR13;
    VAR13 = -1;
    VAR10 = -1;
    for (VAR11 = 0; VAR11 < VAR2->VAR14; VAR11++)
    {
        VAR9 = &VAR2->VAR9[VAR11].VAR15;
        if (FUN2(VAR2, VAR9, &VAR10, VAR5, VAR2->VAR16[VAR17], 1, VAR11) < 0)
            continue;
        if (VAR18 != 0)
            VAR12 = VAR9->VAR12 & 0xF;
        else
            VAR12 = (VAR9->VAR12 >> 4) & 0xF;
        if (VAR7 == VAR19)
        {
            if (VAR20 != (VAR9->VAR21 & 1))
                continue;
            VAR4->VAR12 = VAR12;
            if (VAR12 & VAR22)
            {
                VAR13 = 0;
                break;
            }
            VAR13 = -3;
        }
        else
        {
            if (VAR23 != (VAR9->VAR21 & 1))
                continue;
            VAR4->VAR12 = VAR12;
            if ((!VAR6 && VAR12 & VAR24) || (VAR6 && (VAR12 & VAR25)))
            {
                VAR13 = 0;
                break;
            }
            VAR13 = -2;
        }
    }
    if (VAR13 >= 0)
        VAR4->VAR10 = VAR10;
    return VAR13;
}