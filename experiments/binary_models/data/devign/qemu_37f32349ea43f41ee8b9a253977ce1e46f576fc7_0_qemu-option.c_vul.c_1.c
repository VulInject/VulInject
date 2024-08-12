int FUN1(VAR1 *VAR2, qemu_opts_loopfunc VAR3, void *VAR4, VAR5 **VAR6)
{
    Location VAR7;
    VAR8 *VAR9;
    int VAR10;
    FUN2(&VAR7);
    FUN3(VAR9, &VAR2->VAR11, VAR12)
    {
        FUN4(&VAR9->VAR7);
        VAR10 = FUN5(VAR4, VAR9, VAR6);
        if (VAR10)
        {
            return VAR10;
        }
        assert(!VAR6 || !*VAR6);
    }
    FUN6(&VAR7);
    return 0;
}