void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2 ? (VAR3 *)VAR2->VAR5 : VAR6;
    if (!VAR4)
        return;
    if (VAR4->VAR7)
    {
        FUN2(VAR4->VAR7);
        VAR4->VAR7 = NULL;
    }
    if (VAR4->VAR8 != -1)
    {
        FUN3(VAR4->VAR8, NULL, NULL, NULL, NULL);
        close(VAR4->VAR8);
        VAR4->VAR8 = -1;
    }
    VAR4->VAR9 = VAR10;
    VAR4->VAR11 = VAR10;
    VAR4->VAR12.VAR13 = 0;
}