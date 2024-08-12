static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = &VAR5->VAR8[VAR3->VAR9];
    FUN2(VAR7);
    FUN3("", VAR7->VAR10, VAR7->VAR11);
    if (VAR7->VAR12 != 0)
    {
        VAR7->VAR13 = VAR14;
    }
    if (!FUN4(VAR3) && VAR7->VAR12 != 0)
    {
        FUN5(VAR7->VAR15);
    }
}