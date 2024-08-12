int FUN1(const char *VAR1, VAR2 **VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    VAR2 *VAR7;
    VAR8 *VAR9 = NULL;
    QEMUSnapshotInfo VAR10, *VAR11 = &VAR10;
    while (VAR6 == 0 && (VAR9 = FUN2(VAR9, &VAR7)))
    {
        VAR12 *VAR13 = FUN3(VAR7);
        FUN4(VAR13);
        if (FUN5(VAR7) && FUN6(VAR7, VAR11, VAR1) >= 0)
        {
            VAR6 = FUN7(VAR7, VAR1, VAR5);
        }
        FUN8(VAR13);
    }
    *VAR3 = VAR7;
    return VAR6;
}