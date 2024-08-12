static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    struct stat VAR8;
    if (!FUN2(VAR6->VAR9, &VAR8))
    {
        if (FUN3(VAR8.VAR10))
        {
            int VAR11 = FUN4(VAR6->VAR9);
            if (VAR11 > 0 && VAR11 <= VAR12)
            {
                VAR2->VAR13.VAR14 = FUN5(VAR11 << VAR15);
            }
        }
    }
    FUN6(VAR2, VAR6->VAR9, VAR4);
    VAR2->VAR13.VAR16 = VAR6->VAR17;
    VAR2->VAR13.VAR18 = FUN7(VAR6->VAR17, FUN8());
}