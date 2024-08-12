const char *FUN1(const char *VAR1)
{
    if (!VAR2 || VAR1[0] != '')
        return VAR1;
    return FUN2(VAR2, VAR1) ?: VAR1;
}