static void FUN1(VAR1 *VAR2, bool VAR3)
{
    uint32_t VAR4 = VAR5;
    uint32_t VAR6 = 0;
    long long VAR7;
    if (!(VAR2->VAR8 & VAR9))
    {
        return;
    }
    if (VAR3)
    {
        if ((VAR2->VAR8 & VAR10) && (VAR2->VAR11 != VAR5))
        {
            VAR6 = FUN2(VAR2);
        }
    }
    else
    {
        VAR6 = FUN2(VAR2);
    }
    if (VAR2->VAR12 & VAR13)
    {
        VAR4 = FUN3(VAR6, VAR2->VAR14, VAR4);
    }
    if (VAR2->VAR12 & VAR15)
    {
        VAR4 = FUN3(VAR6, VAR2->VAR16, VAR4);
    }
    if (VAR2->VAR12 & VAR17)
    {
        VAR4 = FUN3(VAR6, VAR2->VAR18, VAR4);
    }
    VAR2->VAR19 = 0;
    if ((VAR2->VAR12 & VAR13) && (VAR4 == VAR2->VAR14))
    {
        VAR2->VAR19 |= VAR20;
    }
    if ((VAR2->VAR12 & VAR15) && (VAR4 == VAR2->VAR16))
    {
        VAR2->VAR19 |= VAR21;
    }
    if ((VAR2->VAR12 & VAR17) && (VAR4 == VAR2->VAR18))
    {
        VAR2->VAR19 |= VAR22;
    }
    if ((VAR2->VAR12 & VAR23) && (VAR4 == VAR5))
    {
        VAR2->VAR19 |= VAR24;
    }
    VAR7 = VAR4 - FUN2(VAR2);
    if (VAR7 < 0)
    {
        VAR2->VAR25 |= VAR2->VAR19;
        FUN1(VAR2, VAR3);
        FUN4(VAR2);
    }
    else
    {
        VAR2->VAR11 = VAR4;
        FUN5(VAR2->VAR26, VAR7, 1);
    }
}