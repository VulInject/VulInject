VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4;
    uint32_t VAR5 = 0;
    VAR6 *VAR7 = (VAR6 *)VAR3;
    if (!VAR7->VAR8 && VAR7->VAR9 == VAR10)
    {
        VAR4 = (int)(VAR7->VAR11 & ((1 << VAR7->VAR12) - 1)) + VAR7->VAR4;
        VAR7->VAR4 = 0;
        VAR7->FUN2(VAR7, VAR7->VAR11, VAR4);
        if (VAR7->VAR13)
            VAR7->VAR8 = (1 << VAR7->VAR14) - VAR4;
        else
            VAR7->VAR8 = (1 << VAR7->VAR14) + (1 << VAR7->VAR15) - VAR4;
    }
    if (VAR7->VAR16 || VAR7->VAR8 <= 0)
        return 0;
    for (VAR4 = VAR7->VAR17; VAR4--;)
    {
        VAR5 |= VAR7->VAR18[VAR4] << (VAR4 << 3);
    }
    if (VAR7->VAR9 != VAR19)
    {
        VAR7->VAR11 += VAR7->VAR17;
        VAR7->VAR18 += VAR7->VAR17;
        VAR7->VAR8 -= VAR7->VAR17;
    }
    return VAR5;
}