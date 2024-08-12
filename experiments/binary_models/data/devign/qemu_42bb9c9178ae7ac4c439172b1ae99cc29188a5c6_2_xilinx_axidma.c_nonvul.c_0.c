static void FUN1(struct VAR1 *VAR2, hwaddr VAR3)
{
    struct VAR4 *VAR5 = &VAR2->VAR6;
    VAR5->VAR7 = FUN2(VAR5->VAR7);
    VAR5->VAR8 = FUN2(VAR5->VAR8);
    VAR5->VAR9 = FUN3(VAR5->VAR9);
    VAR5->VAR10 = FUN3(VAR5->VAR10);
    FUN4(VAR3, (void *)VAR5, sizeof *VAR5);
}