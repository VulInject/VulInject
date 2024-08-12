int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR5, VAR2);
    if (VAR6 < 0)
    {
        FUN3("", FUN4(VAR5), VAR2->VAR7 ? VAR2->VAR7 : VAR2->VAR8->VAR3, VAR3, strerror(-VAR6));
        return -1;
    }
    FUN5(VAR2, VAR3, &VAR5, VAR9);
    return 0;
}