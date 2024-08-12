static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        const char *VAR3;
    } VAR4[] = {{""hello VAR5\"", ""}, {""the quick brown fox jumped over the VAR6\"", ""}, {}};
    for (VAR1 = 0; VAR4[VAR1].VAR2; VAR1++)
    {
        VAR7 *VAR8;
        VAR9 *VAR10;
        VAR8 = FUN2(VAR4[VAR1].VAR2);
        VAR10 = FUN3(VAR8);
        FUN4(VAR10);
        FUN4(strcmp(FUN5(VAR10), VAR4[VAR1].VAR3) == 0);
        VAR10 = FUN6(VAR8);
        FUN4(strcmp(FUN5(VAR10), VAR4[VAR1].VAR2) == 0);
        FUN7(VAR8);
        FUN8(VAR10);
    }
}