void FUN1(VAR1 *VAR2)
{
    cl_int VAR3 = 0;
    if (!VAR2)
        return;
    VAR3 = FUN2(*VAR2);
    if (VAR3 != VAR4)
    {
        FUN3(&VAR5, VAR6, "", FUN4(VAR3));
    }
    memset(VAR2, 0, sizeof(*VAR2));
}