int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    if (!VAR8)
        return -VAR9;
    if (VAR8->VAR10)
    {
        int VAR11, VAR12;
        VAR12 = VAR6 * 512;
        VAR11 = VAR8->FUN2(VAR2, VAR3 * 512, VAR5, VAR12);
        if (VAR11 < 0)
            return VAR11;
        else if (VAR11 != VAR12)
            return -VAR13;
        else
        {
            VAR2->VAR14 += (unsigned)VAR12;
            VAR2->VAR15++;
            return 0;
        }
    }
    else
    {
        return VAR8->FUN1(VAR2, VAR3, VAR5, VAR6);
    }