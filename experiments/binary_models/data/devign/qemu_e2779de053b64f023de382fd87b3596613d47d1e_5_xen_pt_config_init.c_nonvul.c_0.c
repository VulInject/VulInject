static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint16_t VAR7, uint16_t VAR8)
{
    VAR9 *VAR10 = VAR4->VAR10;
    uint16_t VAR11 = 0;
    uint16_t VAR12 = FUN2(VAR2, VAR10, VAR8);
    int VAR13;
    VAR5 *VAR14 = VAR4->VAR15.VAR16;
    VAR11 = VAR10->VAR17 & ~VAR10->VAR18 & VAR8;
    *VAR14 = FUN3(*VAR6, *VAR14, VAR11);
    *VAR6 = FUN3(*VAR6, VAR7, VAR12);
    if ((*VAR6 & VAR19) && !(*VAR6 & VAR20))
    {
        FUN4(VAR2);
    }
    else if (!(*VAR6 & VAR19) && VAR2->VAR21->VAR22)
    {
        FUN5(VAR2);
    }
    VAR13 = VAR2->VAR21->VAR22;
    VAR2->VAR21->VAR22 = !!(*VAR6 & VAR19);
    if (VAR2->VAR21->VAR22 != VAR13)
    {
        FUN6(&VAR2->VAR23, "", VAR2->VAR21->VAR22 ? "" : "");
    }
    return 0;
}