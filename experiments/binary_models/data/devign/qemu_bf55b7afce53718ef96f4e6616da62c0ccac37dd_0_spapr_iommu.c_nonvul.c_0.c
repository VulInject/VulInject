static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, IOMMUAccessFlags VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3, VAR6, VAR3);
    uint64_t VAR8;
    IOMMUTLBEntry VAR9 = {
        .VAR10 = &VAR11,
        .VAR12 = 0,
        .VAR13 = 0,
        .VAR14 = ~(VAR15)0,
        .VAR16 = VAR17,
    };
    if ((VAR4 >> VAR7->VAR18) < VAR7->VAR19)
    {
        hwaddr VAR20 = FUN3(VAR7->VAR18);
        VAR8 = VAR7->VAR21[VAR4 >> VAR7->VAR18];
        VAR9.VAR12 = VAR4 & VAR20;
        VAR9.VAR13 = VAR8 & VAR20;
        VAR9.VAR14 = ~VAR20;
        VAR9.VAR16 = FUN4(VAR8);
    }
    FUN5(VAR7->VAR22, VAR4, VAR9.VAR12, VAR9.VAR16, VAR9.VAR14);
    return VAR9;
}