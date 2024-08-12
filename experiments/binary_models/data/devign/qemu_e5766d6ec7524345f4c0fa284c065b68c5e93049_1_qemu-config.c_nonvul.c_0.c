int FUN1(const char *VAR1)
{
    VAR2 *VAR3 = fopen(VAR1, "");
    int VAR4;
    if (VAR3 == NULL)
    {
        return -VAR5;
    }
    VAR4 = FUN2(VAR3, VAR6, VAR1);
    fclose(VAR3);
    return VAR4;
}