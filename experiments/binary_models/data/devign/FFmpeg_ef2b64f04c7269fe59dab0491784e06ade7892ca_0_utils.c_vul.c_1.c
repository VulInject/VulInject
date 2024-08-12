int FUN1(VAR1 *VAR2)
{
    VAR3++;
    if (VAR3 != 1)
    {
        FUN2(VAR2, VAR4, "");
        VAR3--;
        return -1;
    }
    if (VAR5 && VAR2->VAR6)
        FUN3(VAR2);
    if (VAR2->VAR7->close)
        VAR2->VAR7->close(VAR2);
    FUN4(VAR2);
    FUN5(&VAR2->VAR8);
    VAR2->VAR7 = NULL;
    VAR3--;
    return 0;