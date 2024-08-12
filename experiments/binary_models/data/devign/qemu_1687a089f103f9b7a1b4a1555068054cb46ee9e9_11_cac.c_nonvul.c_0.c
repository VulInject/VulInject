FUN1(int VAR1, const unsigned char *VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned char VAR10[] = {0xa0, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00};
    int VAR11 = sizeof(VAR10);
    VAR10[VAR11 - 1] = VAR1;
    VAR7 = FUN2(VAR2, VAR3, VAR5);
    if (VAR7 == NULL)
    {
        goto VAR12;
    }
    VAR9 = FUN3(VAR13, VAR14, VAR10, VAR11);
    if (VAR9 == NULL)
    {
        goto VAR12;
    }
    FUN4(VAR9, VAR7, VAR15);
    VAR7 = NULL;
    return VAR9;
VAR12:
    if (VAR7 != NULL)
    {
        FUN5(VAR7);
    }
    return NULL;
}