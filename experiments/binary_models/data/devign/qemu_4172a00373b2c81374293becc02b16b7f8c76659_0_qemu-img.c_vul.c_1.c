static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2->VAR7);
    FUN3(VAR6);
    do
    {
        FUN4(VAR6, true);
        FUN5(VAR2->VAR8 ? ((float)VAR2->VAR9 / VAR2->VAR8 * 100.VAR10) : 0.0f, 0);
    } while (!VAR2->VAR11);
    FUN6(VAR2, VAR4);
    FUN7(VAR6);
    FUN5(100.VAR10, 0);
}