static void FUN1(void *VAR1, int VAR2, RunState VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR6 *VAR7 = NULL;
    int VAR8;
    if (VAR2)
    {
        return;
    }
    VAR8 = FUN2(VAR5->VAR9, VAR10, VAR11, NULL, true, &VAR7);
    if (VAR7)
    {
        FUN3(VAR7);
    }
    if (VAR8 < 0 && VAR8 != -VAR12)
    {
        FUN4();
    }
}