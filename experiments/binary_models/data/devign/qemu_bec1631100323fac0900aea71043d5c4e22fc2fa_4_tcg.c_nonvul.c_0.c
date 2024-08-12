static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, intptr_t VAR8)
{
    VAR9 *VAR10;
    if (VAR7->VAR11)
    {
        FUN2(VAR4, VAR5, VAR7->VAR12.VAR13, VAR8);
    }
    else
    {
        VAR10 = FUN3(sizeof(VAR9));
        VAR10->VAR5 = VAR5;
        VAR10->VAR14 = VAR4;
        VAR10->VAR8 = VAR8;
        VAR10->VAR15 = VAR7->VAR12.VAR16;
        VAR7->VAR12.VAR16 = VAR10;
    }
}