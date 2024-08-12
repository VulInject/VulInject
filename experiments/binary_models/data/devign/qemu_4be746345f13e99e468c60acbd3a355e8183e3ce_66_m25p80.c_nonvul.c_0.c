static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    QEMUIOVector VAR6;
    if (!VAR2->VAR7 || FUN2(VAR2->VAR7))
    {
        return;
    }
    VAR4 = (VAR3 * VAR2->VAR8->VAR9) / VAR10;
    VAR5 = FUN3(VAR2->VAR8->VAR9, VAR10);
    FUN4(&VAR6, 1);
    FUN5(&VAR6, VAR2->VAR11 + VAR4 * VAR10, VAR5 * VAR10);
    FUN6(VAR2->VAR7, VAR4, &VAR6, VAR5, VAR12, NULL);
}