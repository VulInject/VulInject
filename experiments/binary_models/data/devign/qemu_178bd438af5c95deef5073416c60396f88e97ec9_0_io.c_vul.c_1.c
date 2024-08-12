static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    bool VAR5;
    VAR5 = FUN2(VAR2, FUN3(&VAR2->VAR6) > 0);
    if (VAR2->VAR7 && VAR2->VAR7->VAR8)
    {
        VAR2->VAR7->FUN4(VAR2);
    }
    FUN5(VAR4, &VAR2->VAR9, VAR10) { VAR5 |= FUN1(VAR4->VAR2); }
    return VAR5;
}