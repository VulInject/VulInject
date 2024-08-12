static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint8_t VAR4[4];
    uint8_t VAR5[4];
    uint32_t VAR6 = VAR3->VAR7;
    uint32_t VAR8 = VAR6 + 36;
    if (!VAR3->VAR9)
    {
        return;
    }
    FUN2(VAR4, VAR8, 4);
    FUN2(VAR5, VAR6, 4);
    FUN3(VAR3->VAR9, 4, VAR10);
    FUN4(VAR3->VAR9, VAR4, 4);
    FUN3(VAR3->VAR9, 32, VAR11);
    FUN4(VAR3->VAR9, VAR5, 4);
    FUN5(VAR3->VAR9);
    if (VAR3->VAR12)
    {
        FUN6(VAR3->VAR12);
    }
}