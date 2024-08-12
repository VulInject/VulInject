static void FUN1(const VAR1 *VAR2, const char VAR3, const char VAR4)
{
    VAR1 *VAR5 = NULL;
    char VAR6[] = {VAR3, ''};
    char VAR7[] = {VAR4, ''};
    char *VAR8 = NULL;
    int VAR9;
    FUN2(&VAR5, VAR2, 0);
    FUN3(VAR5);
    FUN4(VAR5, &VAR8, VAR4, VAR3);
    FUN5("", VAR8);
    FUN6(&VAR5);
    VAR9 = FUN7(&VAR5, VAR8, VAR7, VAR6, 0);
    FUN5("", VAR9);
    FUN8(&VAR8);
    FUN3(VAR5);
    FUN6(&VAR5);
}