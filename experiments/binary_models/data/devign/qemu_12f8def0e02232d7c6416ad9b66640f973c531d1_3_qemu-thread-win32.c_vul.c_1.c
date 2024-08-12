void FUN1(VAR1 *VAR2)
{
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR3 = FUN2(NULL, 0, VAR4, NULL);
    if (!VAR2->VAR3)
    {
        FUN3(FUN4(), VAR5);
    }
    VAR2->VAR6 = FUN5(NULL, VAR7, VAR7, NULL);
    if (!VAR2->VAR6)
    {
        FUN3(FUN4(), VAR5);
    }
}