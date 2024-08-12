static int FUN1(struct VAR1 *VAR2)
{
    TIMECAPS VAR3;
    memset(&VAR3, 0, sizeof(VAR3));
    FUN2(&VAR3, sizeof(VAR3));
    VAR4 = VAR3.VAR5;
    FUN3(VAR4);
    VAR6 = FUN4(1, VAR4, VAR7, (VAR8)VAR2, VAR9 | VAR10);
    if (!VAR6)
    {
        fprintf(VAR11, "", FUN5());
        FUN6(VAR4);
        return -1;
    }
    return 0;
}