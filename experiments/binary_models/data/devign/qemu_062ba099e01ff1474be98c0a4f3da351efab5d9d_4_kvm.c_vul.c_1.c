int FUN1(VAR1 *VAR2)
{
    if (VAR3)
    {
        struct kvm_mp_state VAR4 = {.VAR4 = VAR2->VAR5 ? VAR6 : VAR7};
        int VAR8 = FUN2(FUN3(VAR2), VAR9, &VAR4);
        if (VAR8)
        {
            fprintf(VAR10, "", VAR11, VAR8, strerror(-VAR8));
            return -1;
        }
    }
    return 0;
}