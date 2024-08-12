static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    struct kvm_xcrs VAR5;
    if (!FUN2())
    {
        return 0;
    }
    VAR4 = FUN3(VAR2, VAR6, &VAR5);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    for (VAR3 = 0; VAR3 < VAR5.VAR7; VAR3++)
    {
        if (VAR5.VAR5[0].VAR8 == 0)
        {
            VAR2->VAR9 = VAR5.VAR5[0].VAR10;
            break;
        }
    }
    return 0;
    return 0;
}