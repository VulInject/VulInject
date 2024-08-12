VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    uint32_t VAR5;
    uint32_t VAR6;
    unsigned VAR7;
    if (FUN2(VAR3, VAR4, 0, 0, &VAR5, &VAR6, &VAR7) == 0)
    {
        return VAR5;
    }
    if (FUN2(VAR3, VAR4, 2, 0, &VAR5, &VAR6, &VAR7) == 0)
    {
        return VAR5;
    }
    return ~0;
}