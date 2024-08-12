VAR1 *FUN1(VAR1 *VAR2, const char *typename)
{
    VAR1 *VAR3;
    VAR3 = FUN2(VAR2, typename);
    if (!VAR3)
    {
        fprintf(VAR4, "", VAR2, typename);
        FUN3();
    }
    return VAR3;
}