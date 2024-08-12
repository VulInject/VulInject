static int FUN1(VAR1 *VAR2)
{
    char VAR3[32];
    VAR4 *VAR5;
    int VAR6, VAR7, VAR8;
    FUN2(VAR2->VAR9, 5);
    FUN3(VAR2->VAR9, VAR3, sizeof(VAR3));
    if (sscanf(VAR3, "", &VAR7, &VAR8, &VAR6) != 3)
        return VAR10;
    if (VAR7 <= 0 || VAR6 <= 0 || VAR8 <= 0)
        return VAR10;
    VAR5 = FUN4(VAR2, NULL);
    if (!VAR5)
        return FUN5(VAR11);
    VAR5->VAR12->VAR13 = VAR14;
    VAR5->VAR12->VAR7 = VAR7;
    VAR5->VAR12->VAR8 = VAR8;
    VAR5->VAR12->VAR15 = FUN6(VAR6, 0, 1, 0xFFFF);
    VAR5->VAR12->VAR16 = VAR6;
    VAR5->VAR12->VAR17 = VAR6 * VAR5->VAR12->VAR7 / 8;
    FUN7(VAR5, 64, 1, VAR5->VAR12->VAR8);
    return 0;
}