static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    struct VAR8 *VAR9 = VAR4->VAR10;
    uint32_t VAR11;
    int VAR12;
    FUN2("", VAR7, (unsigned long long)VAR9->VAR13, VAR9->VAR7);
    VAR11 = FUN3(VAR7, VAR9->VAR7);
    if (VAR11)
    {
        if (VAR4->VAR14)
        {
            VAR12 = FUN4(&VAR2->VAR15, VAR9->VAR13, VAR6, VAR11);
        }
        else
        {
            VAR12 = FUN5(&VAR2->VAR15, VAR9->VAR13, VAR6, VAR11);
        }
    }
    VAR9->VAR7 -= VAR11;
    VAR9->VAR13 += VAR11;
    if (VAR12)
    {
        return -1;
    }
    return VAR11;
}