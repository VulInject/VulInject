static void FUN1(gpointer VAR1, gpointer VAR2)
{
    VAR3 *VAR4 = VAR2;
    uint64_t VAR5;
    const VAR6 *VAR7;
    VAR5 = *(VAR8 *)VAR1;
    VAR7 = FUN2(VAR4->VAR9, VAR5);
    if (!(VAR7->VAR10 & (VAR11 | VAR12)))
    {
        VAR4->VAR13[VAR4->VAR14] = FUN3(VAR5);
        VAR4->VAR14++;
    }
}