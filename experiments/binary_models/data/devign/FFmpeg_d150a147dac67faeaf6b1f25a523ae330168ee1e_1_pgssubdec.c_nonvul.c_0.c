static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint8_t VAR9;
    unsigned int VAR10, VAR11, VAR12;
    uint16_t VAR13;
    if (VAR5 <= 4)
        return -1;
    VAR5 -= 4;
    VAR13 = FUN2(&VAR4);
    VAR4++;
    VAR9 = FUN3(&VAR4);
    if (!(VAR9 & 0x80))
    {
        if (VAR5 > VAR7->VAR14[VAR13].VAR15)
            return -1;
        memcpy(VAR7->VAR14[VAR13].VAR16 + VAR7->VAR14[VAR13].VAR17, VAR4, VAR5);
        VAR7->VAR14[VAR13].VAR17 += VAR5;
        VAR7->VAR14[VAR13].VAR15 -= VAR5;
        return 0;
    }
    if (VAR5 <= 7)
        return -1;
    VAR5 -= 7;
    VAR10 = FUN4(&VAR4) - 2 * 2;
    VAR11 = FUN2(&VAR4);
    VAR12 = FUN2(&VAR4);
    if (VAR2->VAR11 < VAR11 || VAR2->VAR12 < VAR12)
    {
        FUN5(VAR2, VAR18, "");
        return -1;
    }
    VAR7->VAR14[VAR13].VAR19 = VAR11;
    VAR7->VAR14[VAR13].VAR20 = VAR12;
    FUN6(&VAR7->VAR14[VAR13].VAR16, &VAR7->VAR14[VAR13].VAR21, VAR10);
    if (!VAR7->VAR14[VAR13].VAR16)
        return -1;
    memcpy(VAR7->VAR14[VAR13].VAR16, VAR4, VAR5);
    VAR7->VAR14[VAR13].VAR17 = VAR5;
    VAR7->VAR14[VAR13].VAR15 = VAR10 - VAR5;
    return 0;
}