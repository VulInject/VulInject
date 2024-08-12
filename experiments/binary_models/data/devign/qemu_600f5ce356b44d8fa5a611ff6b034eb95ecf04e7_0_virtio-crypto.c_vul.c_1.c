static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = FUN2(VAR5);
    if (!VAR7->VAR8)
    {
        return;
    }
    if (FUN3(!(VAR7->VAR9 & VAR10)))
    {
        return;
    }
    FUN4(VAR7, VAR3->VAR11);
    FUN5(VAR3->VAR11, 1);
}