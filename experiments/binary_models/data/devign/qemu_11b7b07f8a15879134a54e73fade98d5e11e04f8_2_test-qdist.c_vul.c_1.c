static void FUN1(void)
{
    struct qdist VAR1;
    char *VAR2;
    FUN2(&VAR1);
    FUN3(FUN4(FUN5(&VAR1)));
    FUN3(FUN4(FUN6(&VAR1)));
    FUN3(FUN4(FUN7(&VAR1)));
    VAR2 = FUN8(&VAR1, 0);
    FUN3(VAR2 == NULL);
    VAR2 = FUN8(&VAR1, 2);
    FUN3(VAR2 == NULL);
    FUN9(&VAR1);
}