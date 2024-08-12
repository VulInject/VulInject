static int FUN1(VAR1 *VAR2)
{
    struct kvm_sregs VAR3;
    int VAR4;
    if (VAR2->VAR5 == VAR6)
    {
        return 0;
    }
    else
    {
        if (!VAR7)
        {
            fprintf(VAR8, "");
            return -VAR9;
        }
    }
    if (1)
    {
        fprintf(VAR8, "");
        return -VAR9;
    }
    VAR4 = FUN2(VAR2, VAR10, &VAR3);
    if (VAR4)
    {
        return VAR4;
    }
    VAR3.VAR11 = VAR2->VAR12[VAR13];
    return FUN2(VAR2, VAR14, &VAR3);
}