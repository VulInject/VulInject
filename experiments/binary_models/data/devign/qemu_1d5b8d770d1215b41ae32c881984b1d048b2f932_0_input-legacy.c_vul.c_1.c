static VAR1 *FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3 = FUN2(VAR1, 1);
    memcpy(VAR3, VAR2, sizeof(*VAR2));
    return VAR3;