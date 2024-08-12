void FUN1(VAR1 *VAR2)
{
    if (FUN2())
    {
        FUN3(VAR2);
        return;
    }
    if (!VAR2->VAR3++)
    {
        FUN4(FUN5(VAR2));
        FUN6(VAR2);
    }
    FUN7(VAR2);
    FUN8(VAR2);
    FUN9(VAR2);
}