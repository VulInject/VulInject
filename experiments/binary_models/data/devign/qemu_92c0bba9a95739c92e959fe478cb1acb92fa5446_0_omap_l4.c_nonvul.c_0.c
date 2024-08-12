struct VAR1 *FUN1(target_phys_addr_t VAR2, int VAR3)
{
    struct VAR1 *VAR4 = FUN2(sizeof(*VAR4) + VAR3 * sizeof(*VAR4->VAR5));
    VAR4->VAR3 = VAR3;
    VAR4->VAR2 = VAR2;
    return VAR4;
}