int FUN1(bool write)
{
    struct kvm_get_htab_fd VAR1 = {
        .VAR2 = write ? VAR3 : 0,
        .VAR4 = 0,
    };
    if (!VAR5)
    {
        fprintf(VAR6, "");
        return -1;
    }
    return FUN2(VAR7, VAR8, &VAR1);
}