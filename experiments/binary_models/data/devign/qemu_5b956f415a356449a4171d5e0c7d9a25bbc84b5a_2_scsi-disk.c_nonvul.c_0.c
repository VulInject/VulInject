static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(VAR6, VAR8, VAR5->VAR9.VAR10);
    uint64_t VAR11;
    uint32_t VAR12;
    assert(VAR5->VAR9.VAR13 == NULL);
    if (FUN3(VAR5, VAR3, false))
    {
        goto VAR14;
    }
    if (VAR2->VAR15 > 0)
    {
        VAR11 = FUN4(&VAR2->VAR16[0]);
        VAR12 = FUN5(&VAR2->VAR16[8]) & 0xffffffffULL;
        if (!FUN6(VAR7, VAR11, VAR12))
        {
            FUN7(VAR5, FUN8(VAR17));
            goto VAR14;
        }
        VAR5->VAR9.VAR13 = FUN9(VAR7->VAR8.VAR18.VAR19, VAR11 * (VAR7->VAR8.VAR20 / 512), VAR12 * (VAR7->VAR8.VAR20 / 512), VAR21, VAR2);
        VAR2->VAR15--;
        VAR2->VAR16 += 16;
        return;
    }
    FUN10(&VAR5->VAR9, VAR22);
VAR14:
    FUN11(&VAR5->VAR9);
    FUN12(VAR2);
}