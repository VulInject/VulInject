static int FUN1(void *VAR1, int VAR2, bool VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR5->VAR6 = VAR3;
    if (VAR3)
    {
        FUN2(VAR5);
    }
    return FUN3(VAR5, VAR2, VAR3);
}