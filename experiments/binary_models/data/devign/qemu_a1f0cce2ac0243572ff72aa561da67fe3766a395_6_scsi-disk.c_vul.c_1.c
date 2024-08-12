static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR2.VAR8);
    uint32_t VAR9;
    if (VAR4->VAR10 == (VAR11)-1)
    {
        FUN3("", VAR4->VAR12.VAR13);
        VAR4->VAR10 = 0;
        FUN4(&VAR4->VAR2, VAR4->VAR12.VAR13);
        return;
    }
    FUN3("", VAR4->VAR10);
    if (VAR4->VAR10 == 0)
    {
        FUN5(VAR4, VAR14, VAR15);
        return;
    }
    assert(VAR4->VAR2.VAR16 == NULL);
    VAR9 = VAR4->VAR10;
    if (VAR9 > VAR17 / 512)
        VAR9 = VAR17 / 512;
    VAR4->VAR12.VAR13 = VAR9 * 512;
    FUN6(&VAR4->VAR18, &VAR4->VAR12, 1);
    VAR4->VAR2.VAR16 = FUN7(VAR6->VAR19, VAR4->VAR20, &VAR4->VAR18, VAR9, VAR21, VAR4);
    if (VAR4->VAR2.VAR16 == NULL)
    {
        FUN8(VAR4, -VAR22);
    }
}