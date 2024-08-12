static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    QEMUSnapshotInfo VAR6, *VAR7 = &VAR6;
    int VAR8;
    VAR5 = NULL;
    while ((VAR5 = FUN2(VAR5)))
    {
        if (FUN3(VAR5) && FUN4(VAR5, VAR7, VAR3) >= 0)
        {
            VAR8 = FUN5(VAR5, VAR3);
            if (VAR8 < 0)
            {
                FUN6(VAR2, "", FUN7(VAR5));
                return -1;
            }
        }
    }
    return 0;
}