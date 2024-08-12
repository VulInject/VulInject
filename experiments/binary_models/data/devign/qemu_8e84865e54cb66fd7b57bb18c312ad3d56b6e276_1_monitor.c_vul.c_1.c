static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    struct bdrv_iterate_context VAR7 = {VAR2, 0};
    FUN2(VAR8, &VAR7);
    if (!VAR7.VAR9)
    {
        FUN3();
        return 0;
    }
    else
    {