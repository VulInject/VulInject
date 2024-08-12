static void FUN1(void)
{
    VAR1 *VAR2;
    NestData VAR3 = {
        .VAR4 = 0,
        .VAR5 = 0,
        .VAR6 = 128,
    };
    VAR2 = FUN2(VAR7);
    FUN3(VAR2, &VAR3);
    FUN4(VAR3.VAR4, ==, VAR3.VAR6);
    FUN4(VAR3.VAR5, ==, VAR3.VAR6);
}