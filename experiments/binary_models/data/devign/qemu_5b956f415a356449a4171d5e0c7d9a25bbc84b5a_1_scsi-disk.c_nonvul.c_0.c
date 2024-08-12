static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    assert(VAR2->VAR5.VAR6 == NULL);
    if (FUN2(VAR2, VAR3, false))
    {
        goto VAR7;
    }
    VAR4 = VAR2->VAR8.VAR9 / 512;
    VAR2->VAR10 += VAR4;
    VAR2->VAR11 -= VAR4;
    if (VAR2->VAR11 == 0)
    {
        FUN3(VAR2);
        return;
    }
    else
    {
        FUN4(VAR2, VAR12);
        FUN5("", VAR2->VAR5.VAR13, VAR2->VAR8.VAR9);
        FUN6(&VAR2->VAR5, VAR2->VAR8.VAR9);
    }
VAR7:
    FUN7(&VAR2->VAR5);
}