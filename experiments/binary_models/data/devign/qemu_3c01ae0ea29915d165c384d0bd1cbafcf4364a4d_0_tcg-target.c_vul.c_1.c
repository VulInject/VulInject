static void FUN1(VAR1 *VAR2, TCGArg VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    if (VAR5->VAR7)
    {
        FUN2(VAR2, VAR5->VAR8.VAR9);
        assert(VAR5->VAR8.VAR9);
    }
    else
    {
        FUN3(VAR2, VAR2->VAR10, sizeof(VAR11), VAR3, 0);
        FUN2(VAR2, 0);
    }
}