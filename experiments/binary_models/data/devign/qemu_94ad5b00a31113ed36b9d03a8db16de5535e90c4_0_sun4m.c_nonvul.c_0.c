static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    if (VAR3)
    {
        FUN2(VAR2);
        VAR5->VAR6 |= 1 << VAR2;
        FUN3(VAR5);
    }
    else
    {
        FUN4(VAR2);
        VAR5->VAR6 &= ~(1 << VAR2);
        FUN5(VAR5);
    }
}