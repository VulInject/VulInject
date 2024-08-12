static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    bool VAR6 = VAR4[4] & 1;
    bool VAR7 = VAR4[4] & 2;
    int VAR8 = VAR4[4] & 0xf0;
    if (VAR8)
    {
        return;
    }
    if (VAR7)
    {
        if (!VAR6 && !VAR2->VAR9 && VAR2->VAR10)
        {
            VAR5 = FUN2(VAR2->VAR11) ? VAR12 : VAR13;
            FUN3(VAR2, VAR5, VAR14);
            return;
        }
        if (VAR2->VAR9 != !VAR6)
        {
            FUN4(VAR2->VAR11, !VAR6);
            VAR2->VAR9 = !VAR6;
        }
    }
    FUN5(VAR2);
}