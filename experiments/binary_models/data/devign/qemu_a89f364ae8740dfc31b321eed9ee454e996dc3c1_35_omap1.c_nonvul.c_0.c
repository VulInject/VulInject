static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR1;
    int VAR6 = VAR2 & VAR7;
    if (VAR6 == 0x04)
    {
        if (((VAR5->VAR8[0] >> 5) & 7) < 3)
            return;
        if (VAR5->VAR9 > 3)
        {
            VAR5->VAR9 -= 4;
            if (VAR5->VAR10 && VAR5->VAR10->VAR11)
            {
                VAR5->VAR10->VAR12.VAR13[VAR5->VAR10->VAR12.VAR14++] = (VAR3 >> 24) & 0xff;
                VAR5->VAR10->VAR12.VAR13[VAR5->VAR10->VAR12.VAR14++] = (VAR3 >> 16) & 0xff;
                VAR5->VAR10->VAR12.VAR13[VAR5->VAR10->VAR12.VAR14++] = (VAR3 >> 8) & 0xff;
                VAR5->VAR10->VAR12.VAR13[VAR5->VAR10->VAR12.VAR14++] = (VAR3 >> 0) & 0xff;
            }
            if (VAR5->VAR9 < 4)
                FUN2(VAR5);
        }
        else
            FUN3("", VAR15);
        return;
    }
    FUN4(VAR1, VAR2, VAR3);
}