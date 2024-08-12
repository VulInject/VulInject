static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3);
    uint64_t VAR6;
    int VAR7;
    if (VAR5->VAR8.VAR9 == 0)
    {
        VAR7 = FUN3(VAR5->VAR10, &VAR5->VAR8);
        if (VAR7 == -VAR11)
        {
            return;
        }
        if (VAR7 < 0)
        {
            VAR5->VAR8.VAR9 = 0;
            goto VAR12;
        }
    }
    VAR6 = FUN4(VAR5, VAR5->VAR8.VAR9);
    if (VAR6 >= VAR13)
    {
        goto VAR12;
    }
    if (VAR5->VAR14[VAR6])
    {
        FUN5(VAR5->VAR14[VAR6], NULL);
        return;
    }
VAR12:
    FUN6(VAR3);
}