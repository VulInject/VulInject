static int FUN1(VAR1 **VAR2, char *VAR3, VAR4 **VAR5)
{
    CompareChardevProps VAR6;
    *VAR2 = FUN2(VAR3);
    if (*VAR2 == NULL)
    {
        FUN3(VAR5, "", VAR3);
        return 1;
    }
    memset(&VAR6, 0, sizeof(VAR6));
    if (FUN4((*VAR2)->VAR7, VAR8, &VAR6, VAR5))
    {
        return 1;
    }
    if (!VAR6.VAR9)
    {
        FUN3(VAR5, ""%VAR10\"", VAR3);
        return 1;
    }
    return 0;
}