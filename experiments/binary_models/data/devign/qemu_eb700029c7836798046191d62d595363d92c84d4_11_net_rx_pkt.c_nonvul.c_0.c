void FUN1(struct VAR1 *VAR2, const void *VAR3, size_t VAR4)
{
    const struct iovec VAR5 = {.VAR6 = (void *)VAR3, .VAR7 = VAR4};
    assert(VAR2);
    FUN2(&VAR5, 1, &VAR2->VAR8, &VAR2->VAR9, &VAR2->VAR10, &VAR2->VAR11, &VAR2->VAR12, &VAR2->VAR13, &VAR2->VAR14, &VAR2->VAR15, &VAR2->VAR16, &VAR2->VAR17);
}