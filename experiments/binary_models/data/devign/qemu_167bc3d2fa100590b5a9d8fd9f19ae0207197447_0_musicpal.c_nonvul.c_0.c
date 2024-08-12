static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    VAR5 = FUN2(sizeof(VAR4));
    if (!VAR5)
        return;
    VAR5->VAR3 = VAR3;
    VAR5->VAR2 = VAR2;
    VAR5->VAR7 = 1;
    VAR6 = FUN3(0, VAR8, VAR9, VAR5);
    FUN4(VAR3, VAR10, VAR6);
    FUN5(VAR2, VAR11, VAR12, NULL, NULL, VAR5);
}