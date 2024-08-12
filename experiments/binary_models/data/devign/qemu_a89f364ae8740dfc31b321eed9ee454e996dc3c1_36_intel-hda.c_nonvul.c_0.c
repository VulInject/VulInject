static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR4 = (VAR3 >> 28) & 0x0f;
    if (VAR3 & (1 << 27))
    {
        FUN2(VAR2, 1, "", VAR11);
        return -1;
    }
    VAR5 = (VAR3 >> 20) & 0x7f;
    VAR6 = VAR3 & 0xfffff;
    VAR8 = FUN3(&VAR2->VAR12, VAR4);
    if (VAR8 == NULL)
    {
        FUN2(VAR2, 1, "", VAR11);
        return -1;
    }
    VAR10 = FUN4(VAR8);
    VAR10->FUN5(VAR8, VAR5, VAR6);
    return 0;
}