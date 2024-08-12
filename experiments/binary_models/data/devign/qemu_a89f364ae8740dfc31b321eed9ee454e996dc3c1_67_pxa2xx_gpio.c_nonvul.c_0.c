static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR6 *VAR7 = FUN2(VAR5->VAR7);
    int VAR8;
    uint32_t VAR9;
    if (VAR2 >= VAR5->VAR10)
    {
        FUN3("", VAR11, VAR2);
        return;
    }
    VAR8 = VAR2 >> 5;
    VAR9 = 1U << (VAR2 & 31);
    if (VAR3)
    {
        VAR5->VAR12[VAR8] |= VAR5->VAR13[VAR8] & VAR9 & ~VAR5->VAR14[VAR8] & ~VAR5->VAR15[VAR8];
        VAR5->VAR14[VAR8] |= VAR9;
    }
    else
    {
        VAR5->VAR12[VAR8] |= VAR5->VAR16[VAR8] & VAR9 & VAR5->VAR14[VAR8] & ~VAR5->VAR15[VAR8];
        VAR5->VAR14[VAR8] &= ~VAR9;
    }
    if (VAR5->VAR12[VAR8] & VAR9)
        FUN4(VAR5);
    if (VAR7->VAR17 && (VAR9 & ~VAR5->VAR15[VAR8] & VAR18[VAR8]))
    {
        FUN5(VAR7, VAR19);
    }
}