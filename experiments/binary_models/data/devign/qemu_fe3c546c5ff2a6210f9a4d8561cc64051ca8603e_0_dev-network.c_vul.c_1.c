static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, sizeof(VAR6));
    uint32_t VAR8, VAR9;
    int VAR10;
    if (!VAR7)
        return VAR11;
    VAR8 = FUN3(VAR4->VAR12) + 8;
    VAR9 = FUN3(VAR4->VAR13);
    if (VAR8 + VAR9 > VAR5)
        return VAR11;
    VAR10 = FUN4(VAR2, FUN3(VAR4->VAR14), VAR8 + (VAR15 *)VAR4, VAR9);
    VAR7->VAR16 = FUN5(VAR17);
    VAR7->VAR18 = VAR4->VAR18;
    VAR7->VAR19 = FUN5(sizeof(VAR6));
    if (VAR10 < 0)
    {
        VAR7->VAR20 = FUN5(VAR21);
        return 0;
    }
    VAR7->VAR20 = FUN5(VAR22);
    return 0;
}