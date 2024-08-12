static VAR1 FUN1(void)
{
    int64_t VAR2 = VAR3;
    int64_t VAR4;
    if (!VAR5 && VAR6->VAR7 && VAR6->VAR8)
    {
        VAR2 = VAR6->VAR8->VAR9 - FUN2(VAR6);
    }
    if (VAR10->VAR7 && VAR10->VAR8)
    {
        int64_t VAR11 = VAR10->VAR8->VAR9 - FUN2(VAR10);
        if (VAR11 < VAR2)
        {
            VAR2 = VAR11;
        }
    }
    if (VAR12->VAR7 && VAR12->VAR8)
    {
        VAR4 = (VAR12->VAR8->VAR9 - FUN2(VAR12));
        if (VAR4 < VAR2)
        {
            VAR2 = VAR4;
        }
    }
    return VAR2;
}