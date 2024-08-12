static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    uint32_t VAR6 = 0, VAR7;
    hwaddr VAR8;
    if (VAR5 > VAR2->VAR9->VAR10.VAR5)
    {
        VAR5 = VAR2->VAR9->VAR10.VAR5;
    }
    if (VAR5)
    {
        VAR7 = FUN2(VAR2->VAR9->VAR11.VAR12);
        if (FUN3(VAR2))
        {
            VAR6 = FUN2(VAR2->VAR9->VAR11.VAR13);
        }
        VAR8 = ((VAR14)VAR6 << 32) | VAR7;
        FUN4(VAR8, VAR4, VAR5);
        VAR2->VAR9->VAR10.VAR5 = VAR5;
    }
    return VAR5;
}