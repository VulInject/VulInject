static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    bool VAR6 = VAR4->VAR7 >= 4;
    VAR8 *VAR9 = VAR2->VAR9 + VAR4->VAR7;
    if (VAR9->VAR10 & 0x01)
    {
        FUN2(VAR2, 1, "", VAR4->VAR7);
        VAR9->VAR10 = VAR11 << 24;
    }
    if ((VAR9->VAR10 & 0x02) != (VAR5 & 0x02))
    {
        uint32_t VAR12 = (VAR9->VAR10 >> 20) & 0x0f;
        if (VAR9->VAR10 & 0x02)
        {
            FUN2(VAR2, 1, "", VAR4->VAR7, VAR12, VAR9->VAR13);
            FUN3(VAR2, VAR9);
            FUN4(VAR2, VAR12, true, VAR6);
        }
        else
        {
            FUN2(VAR2, 1, "", VAR4->VAR7, VAR12);
            FUN4(VAR2, VAR12, false, VAR6);
        }
    }
    FUN5(VAR2);
}