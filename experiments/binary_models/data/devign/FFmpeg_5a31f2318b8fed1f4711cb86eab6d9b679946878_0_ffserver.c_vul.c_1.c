static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int copy)
{
    VAR1 *VAR6;
    if (VAR3->VAR7 >= FUN2(VAR3->VAR8))
        return NULL;
    VAR6 = FUN3(sizeof(VAR1));
    if (!VAR6)
        return NULL;
    if (copy)
    {
        VAR6->VAR5 = FUN4(VAR5->VAR5);
        if (!VAR6->VAR5)
        {
            FUN5(VAR6);
            return NULL;
        }
        FUN6(VAR6->VAR5, VAR5);
    }
    else
        VAR6->VAR5 = VAR5;
    VAR6->VAR9 = FUN3(sizeof(VAR10));
    VAR6->VAR11 = VAR3->VAR7;
    FUN7(VAR6, 33, 1, 90000);
    VAR6->VAR12 = VAR5->VAR12;
    VAR3->VAR8[VAR3->VAR7++] = VAR6;
    return VAR6;