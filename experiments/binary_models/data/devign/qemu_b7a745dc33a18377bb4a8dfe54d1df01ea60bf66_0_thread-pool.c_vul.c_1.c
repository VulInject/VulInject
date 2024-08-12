static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5, *VAR6;
    FUN2(VAR3->VAR7);
VAR8:
    FUN3(VAR5, &VAR3->VAR9, VAR10, VAR6)
    {
        if (VAR5->VAR11 != VAR12)
        {
            continue;
        }
        FUN4(VAR3, VAR5, VAR5->VAR13.VAR1, VAR5->VAR14);
        FUN5(VAR5, VAR10);
        if (VAR5->VAR13.VAR15)
        {
            FUN6();