static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 = 1;
    VAR3->VAR5 = 0;
    VAR3->VAR6 = -VAR7;
    FUN2(VAR8, VAR9, VAR3);
    FUN3(VAR3->VAR5, ==, 1);
    VAR3->VAR6 = 0;
    VAR4--;
}