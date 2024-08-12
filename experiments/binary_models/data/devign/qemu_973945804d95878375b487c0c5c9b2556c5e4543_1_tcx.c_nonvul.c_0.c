static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7;
    uint32_t VAR8;
    if (!(VAR2 & 4))
    {
        VAR6->VAR9 = VAR3;
    }
    else
    {
        VAR2 = (VAR2 >> 3) & 0xfffff;
        VAR8 = FUN2(VAR6->VAR9);
        if (VAR6->VAR10 == 24)
        {
            for (VAR7 = 0; VAR7 < 32; VAR7++)
            {
                if (VAR3 & 0x80000000)
                {
                    VAR6->VAR11[VAR2 + VAR7] = VAR6->VAR9;
                    VAR6->VAR12[VAR2 + VAR7] = VAR8;
                    VAR6->VAR13[VAR2 + VAR7] = VAR8;
                }
                VAR3 <<= 1;
            }
        }
        else
        {
            for (VAR7 = 0; VAR7 < 32; VAR7++)
            {
                if (VAR3 & 0x80000000)
                {
                    VAR6->VAR11[VAR2 + VAR7] = VAR6->VAR9;
                }
                VAR3 <<= 1;
            }
        }
        FUN3(VAR6, VAR2, 32);
    }
}