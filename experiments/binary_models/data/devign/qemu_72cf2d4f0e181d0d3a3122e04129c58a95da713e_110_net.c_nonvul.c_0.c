static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    VAR9 = FUN2(sizeof(VAR8) + VAR5);
    VAR9->VAR2 = VAR2;
    VAR9->VAR5 = VAR5;
    VAR9->VAR7 = VAR7;
    memcpy(VAR9->VAR10, VAR4, VAR5);
    FUN3(&VAR2->VAR11->VAR12, VAR9, VAR13);
}