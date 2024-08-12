static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    do
    {
        int VAR9;
        if (VAR7->VAR10)
            return VAR11;
        VAR9 = FUN2(VAR2->VAR5->VAR12[0]);
        if (VAR9 == VAR11 && VAR7->VAR13)
        {
            VAR14 *VAR15 = FUN3(VAR7->VAR15);
            if (!VAR15)
                return FUN4(VAR16);
            FUN5(VAR2->VAR5->VAR12[0], VAR15);
            VAR7->VAR10 = 1;
        }
        else if (VAR9 < 0)
        {
            return VAR9;
        }
    } while (!VAR7->VAR17);
    return 0;
}