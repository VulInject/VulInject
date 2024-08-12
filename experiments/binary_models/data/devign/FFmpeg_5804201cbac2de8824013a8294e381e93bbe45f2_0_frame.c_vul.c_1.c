VAR1 *FUN1(VAR2 *VAR3, enum AVFrameSideDataType VAR4, int VAR5)
{
    VAR1 *VAR6, **VAR7;
    if (VAR3->VAR8 > VAR9 / sizeof(*VAR3->VAR10) - 1)
        return NULL;
    VAR7 = FUN2(VAR3->VAR10, (VAR3->VAR8 + 1) * sizeof(*VAR3->VAR10));
    if (!VAR7)
        return NULL;
    VAR3->VAR10 = VAR7;
    VAR6 = FUN3(sizeof(*VAR6));
    if (!VAR6)
        return NULL;
    if (VAR5 > 0)
    {
        VAR6->VAR11 = FUN4(VAR5);
        if (!VAR6->VAR11)
        {
            FUN5(&VAR6);
            return NULL;
        }
        VAR6->VAR12 = VAR6->VAR11->VAR12;
        VAR6->VAR5 = VAR5;
    }
    VAR6->VAR4 = VAR4;
    VAR3->VAR10[VAR3->VAR8++] = VAR6;
    return VAR6;
}