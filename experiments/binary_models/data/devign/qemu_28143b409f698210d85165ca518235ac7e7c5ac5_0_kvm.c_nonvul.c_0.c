static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    struct kvm_xcrs VAR7;
    if (!VAR8)
    {
        return 0;
    }
    VAR6 = FUN2(FUN3(VAR2), VAR9, &VAR7);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    for (VAR5 = 0; VAR5 < VAR7.VAR10; VAR5++)
    {
        if (VAR7.VAR7[VAR5].VAR11 == 0)
        {
            VAR4->VAR12 = VAR7.VAR7[VAR5].VAR13;
            break;
        }
    }
    return 0;
}