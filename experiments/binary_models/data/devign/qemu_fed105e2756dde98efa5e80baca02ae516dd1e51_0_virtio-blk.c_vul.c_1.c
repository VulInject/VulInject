void FUN1(VAR1 *VAR2)
{
    if (!VAR2)
    {
        return;
    }
    FUN2(VAR2);
    FUN3(VAR2->VAR3->VAR3.VAR4, VAR2->VAR5);
    FUN4(VAR2->VAR5);
    FUN5(FUN6(VAR2->VAR6));
    FUN7(VAR2->VAR7);
    FUN8(VAR2);
}