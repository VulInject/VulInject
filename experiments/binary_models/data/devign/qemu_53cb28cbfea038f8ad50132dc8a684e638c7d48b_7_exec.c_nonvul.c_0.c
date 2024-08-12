static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, VAR3, VAR5);
    VAR6 *VAR7 = VAR4->VAR8;
    VAR6 *VAR9 = VAR4->VAR10;
    FUN3(VAR9, VAR9->VAR11.VAR12);
    VAR4->VAR8 = VAR9;
    if (VAR7)
    {
        FUN4(&VAR7->VAR11);
        FUN5(VAR7);
    }
}