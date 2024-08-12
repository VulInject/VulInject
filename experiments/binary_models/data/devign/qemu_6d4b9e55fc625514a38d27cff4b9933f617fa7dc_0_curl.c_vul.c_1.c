static VAR1 FUN1(void *VAR2, size_t VAR3, size_t VAR4, void *VAR5)
{
    VAR6 *VAR7 = ((VAR6 *)VAR5);
    size_t VAR8 = VAR3 * VAR4;
    int VAR9;
    FUN2("", VAR8);
    if (!VAR7 || !VAR7->VAR10)
        goto VAR11;
    memcpy(VAR7->VAR10 + VAR7->VAR12, VAR2, VAR8);
    VAR7->VAR12 += VAR8;
    for (VAR9 = 0; VAR9 < VAR13; VAR9++)
    {
        VAR14 *VAR15 = VAR7->VAR15[VAR9];
        if (!VAR15)
            continue;
        if ((VAR7->VAR12 >= VAR15->VAR16))
        {
            FUN3(VAR15->VAR17, 0, VAR7->VAR10 + VAR15->VAR18, VAR15->VAR16 - VAR15->VAR18);
            VAR15->VAR19.FUN4(VAR15->VAR19.VAR5, 0);
            FUN5(VAR15);
            VAR7->VAR15[VAR9] = NULL;
        VAR11:
            return VAR8;