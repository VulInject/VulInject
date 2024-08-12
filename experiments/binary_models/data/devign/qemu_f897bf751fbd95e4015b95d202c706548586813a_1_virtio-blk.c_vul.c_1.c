static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = VAR6->VAR9;
    while (VAR8)
    {
        FUN3(VAR4, 1);
        FUN4(VAR4, (unsigned char *)VAR8->VAR10, sizeof(VAR11));
        VAR8 = VAR8->VAR12;
    }
    FUN3(VAR4, 0);
}