static VAR1 FUN1(void)
{
    int64_t VAR2 = VAR3;
    if (VAR4[VAR5])
    {
        VAR2 = VAR4[VAR5]->VAR6 - FUN2(VAR7);
    }
    if (VAR4[VAR8])
    {
        int64_t VAR9 = VAR4[VAR8]->VAR6 - FUN2(VAR10);
        if (VAR9 < VAR2)
            VAR2 = VAR9;
    }
    if (VAR2 < 0)
        VAR2 = 0;
    return VAR2;
}