FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    uint32_t VAR6 = VAR2->VAR7[VAR8];
    uint32_t VAR9 = VAR2->VAR7[VAR10];
    uint32_t VAR11 = VAR2->VAR7[VAR12];
    if (FUN2(VAR2->VAR13))
    {
        return false;
    }
    VAR5 = VAR14 | VAR15 | VAR16;
    if (!(VAR2->VAR7[VAR17] & VAR18))
    {
        VAR5 |= VAR19;
    }
    VAR2->VAR20 |= *VAR4 & VAR5;
    *VAR4 &= ~VAR5;
    if ((VAR6 == 0) || (*VAR4 != 0))
    {
        return false;
    }
    if ((VAR11 == 0) && (VAR2->VAR20 & VAR19))
    {
        return false;
    }
    FUN3(&VAR2->VAR6);
    if (!VAR2->VAR9.VAR21 && (VAR9 != 0))
    {
        FUN3(&VAR2->VAR9);
    }
    if (!VAR2->VAR11.VAR21 && (VAR2->VAR20 & VAR19))
    {
        FUN3(&VAR2->VAR11);
    }
    return true;
}