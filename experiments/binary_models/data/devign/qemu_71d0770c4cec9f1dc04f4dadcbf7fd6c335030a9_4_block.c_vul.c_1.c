int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    if (!VAR2->VAR8)
        return -VAR9;
    if (VAR2->VAR10)
        return -VAR11;
    if (VAR8->VAR12)
    {
        int VAR13, VAR14, VAR15 = 0;
        VAR14 = VAR6 * 512;
        do
        {
            VAR13 = VAR8->FUN2(VAR2, VAR3 * 512, VAR5, VAR14 - VAR15);
            if (VAR13 < 0)
            {
                FUN3("", VAR13);
                return VAR13;
            }
            VAR15 += VAR13;
            VAR5 += VAR13;
        } while (VAR15 != VAR14);
        VAR2->VAR16 += (unsigned)VAR14;
        VAR2->VAR17++;
        return 0;
    }
    return VAR8->FUN1(VAR2, VAR3, VAR5, VAR6);