void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    VAR10 = FUN2(VAR4, VAR6, VAR8);
    if (!VAR10)
    {
        return;
    }
    VAR10->VAR11 = true;
    FUN3(FUN4(VAR2), VAR12);
}