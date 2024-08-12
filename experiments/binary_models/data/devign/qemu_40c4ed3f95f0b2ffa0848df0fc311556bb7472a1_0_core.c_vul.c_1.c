void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = FUN2(VAR5);
    VAR8 *VAR9;
    if (!(VAR7->VAR10 & VAR11))
        return;
    VAR9 = VAR7->VAR12;
    *(VAR13 *)VAR9 = FUN3(VAR3);
    VAR9 += 2;
    VAR7->VAR12 = VAR9;
    if (VAR9 >= VAR7->VAR14)
        VAR7->FUN4(VAR7);
}