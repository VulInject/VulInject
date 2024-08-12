static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = &VAR2->VAR10;
    if (VAR5 < 4)
    {
        FUN2(VAR2->VAR11.VAR12[0] + (VAR4 * 16 + ((VAR5 & 2) << 2)) * VAR2->VAR11.VAR13[0] + VAR3 * 16 + ((VAR5 & 1) << 3), VAR2->VAR11.VAR13[0], VAR2->VAR14.VAR12[0] + (VAR4 * 16 + ((VAR5 & 2) << 2) + VAR7) * VAR2->VAR14.VAR13[0] + VAR3 * 16 + ((VAR5 & 1) << 3) + VAR6, VAR2->VAR14.VAR13[0], VAR8);
    }
    else if (!(VAR10->VAR15->VAR16 & VAR17))
    {
        int VAR18 = VAR5 - 3;
        FUN2(VAR2->VAR11.VAR12[VAR18] + (VAR4 * 8) * VAR2->VAR11.VAR13[VAR18] + VAR3 * 8, VAR2->VAR11.VAR13[VAR18], VAR2->VAR14.VAR12[VAR18] + (VAR4 * 8 + (VAR7 / 2)) * VAR2->VAR14.VAR13[VAR18] + VAR3 * 8 + (VAR6 / 2), VAR2->VAR14.VAR13[VAR18], VAR8);
    }
}