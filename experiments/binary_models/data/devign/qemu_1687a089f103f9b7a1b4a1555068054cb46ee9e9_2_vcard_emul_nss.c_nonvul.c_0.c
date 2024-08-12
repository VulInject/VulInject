FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    VAR5 *VAR6;
    unsigned char *VAR7;
    int VAR8;
    SECStatus VAR9;
    if (!VAR10)
    {
        return VAR11;
    }
    VAR6 = FUN2(VAR2);
    VAR7 = FUN3(VAR4 + 1);
    memcpy(VAR7, VAR3, VAR4);
    VAR7[VAR4] = 0;
    for (VAR8 = VAR4 - 1; VAR8 >= 0 && (VAR7[VAR8] == 0xff); VAR8--)
    {
        VAR7[VAR8] = 0;
    }
    VAR9 = FUN4(VAR6, VAR12, VAR7);
    memset(VAR7, 0, VAR4);
    FUN5(VAR7);
    if (VAR9 == VAR13)
    {
        return VAR14;
    }
    return VAR11;
}