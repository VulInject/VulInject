static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR7;
    VAR8 *VAR9 = VAR6->VAR10.VAR11->VAR1;
    VAR4->VAR2 = VAR2;
    VAR6->VAR12++;
    if (VAR2 == 0)
    {
        VAR6->VAR13++;
    }
    else
    {
        FUN2(VAR6, VAR4->VAR14->VAR11->VAR15, VAR2);
    }
    assert(VAR6->VAR12 <= VAR9->VAR16);
    assert(VAR6->VAR13 <= VAR9->VAR16);
    if (VAR6->VAR12 < VAR9->VAR16)
    {
        return;
    }
    if (VAR6->VAR17)
    {
        FUN3(VAR6);
    }
    else
    {
        FUN4(VAR6);
    }
    FUN5(VAR6);
}