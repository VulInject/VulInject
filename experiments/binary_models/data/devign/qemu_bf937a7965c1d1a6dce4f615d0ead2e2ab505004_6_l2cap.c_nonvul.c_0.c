static void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
    struct VAR5 *VAR6 = NULL;
    if (FUN2(VAR3 < VAR7))
    {
        FUN3(VAR2, VAR2->VAR8, VAR9, VAR3, VAR4);
        return;
    }
    if (FUN4(VAR3 >= VAR7 && VAR3 < VAR10))
        VAR6 = VAR2->VAR3[VAR3];
    if (FUN4(VAR6))
    {
        if (VAR6->VAR11 != VAR4)
        {
            FUN5(""
                         "",
                         VAR12, VAR4);
            return;
        }
        VAR2->VAR3[VAR3] = NULL;
        VAR6->VAR13.close(VAR6->VAR13.VAR14);
        FUN6(VAR6);
    }
    FUN7(VAR2, VAR3, VAR4);
}