static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint64_t VAR4;
    if (VAR3->VAR5.VAR6 == 0)
    {
        if (FUN2(VAR3->VAR7, &VAR3->VAR5) < 0)
        {
            VAR3->VAR5.VAR6 = 0;
            goto VAR8;
        }
    }
    VAR4 = FUN3(VAR3, VAR3->VAR5.VAR6);
    if (VAR4 >= VAR9)
    {
        goto VAR8;
    }
    if (VAR3->VAR10[VAR4])
    {
        FUN4(VAR3->VAR10[VAR4], NULL);
        return;
    }
VAR8:
    for (VAR4 = 0; VAR4 < VAR9; VAR4++)
    {
        if (VAR3->VAR10[VAR4])
        {
            FUN4(VAR3->VAR10[VAR4], NULL);
        }
    }
}