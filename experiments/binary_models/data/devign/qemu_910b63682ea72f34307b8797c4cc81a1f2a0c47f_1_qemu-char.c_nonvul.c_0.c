static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    if (VAR5->VAR3 != -1)
        return -1;
    FUN2(VAR3);
    if (VAR5->VAR7)
        FUN3(VAR3);
    VAR5->VAR3 = VAR3;
    VAR5->VAR8 = FUN4(VAR3);
    if (VAR5->VAR9)
    {
        FUN5(VAR5->VAR9);
        VAR5->VAR9 = 0;
    }
    FUN6(VAR2);
    return 0;
}