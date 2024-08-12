static char *FUN1(uint32_t VAR1)
{
    static char VAR2[16];
    if (VAR1 < VAR3)
    {
        const char *VAR4 = VAR5[VAR1 / 4];
        if (VAR4 != 0)
        {
            snprintf(VAR2, sizeof(VAR2), "", VAR4, VAR1 % 4);
        }
        else
        {
            snprintf(VAR2, sizeof(VAR2), "", VAR1);
        }
    }
    else
    {
        snprintf(VAR2, sizeof(VAR2), "", VAR1);
    }
    return VAR2;
}