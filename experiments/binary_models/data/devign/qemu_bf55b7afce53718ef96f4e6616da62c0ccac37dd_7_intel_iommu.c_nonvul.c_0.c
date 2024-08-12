static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, IOMMUAccessFlags VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3, VAR6, VAR3);
    VAR8 *VAR9 = VAR7->VAR10;
    IOMMUTLBEntry VAR11 = {
        .VAR12 = &VAR13,
        .VAR14 = VAR4,
        .VAR15 = 0,
        .VAR16 = ~(VAR17)0,
        .VAR18 = VAR19,
    };
    if (!VAR9->VAR20)
    {
        VAR11.VAR14 = VAR4 & VAR21;
        VAR11.VAR15 = VAR4 & VAR21;
        VAR11.VAR16 = ~VAR21;
        VAR11.VAR18 = VAR22;
        return VAR11;
    }
    FUN3(VAR7, VAR7->VAR23, VAR7->VAR24, VAR4, VAR5 & VAR25, &VAR11);
    FUN4(VAR26, "" VAR27 "" VAR27 "" VAR27 "" VAR27 "" VAR28 "" VAR28, FUN5(VAR7->VAR23), FUN6(VAR7->VAR24), FUN7(VAR7->VAR24), VAR7->VAR24, VAR4, VAR11.VAR15);
    return VAR11;
}