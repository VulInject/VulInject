static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    struct bdrv_iterate_context VAR7 = {VAR2, 0};
    if (FUN2(VAR8))
    {
        FUN3(VAR9);
        return -1;
    }
    FUN4(VAR10, &VAR7);
    if (!VAR7.VAR11)
    {
        FUN5();
        return 0;
    }
    else
    {
        return -1;
    }
}