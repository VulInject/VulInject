static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR2->VAR5 = 0;
    VAR2->VAR6 = 0x40000000;
    VAR2->VAR7 = FUN2(FUN3(VAR2), VAR2->VAR8, VAR2->VAR6);
    if (!VAR2->VAR7)
    {
        FUN4(VAR4, "", VAR2->VAR9);
        return;
    }
    FUN5(&VAR2->VAR10, 0, FUN6(VAR2->VAR7));
}