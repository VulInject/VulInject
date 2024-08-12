void *FUN1(uint32_t VAR1, uint32_t VAR2, int *VAR3)
{
    struct kvm_create_spapr_tce VAR4 = {
        .VAR1 = VAR1,
        .VAR2 = VAR2,
    };
    long VAR5;
    int VAR6;
    void *VAR7;
    *VAR3 = -1;
    if (!VAR8)
    {
        return NULL;
    }
    VAR6 = FUN2(VAR9, VAR10, &VAR4);
    if (VAR6 < 0)
    {
        fprintf(VAR11, "", VAR1);
        return NULL;
    }
    VAR5 = (VAR2 / VAR12) * sizeof(VAR13);
    VAR7 = FUN3(NULL, VAR5, VAR14 | VAR15, VAR16, VAR6, 0);
    if (VAR7 == VAR17)
    {
        fprintf(VAR11, "", VAR1);
        close(VAR6);
        return NULL;
    }
    *VAR3 = VAR6;
    return VAR7;
}