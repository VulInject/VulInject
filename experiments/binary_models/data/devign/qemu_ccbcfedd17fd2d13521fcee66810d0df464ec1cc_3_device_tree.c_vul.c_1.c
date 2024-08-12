int FUN1(void *VAR1, const char *VAR2, const char *VAR3, uint32_t VAR4)
{
    int VAR5;
    VAR5 = FUN2(VAR1, VAR2);
    if (VAR5 < 0)
        return VAR5;
    return FUN3(VAR1, VAR5, VAR3, VAR4);
}