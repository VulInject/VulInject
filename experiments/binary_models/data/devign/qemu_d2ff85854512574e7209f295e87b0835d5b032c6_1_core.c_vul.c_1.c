VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = FUN2(VAR5);
    VAR8 *VAR9;
    int VAR10;
    if (!(VAR7->VAR11 & VAR12) || !FUN3(VAR7))
    {
        VAR9 = VAR7->VAR13;
        VAR10 = FUN4(*(VAR1 *)VAR9);
        VAR9 += 4;
        VAR7->VAR13 = VAR9;
        if (VAR9 >= VAR7->VAR14)
            VAR7->FUN5(VAR7);
        return VAR10