static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    uint64_t VAR11;
    uint32_t VAR12;
    VAR11 = FUN3(&VAR10->VAR13) ? 0 : FUN4(&VAR10->VAR13);
    VAR12 = VAR11;
    assert(VAR12 == VAR11);
    FUN5(VAR4, VAR5, &VAR12, VAR8);
}