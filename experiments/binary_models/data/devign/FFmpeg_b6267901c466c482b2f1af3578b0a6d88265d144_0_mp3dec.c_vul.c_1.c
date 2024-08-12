static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = VAR2->VAR13[0];
    int64_t VAR14 = FUN2(VAR12, VAR4, VAR5);
    uint32_t VAR15 = 0;
    if (!VAR7->VAR16)
    {
        VAR12->VAR17 = VAR4 <= 0 ? VAR7->VAR18 + 528 + 1 : 0;
        return -1;
    }
    if (VAR14 < 0)
        return VAR14;
    VAR10 = &VAR12->VAR19[VAR14];
    VAR14 = FUN3(VAR2->VAR20, VAR10->VAR21, VAR22);
    if (VAR14 < 0)
        return VAR14;
    while (!VAR2->VAR20->VAR23)
    {
        VAR15 = (VAR15 << 8) + FUN4(VAR2->VAR20);
        if (FUN5(VAR15) >= 0)
        {
            FUN6(VAR2, VAR12, VAR10->VAR4);
            VAR14 = FUN3(VAR2->VAR20, -4, VAR24);
            VAR12->VAR17 = VAR10->VAR4 <= 0 ? VAR7->VAR18 + 528 + 1 : 0;
            return (VAR14 >= 0) ? 0 : VAR14;
        }
    }
    return VAR25;
}