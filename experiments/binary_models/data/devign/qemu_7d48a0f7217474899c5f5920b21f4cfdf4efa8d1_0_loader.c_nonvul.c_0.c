int FUN1(const char *VAR1, hwaddr VAR2, uint64_t VAR3)
{
    int VAR4;
    VAR5 *VAR6;
    VAR4 = FUN2(VAR1, VAR3, &VAR6);
    if (VAR4 != -1)
    {
        FUN3(VAR1, VAR6, VAR4, VAR2);
        FUN4(VAR6);
    }
    return VAR4;
}