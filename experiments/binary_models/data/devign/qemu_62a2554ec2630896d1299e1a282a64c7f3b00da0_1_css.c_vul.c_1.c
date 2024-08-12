static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, CcwDataStreamOp VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR2, VAR4);
    if (VAR6 <= 0)
    {
        return VAR6;
        if (VAR5 == VAR7)
        {
            goto VAR8;
            VAR6 = FUN3(&VAR9, VAR2->VAR10, VAR11, VAR3, VAR4, VAR5);
            if (VAR6 != VAR12)
            {
                VAR2->VAR13 |= VAR14;
                return -VAR15;
            VAR8:
                VAR2->VAR16 += VAR4;
                VAR2->VAR10 += VAR4;
                return 0;