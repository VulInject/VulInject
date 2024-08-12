void FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4)
    {
        return;
    }
    if (VAR2->VAR5 == 0 && VAR2->VAR6 > 0)
    {
        fprintf(VAR7, "");
        FUN2();
    }
    VAR2->VAR8[VAR2->VAR6++] = VAR3;
    VAR2->VAR5 = 1;
    if (VAR2->VAR6 >= VAR9)
    {
        int VAR10 = FUN3(VAR2);
        if (VAR10 < 0)
        {
            FUN4(VAR2, VAR10);
        }
    }
}