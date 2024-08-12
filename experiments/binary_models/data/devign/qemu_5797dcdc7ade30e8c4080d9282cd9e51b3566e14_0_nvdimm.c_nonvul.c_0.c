static void FUN1(VAR1 *VAR2, hwaddr VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2->VAR6);
    if (!VAR2->VAR7)
    {
        uint32_t VAR8 = 0;
        if (VAR5 && VAR5->VAR9)
        {
            VAR8 |= 0x1 | 1 << 4;
        }
        FUN3(VAR8, VAR3);
        return;
    }
    if (!VAR5)
    {
        FUN4(2, VAR3);
        return;
    }
    switch (VAR2->VAR7)
    {
    case 4:
        if (VAR5->VAR9)
        {
            FUN5(VAR5, VAR3);
            return;
        }
        break;
    }
    FUN4(1, VAR3);
}