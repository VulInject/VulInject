static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    while (VAR4)
    {
        VAR3 *VAR5 = VAR4;
        VAR4 = VAR5->VAR6;
        FUN2(VAR5, VAR2);
        if (VAR5->VAR7.VAR8 != -1)
        {
            FUN3(&VAR5->VAR7);
        }
        if (VAR2)
        {
            int VAR9 = FUN4(FUN5(VAR5->VAR10), &VAR5->VAR11.VAR12);
            bool VAR13 = !(VAR9 & VAR14);