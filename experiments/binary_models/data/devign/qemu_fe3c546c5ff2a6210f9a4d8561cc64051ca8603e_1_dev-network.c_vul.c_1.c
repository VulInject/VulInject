static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5)
{
    VAR6 *VAR7;
    uint8_t VAR8[sizeof(VAR9)];
    uint32_t VAR10, VAR11;
    int VAR12;
    unsigned int VAR13;
    VAR10 = FUN2(VAR4->VAR14) + 8;
    VAR11 = FUN2(VAR4->VAR15);
    if (VAR10 + VAR11 > VAR5)
        return VAR16;
    VAR12 = FUN3(VAR2, FUN2(VAR4->VAR17), VAR10 + (VAR18 *)VAR4, VAR11, VAR8, sizeof(VAR8));
    VAR13 = sizeof(VAR6) + ((VAR12 < 0) ? 0 : VAR12);
    VAR7 = FUN4(VAR2, VAR13);
    if (!VAR7)
        return VAR16;
    VAR7->VAR19 = FUN5(VAR20);
    VAR7->VAR21 = VAR4->VAR21;
    VAR7->VAR22 = FUN5(VAR13);
    if (VAR12 < 0)
    {
        VAR7->VAR23 = FUN5(VAR24);
        VAR7->VAR15 = FUN5(0);
        VAR7->VAR14 = FUN5(0);
        return 0;
    }
    VAR7->VAR23 = FUN5(VAR25);
    VAR7->VAR14 = FUN5(VAR12 ? sizeof(VAR6) - 8 : 0);
    VAR7->VAR15 = FUN5(VAR12);
    memcpy(VAR7 + 1, VAR8, VAR12);
    return 0;
}