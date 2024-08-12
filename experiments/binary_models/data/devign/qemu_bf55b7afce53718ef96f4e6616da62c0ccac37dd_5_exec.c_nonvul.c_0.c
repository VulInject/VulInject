static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, VAR5 *VAR7, bool VAR8, bool VAR9)
{
    IOMMUTLBEntry VAR10;
    VAR1 *VAR11;
    VAR12 *VAR13;
    for (;;)
    {
        VAR14 *VAR15 = FUN2(&VAR3->VAR16);
        VAR11 = FUN3(VAR15, VAR4, &VAR4, VAR7, VAR9);
        VAR13 = VAR11->VAR13;
        if (!VAR13->VAR17)
        {
            break;
        }
        VAR10 = VAR13->VAR17->FUN4(VAR13, VAR4, VAR8 ? VAR18 : VAR19);
        VAR4 = ((VAR10.VAR20 & ~VAR10.VAR21) | (VAR4 & VAR10.VAR21));
        *VAR7 = FUN5(*VAR7, (VAR4 | VAR10.VAR21) - VAR4 + 1);
        if (!(VAR10.VAR22 & (1 << VAR8)))
        {
            goto VAR23;
        }
        VAR3 = VAR10.VAR24;
    }
    *VAR6 = VAR4;
    return *VAR11;
VAR23:
    return (VAR1){.VAR13 = &VAR25};
}