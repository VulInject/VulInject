static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    int VAR5;
    if (VAR2)
    {
        FUN2("", VAR2);
        FUN3(VAR4, VAR2);
        return;
    }
    VAR5 = VAR4->VAR6.VAR7 - VAR4->VAR6.VAR8;
    FUN2("", VAR4->VAR9.VAR10, VAR5);
    VAR4->VAR5 = -1;
    VAR4->VAR9.VAR11->FUN4(VAR4->VAR9.VAR11, VAR12, VAR4->VAR9.VAR10, VAR5);
    if (VAR5 == 0)
        FUN3(VAR4, 0);
}