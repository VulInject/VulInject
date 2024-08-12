int FUN1(const char *VAR1, VAR2 **VAR3)
{
    QEMUSnapshotInfo VAR4;
    int VAR5 = 0;
    VAR2 *VAR6;
    VAR7 *VAR8 = NULL;
    while (VAR5 == 0 && (VAR8 = FUN2(VAR8, &VAR6)))
    {
        VAR9 *VAR10 = FUN3(VAR6);
        FUN4(VAR10);
        if (FUN5(VAR6))
        {
            VAR5 = FUN6(VAR6, &VAR4, VAR1);
        }
        FUN7(VAR10);
    }
    *VAR3 = VAR6;
    return VAR5;
}