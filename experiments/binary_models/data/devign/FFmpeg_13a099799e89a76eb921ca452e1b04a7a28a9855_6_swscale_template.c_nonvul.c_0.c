static void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 **VAR6, int VAR7, const VAR4 *VAR8, const VAR4 **VAR9, const VAR4 **VAR10, int VAR11, const VAR4 **VAR12, VAR13 *VAR14[4], int VAR15, int VAR16)
{
    VAR13 *VAR17 = VAR14[0], *VAR18 = VAR14[1], *VAR19 = VAR14[2], *VAR20 = VAR21 ? VAR14[3] : NULL;
    if (VAR18)
    {
        x86_reg VAR22 = VAR3->VAR22;
        FUN2(VAR23, VAR18, VAR16, 0)
        FUN2(VAR23, VAR19 - VAR22, VAR16 + VAR22, VAR22)
    }
    if (VAR21 && VAR20)
    {
        FUN2(VAR24, VAR20, VAR15, 0)
    }
    FUN2(VAR25, VAR17, VAR15, 0)
}