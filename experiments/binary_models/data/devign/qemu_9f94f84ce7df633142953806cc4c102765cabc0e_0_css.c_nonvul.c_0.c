static VAR1 FUN1(hwaddr VAR2, bool VAR3)
{
    CCW0 VAR4;
    CCW1 VAR5;
    CCW1 VAR6;
    if (VAR3)
    {
        FUN2(VAR2, &VAR5, sizeof(VAR5));
        VAR6.VAR7 = VAR5.VAR7;
        VAR6.VAR8 = VAR5.VAR8;
        VAR6.VAR9 = FUN3(VAR5.VAR9);
        VAR6.VAR10 = FUN4(VAR5.VAR10);
    }
    else
    {
        FUN2(VAR2, &VAR4, sizeof(VAR4));
        if ((VAR4.VAR7 & 0x0f) == VAR11)
        {
            VAR6.VAR7 = VAR11;
            VAR6.VAR8 = 0;
            VAR6.VAR9 = 0;
        }
        else
        {
            VAR6.VAR7 = VAR4.VAR7;
            VAR6.VAR8 = VAR4.VAR8;
            VAR6.VAR9 = FUN3(VAR4.VAR9);
        }
        VAR6.VAR10 = FUN3(VAR4.VAR12) | (VAR4.VAR13 << 16);
    }
    return VAR6;
}