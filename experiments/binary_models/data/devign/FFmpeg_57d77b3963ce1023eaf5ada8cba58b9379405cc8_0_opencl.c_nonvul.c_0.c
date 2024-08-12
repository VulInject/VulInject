int FUN1(cl_mem VAR1, VAR2 *VAR3, size_t VAR4)
{
    cl_int VAR5;
    void *VAR6 = FUN2(VAR7.VAR8, VAR1, VAR9, VAR10, 0, sizeof(VAR2) * VAR4, 0, NULL, NULL, &VAR5);
    if (VAR5 != VAR11)
    {
        FUN3(&VAR12, VAR13, "", FUN4(VAR5));
        return VAR14;
    }
    memcpy(VAR6, VAR3, VAR4);
    VAR5 = FUN5(VAR7.VAR8, VAR1, VAR6, 0, NULL, NULL);
    if (VAR5 != VAR11)
    {
        FUN3(&VAR12, VAR13, "", FUN4(VAR5));
        return VAR14;
    }
    return 0;
}