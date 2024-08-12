bool FUN1(struct VAR1 *VAR2, size_t VAR3)
{
    struct VAR4 *new = NULL;
    struct VAR4 *VAR5;
    size_t VAR6;
    VAR6 = FUN2(VAR3);
    FUN3(&VAR2->VAR7);
    VAR5 = VAR2->VAR5;
    if (VAR6 != VAR5->VAR6)
    {
        new = FUN4(VAR6);
    }
    FUN5(VAR5);
    FUN6(VAR5);
    if (new)
    {
        FUN7(VAR2, new);
    }
    FUN8(VAR5);
    FUN9(&VAR2->VAR7);
    return !!new;
}