VAR1 FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
{
    VAR6 *VAR7;
    uint32_t VAR8;
    if (FUN2())
    {
        return VAR9;
    }
    VAR7 = FUN3(VAR3);
    if (VAR5->VAR10.VAR11.VAR12 != VAR7->VAR12)
    {
        VAR8 = VAR7->VAR12 ^ VAR5->VAR10.VAR11.VAR12;
        FUN4();
        if (VAR8 & VAR13)
        {
            FUN5(VAR7->VAR14[VAR15], !!(VAR5->VAR10.VAR11.VAR12 & VAR13));
            VAR8 &= ~VAR13;
        }
        if (VAR8 & VAR16)
        {
            FUN5(VAR7->VAR14[VAR17], !!(VAR5->VAR10.VAR11.VAR12 & VAR16));
            VAR8 &= ~VAR16;
        }
        if (VAR8 & VAR18)
        {
            FUN5(VAR7->VAR19, !!(VAR5->VAR10.VAR11.VAR12 & VAR18));
            VAR8 &= ~VAR18;
        }
        if (VAR8)
        {
            FUN6(VAR20, "", VAR21, VAR8);
        }
        VAR7->VAR12 = VAR5->VAR10.VAR11.VAR12;
        FUN7();
    }
    return VAR9;
}