static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR2, VAR2);
    VAR6 *VAR7 = &VAR5->VAR8.VAR9[0];
    FUN3(VAR5, &VAR7->VAR10, VAR7->VAR11);
    VAR7->VAR12 = VAR7->VAR10.VAR13;
    FUN4(VAR5->VAR14, "", VAR7->VAR12);
    return VAR7->VAR12 != 0;
}