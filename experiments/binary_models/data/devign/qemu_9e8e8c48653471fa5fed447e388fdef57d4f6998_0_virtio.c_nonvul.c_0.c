static void FUN1(void *VAR1, int VAR2, RunState VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = FUN2(FUN3(VAR5));
    VAR8 *VAR9 = FUN4(VAR7);
    bool VAR10 = VAR2 && (VAR5->VAR11 & VAR12);
    VAR5->VAR13 = VAR2;
    if (VAR10)
    {
        FUN5(VAR5, VAR5->VAR11);
    }
    if (VAR9->VAR14)
    {
        VAR9->FUN6(VAR7->VAR15, VAR10);
    }
    if (!VAR10)
    {
        FUN5(VAR5, VAR5->VAR11);
    }
}