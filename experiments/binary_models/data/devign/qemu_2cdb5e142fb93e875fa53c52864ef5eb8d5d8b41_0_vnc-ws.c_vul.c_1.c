void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    long VAR6;
    FUN2(&VAR3->VAR7, 4096);
    VAR6 = FUN3(VAR3, FUN4(&VAR3->VAR7), 4096);
    if (!VAR6)
    {
        if (VAR3->VAR8 == -1)
        {
            FUN5(VAR3);
        }
        return;
    }
    VAR3->VAR7.VAR9 += VAR6;
    VAR5 = (VAR4 *)FUN6((char *)VAR3->VAR7.VAR10, VAR3->VAR7.VAR9, VAR11);
    if (VAR5)
    {
        FUN7(VAR3->VAR8, NULL, VAR12, NULL, VAR3);
        FUN8(VAR3, VAR3->VAR7.VAR10, VAR3->VAR7.VAR9);
        FUN9(&VAR3->VAR7, VAR5 - VAR3->VAR7.VAR10 + strlen(VAR11));
    }
}