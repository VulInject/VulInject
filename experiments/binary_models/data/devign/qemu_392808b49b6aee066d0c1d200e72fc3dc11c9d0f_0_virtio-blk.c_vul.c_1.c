static void FUN1(void *VAR1, int VAR2, RunState VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (!VAR2)
        return;
    if (!VAR5->VAR6)
    {
        VAR5->VAR6 = FUN2(VAR7, VAR5);
        FUN3(VAR5->VAR6);
    }
}