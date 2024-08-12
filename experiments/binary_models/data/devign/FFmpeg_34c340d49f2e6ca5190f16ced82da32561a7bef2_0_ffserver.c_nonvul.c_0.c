static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int copy)
{
    VAR1 *VAR6;
    VAR6 = FUN2(sizeof(VAR1));
    if (!VAR6)
        return NULL;
    if (copy)
    {
        VAR6->VAR5 = FUN3();
        memcpy(VAR6->VAR5, VAR5, sizeof(VAR4));
        if (VAR5->VAR7)
        {
            VAR6->VAR5->VAR8 = FUN4(VAR5->VAR7);
            memcpy(VAR6->VAR5->VAR8, VAR5->VAR8, VAR5->VAR7);
        }
    }
    else
    {
        VAR6->VAR5 = VAR5;
    }
    VAR6->VAR9 = FUN2(sizeof(VAR10));
    VAR6->VAR11 = VAR3->VAR12;
    FUN5(VAR6, 33, 1, 90000);
    VAR6->VAR13 = VAR5->VAR13;
    VAR3->VAR14[VAR3->VAR12++] = VAR6;
    return VAR6;
}