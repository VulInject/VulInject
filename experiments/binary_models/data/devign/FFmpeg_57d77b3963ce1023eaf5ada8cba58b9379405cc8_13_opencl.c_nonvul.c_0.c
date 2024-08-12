int FUN1(VAR1 *VAR2, cl_mem VAR3, size_t VAR4)
{
    cl_int VAR5;
    void *VAR6 = FUN2(VAR7.VAR8, VAR3, VAR9, VAR10, 0, VAR4, 0, NULL, NULL, &VAR5);
    if (VAR5 != VAR11)
    {
        FUN3(&VAR12, VAR13, "", FUN4(VAR5));
        return VAR14;
    }
    memcpy(VAR2, VAR6, VAR4);
    VAR5 = FUN5(VAR7.VAR8, VAR3, VAR6, 0, NULL, NULL);
    if (VAR5 != VAR11)
    {
        FUN3(&VAR12, VAR13, "", FUN4(VAR5));
        return VAR14;
    }
    return 0;
}