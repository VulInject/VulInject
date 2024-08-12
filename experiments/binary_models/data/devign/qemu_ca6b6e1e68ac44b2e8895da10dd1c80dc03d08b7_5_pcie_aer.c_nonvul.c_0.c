void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    if (FUN2(VAR2, VAR4, &VAR6) < 0)
    {
        return;
    }
    VAR4 = FUN3(VAR6);
    assert(VAR4);
    VAR7 = (int)FUN4(VAR4, "");
    FUN5(VAR2, "", FUN6(VAR4, ""), FUN6(VAR4, ""), (int)FUN4(VAR4, ""), FUN7(VAR7), FUN8(VAR7));
}