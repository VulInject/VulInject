static int FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7;
    FUN2(VAR6);
    FUN3(VAR2, &VAR6->VAR8);
    FUN4(VAR6);
    FUN5(VAR4->VAR9);
    FUN6(VAR4, VAR4->VAR10);
    FUN7(VAR2, 1);
    FUN8(VAR4);
    return 0;
}