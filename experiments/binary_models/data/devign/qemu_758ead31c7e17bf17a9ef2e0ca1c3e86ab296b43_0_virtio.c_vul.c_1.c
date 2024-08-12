void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3].VAR5;
    if (!VAR5->VAR7)
    {
        return;
    }
    VAR5->VAR8 = VAR5->VAR7 + VAR5->VAR9 * sizeof(VAR10);
    VAR5->VAR11 = FUN2(VAR5->VAR8 + FUN3(VAR12, VAR13[VAR5->VAR9]), VAR5->VAR14);
    FUN4(VAR2, VAR3);
}