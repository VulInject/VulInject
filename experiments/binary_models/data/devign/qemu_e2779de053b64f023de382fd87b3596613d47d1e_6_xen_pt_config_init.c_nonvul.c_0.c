static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7, uint32_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    uint32_t VAR11 = 0;
    uint32_t VAR12 = *VAR4->VAR13.VAR14;
    VAR5 *VAR15 = VAR4->VAR13.VAR14;
    VAR11 = VAR10->VAR16 & ~VAR10->VAR17 & VAR8;
    *VAR15 = FUN2(*VAR6, *VAR15, VAR11);
    VAR2->VAR18->VAR19 = *VAR15;
    *VAR6 = FUN2(*VAR6, VAR7, 0);
    if (*VAR15 != VAR12)
    {
        if (VAR2->VAR18->VAR20)
        {
            FUN3(VAR2);
        }
    }
    return 0;
}