static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    uint8_t VAR5, VAR6, VAR7, VAR8, VAR9;
    FUN2(&VAR3->VAR10);
    VAR5 = FUN2(&VAR3->VAR10);
    VAR6 = (VAR5 >> 4) & 0x03;
    VAR7 = (VAR5 >> 6) & 0x01;
    VAR8 = (VAR4 - 4) / ((VAR7 + 1) * 2 + VAR6);
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        switch (VAR6)
        {
        case 0:
            break;
        case 1:
            FUN2(&VAR3->VAR10);
            break;
        case 2:
            FUN3(&VAR3->VAR10);
            break;
        case 3:
            FUN4(&VAR3->VAR10);
            break;
        }
        if (VAR7 == 0)
        {
            FUN3(&VAR3->VAR10);
        }
        else
        {
            FUN4(&VAR3->VAR10);
        }
    }
    return 0;
}