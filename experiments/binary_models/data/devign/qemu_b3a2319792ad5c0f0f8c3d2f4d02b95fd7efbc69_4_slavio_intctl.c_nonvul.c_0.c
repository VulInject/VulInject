static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint32_t VAR4 = VAR3->VAR5;
    unsigned int VAR6, VAR7, VAR8 = 0;
    VAR4 &= ~VAR3->VAR9;
    FUN2("", VAR4, VAR3->VAR9);
    for (VAR6 = 0; VAR6 < VAR10; VAR6++)
    {
        VAR8 = 0;
        if (VAR4 && !(VAR3->VAR9 & 0x80000000) && (VAR6 == VAR3->VAR11))
        {
            for (VAR7 = 0; VAR7 < 32; VAR7++)
            {
                if (VAR4 & (1 << VAR7))
                {
                    if (VAR8 < VAR3->VAR12[VAR7])
                        VAR8 = VAR3->VAR12[VAR7];
                }
            }
        }
        for (VAR7 = 17; VAR7 < 32; VAR7++)
        {
            if (VAR3->VAR13[VAR6] & (1 << VAR7))
            {
                if (VAR8 < VAR7 - 16)
                    VAR8 = VAR7 - 16;
            }
        }
        FUN3(VAR3, VAR8, VAR6);
    }
}