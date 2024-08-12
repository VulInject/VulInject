static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = VAR4->VAR7.VAR8;
    FUN2("", VAR2);
    VAR4->VAR7.VAR9 = NULL;
    if (VAR2 || VAR4->VAR7.VAR10)
    {
        FUN3(VAR4, VAR2);
        return;
    }
    if (VAR4->VAR7.VAR11.VAR12[0] == VAR13 && VAR4->VAR7.VAR11.VAR12[4] == 12 && VAR6->VAR14 == VAR15)
    {
        VAR6->VAR16 = (VAR4->VAR12[9] << 16) | (VAR4->VAR12[10] << 8) | VAR4->VAR12[11];
        FUN2("", VAR6->VAR16);
    }
    FUN3(VAR4, VAR2);
}