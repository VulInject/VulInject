static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    FUN2(FUN3(VAR4->VAR5), &VAR4->VAR6);
    FUN4("", VAR4->VAR7, VAR2);
    if (VAR2 < 0)
    {
        FUN5(VAR4, VAR2);
        return;
    }
    if (VAR4->VAR8 == 2352)
    {
        FUN6(VAR4->VAR9, VAR4->VAR7);
    }
    VAR4->VAR7++;
    VAR4->VAR10 = 0;
    VAR4->VAR11 &= ~VAR12;
    FUN7(VAR4);
}