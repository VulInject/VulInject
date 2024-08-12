static void FUN1(VAR1 *VAR2)
{
    if (!VAR2)
        return;
    VAR2->VAR3 = false;
    VAR2->VAR4 = false;
    if (VAR2->VAR5 != -1)
    {
        FUN2(VAR2->VAR5, NULL, NULL, NULL, NULL);
        close(VAR2->VAR5);
        VAR2->VAR5 = -1;
    }
    VAR2->VAR6 = false;
    if (VAR2->VAR7 != -1)
    {
        FUN2(VAR2->VAR7, NULL, NULL, NULL, NULL);
        close(VAR2->VAR7);
        VAR2->VAR7 = -1;
    }
    VAR2->VAR8 = VAR9;
    VAR2->VAR10 = VAR9;
    VAR2->VAR11.VAR12 = 0;
}