int FUN1(VAR1 *VAR2, qemu_opt_loopfunc VAR3, void *VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8 = 0;
    FUN2(VAR7, &VAR2->VAR9, VAR10)
    {
        VAR8 = FUN3(VAR7->VAR11, VAR7->VAR12, VAR4);
        if (VAR5 && VAR8 != 0)
            break;
    }
    return VAR8;
}