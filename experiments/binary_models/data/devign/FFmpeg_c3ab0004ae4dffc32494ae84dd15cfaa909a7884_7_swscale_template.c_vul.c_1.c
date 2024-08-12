static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 **VAR6, int VAR7, const VAR4 *VAR8, const VAR4 **VAR9, int VAR10, const VAR4 **VAR11, VAR12 *VAR13, VAR12 *VAR14, VAR12 *VAR15, VAR12 *VAR16, int VAR17, int VAR18)
{
    if (!(VAR3->VAR19 & VAR20))
    {
        if (VAR3->VAR19 & VAR21)
        {
            if (VAR14)
            {
                FUN2("", VAR22, VAR14, VAR18)
                FUN2(FUN3(VAR23), VAR22, VAR15, VAR18)
            }
            if (VAR24 && VAR16)
            {
                FUN2("", VAR25, VAR16, VAR17)
            }
            FUN2("", VAR26, VAR13, VAR17)
        }
        else
        {
            if (VAR14)
            {
                FUN4("", VAR22, VAR14, VAR18)
                FUN4(FUN3(VAR23), VAR22, VAR15, VAR18)
            }
            if (VAR24 && VAR16)
            {
                FUN4("", VAR25, VAR16, VAR17)
            }
            FUN4("", VAR26, VAR13, VAR17)
        }
        return;
    }
    FUN5(VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR13, VAR14, VAR15, VAR17, VAR18);
    FUN6(VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18);
}