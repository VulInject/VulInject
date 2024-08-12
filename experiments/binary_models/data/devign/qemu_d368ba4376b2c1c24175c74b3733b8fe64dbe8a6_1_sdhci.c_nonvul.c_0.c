static void FUN1(VAR1 *VAR2, uint32_t VAR3, unsigned VAR4)
{
    unsigned VAR5;
    if (!(VAR2->VAR6 & VAR7))
    {
        FUN2("");
        return;
    }
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR2->VAR8[VAR2->VAR9] = VAR3 & 0xFF;
        VAR2->VAR9++;
        VAR3 >>= 8;
        if (VAR2->VAR9 >= (VAR2->VAR10 & 0x0fff))
        {
            FUN3("", VAR2->VAR9);
            VAR2->VAR9 = 0;
            VAR2->VAR6 &= ~VAR7;
            if (VAR2->VAR6 & VAR11)
            {
                FUN4(VAR2);
            }
        }
    }
}