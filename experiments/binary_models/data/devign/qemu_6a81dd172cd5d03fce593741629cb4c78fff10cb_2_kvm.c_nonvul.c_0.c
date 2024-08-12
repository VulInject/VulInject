void *FUN1(uint32_t VAR1, uint32_t VAR2, int *VAR3, bool VAR4)
{
    struct kvm_create_spapr_tce VAR5 = {
        .VAR1 = VAR1,
        .VAR2 = VAR2,
    };
    long VAR6;
    int VAR7;
    void *VAR8;
    *VAR3 = -1;
    if (!VAR9 || (VAR4 && !VAR10))
    {
        return NULL;
    }
    VAR7 = FUN2(VAR11, VAR12, &VAR5);
    if (VAR7 < 0)
    {
        fprintf(VAR13, "", VAR1);
        return NULL;
    }
    VAR6 = (VAR2 / VAR14) * sizeof(VAR15);
    VAR8 = FUN3(NULL, VAR6, VAR16 | VAR17, VAR18, VAR7, 0);
    if (VAR8 == VAR19)
    {
        fprintf(VAR13, "", VAR1);
        close(VAR7);
        return NULL;
    }
    *VAR3 = VAR7;
    return VAR8;
}