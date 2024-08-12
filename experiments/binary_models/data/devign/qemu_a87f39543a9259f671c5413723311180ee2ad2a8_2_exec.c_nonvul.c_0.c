VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, VAR5 *VAR7, bool VAR8)
{
    IOMMUTLBEntry VAR9;
    VAR10 *VAR11;
    VAR1 *VAR12;
    hwaddr VAR13 = *VAR7;
    for (;;)
    {
        VAR11 = FUN2(VAR3->VAR14, VAR4, &VAR4, VAR7, true);
        VAR12 = VAR11->VAR12;
        if (!VAR12->VAR15)
        {
            break;
        }
        VAR9 = VAR12->VAR15->FUN3(VAR12, VAR4);
        VAR4 = ((VAR9.VAR16 & ~VAR9.VAR17) | (VAR4 & VAR9.VAR17));
        VAR13 = FUN4(VAR13, (VAR4 | VAR9.VAR17) - VAR4 + 1);
        if (!(VAR9.VAR18 & (1 << VAR8)))
        {
            VAR12 = &VAR19;
            break;
        }
        VAR3 = VAR9.VAR20;
    }
    if (FUN5(VAR12, VAR8))
    {
        hwaddr VAR21 = ((VAR4 & VAR22) + VAR23) - VAR4;
        VAR13 = FUN4(VAR21, VAR13);
    }
    *VAR7 = VAR13;
    *VAR6 = VAR4;
    return VAR12;
}