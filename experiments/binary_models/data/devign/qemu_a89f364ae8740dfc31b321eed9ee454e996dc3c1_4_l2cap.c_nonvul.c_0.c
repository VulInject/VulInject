void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int (*VAR5)(struct VAR1 *VAR2, struct VAR6 *VAR7))
{
    struct VAR8 *VAR9 = FUN2(VAR2, VAR3);
    if (VAR9)
    {
        fprintf(VAR10, "", VAR11, VAR3, VAR2->VAR12.VAR13);
        FUN3(-1);
    }
    VAR9 = FUN4(sizeof(*VAR9));
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR14 = VAR2->VAR15;
    VAR2->VAR15 = VAR9;
}