static VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5)
{
    IOMMUTLBEntry VAR6;
    hwaddr VAR7 = FUN2(VAR3->VAR8);
    unsigned long VAR9 = (VAR4 - VAR3->VAR10) >> VAR3->VAR8;
    if (VAR9 >= VAR3->VAR11)
    {
        FUN3("" VAR12 "", VAR4);
        return VAR13;
    }
    VAR3->VAR14[VAR9] = VAR5;
    VAR6.VAR15 = &VAR16, VAR6.VAR17 = (VAR4 - VAR3->VAR10) & VAR7;
    VAR6.VAR18 = VAR5 & VAR7;
    VAR6.VAR19 = ~VAR7;
    VAR6.VAR20 = FUN4(VAR5);
    FUN5(&VAR3->VAR21, VAR6);
    return VAR22;
}