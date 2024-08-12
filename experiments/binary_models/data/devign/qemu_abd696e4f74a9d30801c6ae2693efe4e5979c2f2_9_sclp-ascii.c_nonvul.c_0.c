void FUN1(const char *VAR1)
{
    int VAR2 = FUN2(VAR1);
    VAR3 *VAR4 = (void *)VAR5;
    VAR4->VAR6.VAR7 = sizeof(VAR3) + VAR2;
    VAR4->VAR6.VAR8 = VAR9;
    VAR4->VAR10.VAR7 = sizeof(VAR11) + VAR2;
    VAR4->VAR10.VAR12 = VAR13;
    VAR4->VAR10.VAR14 = 0;
    FUN3(VAR4->VAR15, VAR1, VAR2);
    FUN4(VAR16, VAR4);
}