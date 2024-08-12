static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    FUN3(&VAR4->VAR5);
    FUN3(&VAR4->VAR6);
    FUN3(&VAR4->VAR7);
    VAR4->VAR8 = FUN4(VAR9, VAR4);
    if (VAR10 != VAR11)
        VAR12 = 1;
}