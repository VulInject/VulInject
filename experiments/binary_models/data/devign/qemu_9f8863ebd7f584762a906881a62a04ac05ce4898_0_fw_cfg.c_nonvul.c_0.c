static char *FUN1(char *VAR1, VAR2 *VAR3, int *VAR4)
{
    VAR5 *VAR6 = NULL;
    gboolean VAR7;
    VAR8 *VAR9;
    int VAR10;
    unsigned int VAR11;
    int VAR12;
    VAR7 = FUN2(VAR1, &VAR9, VAR3, &VAR6);
    if (VAR7 == VAR13)
    {
        FUN3("", VAR1);
        FUN4(VAR6);
        return NULL;
    }
    if (*VAR3 < 30)
    {
        goto VAR14;
    }
    VAR11 = ((VAR9[0] & 0xff) + (VAR9[1] << 8)) & 0xffff;
    if (VAR11 == 0xd8ff)
    {
        VAR10 = VAR15;
    }
    else if (VAR11 == 0x4d42)
    {
        VAR10 = VAR16;
    }
    else
    {
        goto VAR14;
    }
    if (VAR10 == VAR16)
    {
        VAR12 = (VAR9[28] + (VAR9[29] << 8)) & 0xffff;
        if (VAR12 != 24)
        {
            goto VAR14;
        }
    }
    *VAR4 = VAR10;
    return VAR9;
VAR14:
    FUN3(""
                 "",
                 VAR1);
    FUN5(VAR9);
    return NULL;
}