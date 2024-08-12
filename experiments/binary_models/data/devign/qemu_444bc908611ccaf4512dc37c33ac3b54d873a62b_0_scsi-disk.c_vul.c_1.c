static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR6->VAR10.VAR11);
    uint64_t VAR12;
    uint32_t VAR13;
    VAR6->VAR10.VAR14 = NULL;
    if (VAR2 < 0)
    {
        if (FUN3(VAR6, -VAR2))
        {
            goto VAR15;
        }
    }
    if (VAR4->VAR16 > 0 && !VAR6->VAR10.VAR17)
    {
        VAR12 = FUN4(&VAR4->VAR18[0]);
        VAR13 = FUN5(&VAR4->VAR18[8]) & 0xffffffffULL;
        if (VAR12 > VAR12 + VAR13 || VAR12 + VAR13 - 1 > VAR8->VAR9.VAR19)
        {
            FUN6(VAR6, FUN7(VAR20));
            goto VAR15;
        }
        VAR6->VAR10.VAR14 = FUN8(VAR8->VAR9.VAR21.VAR22, VAR12 * (VAR8->VAR9.VAR23 / 512), VAR13 * (VAR8->VAR9.VAR23 / 512), VAR24, VAR4);
        VAR4->VAR16--;
        VAR4->VAR18 += 16;
        return;
    }
VAR15:
    if (VAR4->VAR16 == 0)
    {
        FUN9(&VAR6->VAR10, VAR25);
    }
    if (!VAR6->VAR10.VAR17)
    {
        FUN10(&VAR6->VAR10);
    }
    FUN11(VAR4);
}