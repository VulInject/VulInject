static void FUN1(void *VAR1, uint32_t VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8;
    int VAR9 = 0;
    FUN2("", VAR4->VAR10, VAR4->VAR11, VAR2);
    VAR8 = FUN3(VAR6, VAR2);
    if (!VAR8)
    {
        return;
    }
    if (VAR8->VAR12)
    {
        if (VAR8->VAR13)
        {
            VAR6->VAR6.VAR14[0] = VAR4->VAR11;
            VAR9 = 1;
        }
        VAR8->VAR12->VAR9 = FUN4(VAR6, VAR4->VAR10, VAR9);
        FUN5(&VAR6->VAR6, VAR8->VAR12);
    }
    FUN6(VAR6, VAR8);
}