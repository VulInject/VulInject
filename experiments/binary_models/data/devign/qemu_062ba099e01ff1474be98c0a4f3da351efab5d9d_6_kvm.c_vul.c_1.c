int FUN1(VAR1 *VAR2)
{
    if (VAR3)
    {
        struct kvm_mp_state VAR4;
        int VAR5 = FUN2(FUN3(VAR2), VAR6, &VAR4);
        if (VAR5)
        {
            fprintf(VAR7, "", VAR8, VAR5, strerror(-VAR5));
            FUN4();
        }
        VAR2->VAR9 = (VAR4.VAR4 == VAR10);
    }
    return 0;
}