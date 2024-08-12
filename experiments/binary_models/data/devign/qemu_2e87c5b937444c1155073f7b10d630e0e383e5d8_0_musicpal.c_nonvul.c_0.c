static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4 = VAR2->VAR5[VAR3];
    mv88w8618_tx_desc VAR6;
    uint8_t VAR7[2048];
    int VAR8;
    if (!VAR4)
    {
        return;
    }
    do
    {
        FUN2(VAR4, &VAR6);
        if (VAR6.VAR9 & VAR10)
        {
            VAR8 = VAR6.VAR11;
            if (VAR8 < 2048)
            {
                FUN3(VAR6.VAR12, VAR7, VAR8);
                FUN4(VAR2->VAR13, VAR7, VAR8);
            }
            VAR6.VAR9 &= ~VAR10;
            VAR2->VAR14 |= 1 << (VAR15 - VAR3);
            FUN5(VAR4, &VAR6);
        }
        VAR4 = VAR6.VAR16;
    } while (VAR4 != VAR2->VAR5[VAR3]);
}