static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint16_t VAR7, uint16_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    uint16_t VAR13 = 0;
    uint16_t VAR14 = *VAR4->VAR15.VAR16;
    uint32_t VAR17 = VAR10->VAR17;
    VAR5 *VAR18 = VAR4->VAR15.VAR16;
    if (!FUN2(VAR17, VAR12->VAR19, VAR20))
    {
        FUN3(&VAR2->VAR21, "");
        return -1;
    }
    VAR13 = VAR10->VAR22 & ~VAR10->VAR23 & VAR8;
    *VAR18 = FUN4(*VAR6, *VAR18, VAR13);
    VAR12->VAR18 = *VAR18;
    *VAR6 = FUN4(*VAR6, VAR7, 0);
    if (*VAR18 != VAR14)
    {
        if (VAR12->VAR24)
        {
            FUN5(VAR2);
        }
    }
    return 0;
}