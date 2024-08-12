int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    int VAR5;
    if (VAR4 < 0)
        return -1;
    if (VAR2->VAR6 && VAR2->VAR7)
    {
        VAR5 = FUN2(VAR2, VAR3, VAR4);
        if (VAR5 > 0)
            VAR2->VAR8 += VAR5;
        return VAR5;
    }
    VAR5 = VAR2->VAR9 - VAR2->VAR10;
    if (VAR5 == 0)
    {
        VAR2->VAR9 = VAR2->VAR10 = VAR2->VAR11;
        FUN3(VAR2);
        VAR5 = VAR2->VAR9 - VAR2->VAR10;
    }
    if (VAR5 > VAR4)
        VAR5 = VAR4;
    memcpy(VAR3, VAR2->VAR10, VAR5);
    VAR2->VAR10 += VAR5;
    if (!VAR5)
    {
        if (VAR2->VAR12)
            return VAR2->VAR12;
        if (FUN4(VAR2))
            return VAR13;
    }
    return VAR5;
}