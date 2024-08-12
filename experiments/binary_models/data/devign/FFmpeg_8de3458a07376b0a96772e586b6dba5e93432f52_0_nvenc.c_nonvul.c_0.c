static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    if (!(FUN2(VAR3->VAR5) > 0))
        return NULL;
    FUN3(VAR3->VAR5, &VAR4, sizeof(VAR4), NULL);
    return VAR4;
}