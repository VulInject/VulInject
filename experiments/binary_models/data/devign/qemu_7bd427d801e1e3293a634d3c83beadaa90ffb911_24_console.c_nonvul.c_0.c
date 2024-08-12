static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    uint8_t VAR5[16];
    VAR4 = FUN2(VAR3->VAR6);
    if (VAR4 > VAR3->VAR7.VAR8)
        VAR4 = VAR3->VAR7.VAR8;
    if (VAR4 > 0)
    {
        if (VAR4 > sizeof(VAR5))
            VAR4 = sizeof(VAR5);
        FUN3(&VAR3->VAR7, VAR5, VAR4);
        FUN4(VAR3->VAR6, VAR5, VAR4);
    }
    if (VAR3->VAR7.VAR8 > 0)
    {
        FUN5(VAR3->VAR9, FUN6(VAR10) + 1);
    }
}