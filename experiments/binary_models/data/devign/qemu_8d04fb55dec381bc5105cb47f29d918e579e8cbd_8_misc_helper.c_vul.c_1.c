VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6)
{
    int VAR7 = FUN2(VAR4, VAR5, VAR6);
    if (VAR7 < 0)
    {
        FUN3(VAR4, -VAR7, 4);
        return 0;
    }
    return VAR7;
}