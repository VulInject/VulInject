static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    int VAR8;
    switch (VAR2)
    {
    case VAR9 ... VAR10:
        VAR7 = &VAR5->VAR11[VAR2 >> 2];
        VAR7->VAR12 = VAR3;
        if (VAR7->VAR12 > 0)
        {
            FUN2(VAR7->VAR13, VAR7->VAR12, 1);
        }
        else
        {
            FUN3(VAR7->VAR13);
        }
        break;
    case VAR14:
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            VAR7 = &VAR5->VAR11[VAR8];
            if (VAR3 & 0xf && VAR7->VAR12 > 0)
            {
                FUN2(VAR7->VAR13, VAR7->VAR12, 0);
                FUN4(VAR7->VAR13, VAR7->VAR15);
                FUN5(VAR7->VAR13, 0);
            }
            else
            {
                FUN3(VAR7->VAR13);
            }
            VAR3 >>= 4;
        }
        break;
    case VAR16:
        if (VAR3 == VAR17)
        {
            FUN6();
        }
        break;
    }
}