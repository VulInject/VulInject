static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (!VAR3)
    {
        FUN2(VAR5->VAR6, VAR3);
        return;
    }
    if (VAR5)
    {
        VAR5->VAR7 |= VAR8;
    }
    FUN2(VAR5->VAR6, VAR3);
}