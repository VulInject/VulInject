static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7, VAR8;
    int VAR9;
    if (!(VAR2 & 4))
    {
        VAR6->VAR10 = VAR3;
    }
    else
    {
        VAR2 = (VAR2 >> 3) & 0xfffff;
        VAR7 = VAR3 & 0xffffff;
        VAR8 = ((VAR3 >> 24) & 0x1f) + 1;
        if (VAR7 == 0xffffff)
        {
            memset(&VAR6->VAR11[VAR2], VAR6->VAR10, VAR8);
            if (VAR6->VAR12 == 24)
            {
                VAR3 = VAR6->VAR10 & 0xffffff;
                VAR3 = FUN2(VAR3);
                for (VAR9 = 0; VAR9 < VAR8; VAR9++)
                {
                    VAR6->VAR13[VAR2 + VAR9] = VAR3;
                    VAR6->VAR14[VAR2 + VAR9] = VAR3;
                }
            }
        }
        else
        {
            memcpy(&VAR6->VAR11[VAR2], &VAR6->VAR11[VAR7], VAR8);
            if (VAR6->VAR12 == 24)
            {
                memcpy(&VAR6->VAR13[VAR2], &VAR6->VAR13[VAR7], VAR8 * 4);
                memcpy(&VAR6->VAR14[VAR2], &VAR6->VAR14[VAR7], VAR8 * 4);
            }
        }
        FUN3(VAR6, VAR2, VAR8);
    }
}