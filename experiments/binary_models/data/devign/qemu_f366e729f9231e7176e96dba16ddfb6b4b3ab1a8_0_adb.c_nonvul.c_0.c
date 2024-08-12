static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    int VAR9, VAR10;
    VAR9 = FUN2(VAR6->VAR11.VAR12.VAR13->VAR12);
    if (VAR9 >= FUN3(VAR14))
    {
        return;
    }
    VAR10 = VAR14[VAR9];
    if (VAR10 == VAR15)
    {
        FUN4("");
        return;
    }
    if (VAR6->VAR11.VAR12.VAR13->VAR16 == false)
    {
        VAR10 = VAR10 | 0x80;
    }
    FUN5(VAR8, VAR10);
}