static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR2.VAR8);
    uint32_t VAR9;
    assert(VAR4->VAR2.VAR10 == NULL);
    VAR9 = VAR4->VAR11.VAR12 / 512;
    if (VAR9)
    {
        FUN3(&VAR4->VAR13, &VAR4->VAR11, 1);
        VAR4->VAR2.VAR10 = FUN4(VAR6->VAR14, VAR4->VAR15, &VAR4->VAR13, VAR9, VAR16, VAR4);
        if (VAR4->VAR2.VAR10 == NULL)
        {
            FUN5(VAR4, -VAR17);
        }
    }
    else
    {
        FUN5(VAR4, 0);
    }
    return 0;
}