static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    int VAR9[3], VAR10, VAR11;
    if (!VAR8 || !VAR8->VAR12)
    {
        return;
    }
    VAR11 = FUN2(VAR6->VAR13.VAR14->VAR14, VAR6->VAR13.VAR14->VAR15, VAR9);
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        VAR8->FUN3(VAR8->VAR16, VAR9[VAR10]);
    }
}