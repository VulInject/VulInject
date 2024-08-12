static void *FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    struct VAR4 *VAR5 = FUN2(sizeof(struct VAR4) + VAR3);
    FUN3(&VAR2->VAR6, VAR5, VAR7);
    VAR5->VAR3 = VAR3;
    return &VAR5->VAR8[0];
}