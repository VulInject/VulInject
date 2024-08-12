void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
        FUN2(VAR2->VAR4, VAR5, "", VAR2->VAR3);
    FUN3(&VAR2->VAR6);
    memset(VAR2, 0, sizeof(*VAR2));
}