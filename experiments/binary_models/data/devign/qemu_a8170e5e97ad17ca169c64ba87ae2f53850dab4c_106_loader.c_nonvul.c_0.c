int FUN1(const char *VAR1, hwaddr VAR2, uint64_t VAR3)
{
    int VAR4;
    VAR4 = FUN2(VAR1);
    if (VAR4 > VAR3)
    {
        return -1;
    }
    if (VAR4 > 0)
    {
        FUN3(VAR1, VAR2, -1);
    }
    return VAR4;
}