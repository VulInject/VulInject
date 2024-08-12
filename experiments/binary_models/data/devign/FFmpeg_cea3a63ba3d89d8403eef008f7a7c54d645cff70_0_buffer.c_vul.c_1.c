static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR1 *VAR6;
    VAR6 = VAR3->FUN2(VAR3->VAR7);
    if (!VAR6)
        return NULL;
    VAR5 = FUN3(sizeof(*VAR5));
    if (!VAR5)
    {
        FUN4(&VAR6);
        return NULL;
    }
    VAR5->VAR8 = VAR6->VAR9->VAR8;
    VAR5->VAR10 = VAR6->VAR9->VAR10;
    VAR5->free = VAR6->VAR9->free;
    VAR5->VAR3 = VAR3;
    VAR6->VAR9->VAR10 = VAR5;
    VAR6->VAR9->free = VAR11;
    FUN5(&VAR3->VAR12, 1);
    return VAR6;