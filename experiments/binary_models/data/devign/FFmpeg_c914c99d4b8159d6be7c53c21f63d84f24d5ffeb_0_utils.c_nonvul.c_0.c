VAR1 *FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3 = FUN2(VAR2->VAR4);
    if (!VAR3)
        return NULL;
    memcpy(VAR3->VAR5, VAR2->VAR5, VAR2->VAR4 * sizeof(*VAR2->VAR5));
    return VAR3;
}