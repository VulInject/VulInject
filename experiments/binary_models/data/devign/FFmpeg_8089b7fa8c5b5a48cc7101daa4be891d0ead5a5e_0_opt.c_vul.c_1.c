VAR1 FUN1(void *VAR2, const char *VAR3, const VAR4 **VAR5)
{
    int64_t VAR6 = 1;
    double VAR7 = 1;
    int VAR8 = 1;
    FUN2(VAR2, VAR3, VAR5, &VAR7, &VAR8, &VAR6);
    if (VAR7 == 1.0 && (int)VAR6 == VAR6)
        return (VAR1){VAR6, VAR8};
    else
        return FUN3(VAR7 * VAR6 / VAR8, 1 << 24);
}