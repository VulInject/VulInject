VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    struct VAR5 *VAR6;
    if (!VAR3)
        VAR4 = FUN2(NULL, "");
    VAR6 = FUN3(struct VAR5, VAR4, VAR4);
    VAR6->VAR4.VAR7 = VAR6;
    VAR6->VAR3 = VAR3;
    VAR6->VAR3->VAR7 = VAR6;
    VAR6->VAR3->VAR8 = VAR9;
    VAR6->VAR3->VAR10 = VAR11;
    FUN4(&VAR6->VAR4);
    return VAR4;