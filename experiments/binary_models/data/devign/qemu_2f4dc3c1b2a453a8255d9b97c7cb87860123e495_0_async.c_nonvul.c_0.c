VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = (VAR1 *)FUN2(&VAR3, sizeof(VAR1));
    FUN3(&VAR2->VAR4, false);
    FUN4(VAR2, &VAR2->VAR4, (VAR5 *)VAR6, NULL);
    return VAR2;
}