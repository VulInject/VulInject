static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR6->VAR10.VAR11);
    uint64_t VAR12;
    uint32_t VAR13;
    VAR6->VAR10.VAR14 = NULL;
    if (VAR6->VAR10.VAR15)
    {
        FUN3(&VAR6->VAR10);
        goto VAR16;
    }
    if (VAR2 < 0)
    {
        if (FUN4(VAR6, -VAR2))
        {
            goto VAR16;
        }
    }
    if (VAR4->VAR17 > 0)
    {
        VAR12 = FUN5(&VAR4->VAR18[0]);
        VAR13 = FUN6(&VAR4->VAR18[8]) & 0xffffffffULL;
        if (!FUN7(VAR8, VAR12, VAR13))
        {
            FUN8(VAR6, FUN9(VAR19));
            goto VAR16;
        }
        VAR6->VAR10.VAR14 = FUN10(VAR8->VAR9.VAR20.VAR21, VAR12 * (VAR8->VAR9.VAR22 / 512), VAR13 * (VAR8->VAR9.VAR22 / 512), VAR23, VAR4);
        VAR4->VAR17--;
        VAR4->VAR18 += 16;
        return;
    }
    FUN11(&VAR6->VAR10, VAR24);
VAR16:
    FUN12(&VAR6->VAR10);
    FUN13(VAR4);
}