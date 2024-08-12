static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7, uint32_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    uint32_t VAR11 = 0;
    uint32_t VAR12 = *VAR4->VAR13.VAR14;
    VAR5 *VAR15 = VAR4->VAR13.VAR14;
    if (!(VAR2->VAR16->VAR17 & VAR18))
    {
        FUN2(&VAR2->VAR19, "");
        return -1;
    }
    VAR11 = VAR10->VAR20 & ~VAR10->VAR21 & VAR8;
    *VAR15 = FUN3(*VAR6, *VAR15, VAR11);
    VAR2->VAR16->VAR22 = *VAR15;
    *VAR6 = FUN3(*VAR6, VAR7, 0);
    if (*VAR15 != VAR12)
    {
        if (VAR2->VAR16->VAR23)
        {
            FUN4(VAR2);
        }
    }
    return 0;
}