void FUN1(VAR1 *VAR2, const VAR3 *VAR4, hwaddr VAR5, int VAR6)
{
    if (VAR2->VAR7)
    {
        VAR8 *VAR9 = FUN2(VAR2->VAR7);
        VAR9->FUN3(VAR2->VAR7, VAR4, VAR5, VAR6);
        return;
    }
    FUN4(FUN5(VAR2)->VAR10, (void *)VAR4, VAR6 * VAR11, false, VAR6 * VAR11);
}