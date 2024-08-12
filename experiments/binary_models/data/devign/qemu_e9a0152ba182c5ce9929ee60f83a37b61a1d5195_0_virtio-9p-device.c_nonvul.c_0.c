static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    struct VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(VAR2);
    VAR5 = strlen(VAR9->VAR10);
    VAR7 = FUN3(sizeof(struct VAR6) + VAR5);
    FUN4(&VAR7->VAR11, VAR5);
    memcpy(VAR7->VAR10, VAR9->VAR10, VAR5);
    memcpy(VAR4, VAR7, VAR9->VAR12);
    FUN5(VAR7);
}