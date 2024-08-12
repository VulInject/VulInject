static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2), VAR5, NULL);
    int64_t VAR6 = -1;
    if (VAR4)
    {
        VAR6 = FUN4(FUN5(VAR4));
    }
    if (VAR6 < 0)
    {
        return -1;
    }
    return VAR6;
}