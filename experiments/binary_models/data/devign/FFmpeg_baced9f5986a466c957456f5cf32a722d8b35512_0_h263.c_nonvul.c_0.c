static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    if (VAR2->VAR5->VAR6 != VAR7)
    {
        VAR3 = VAR2->VAR5->VAR6 << 4;
    }
    else if (VAR2->VAR8 || VAR2->VAR9)
    {
        VAR3 = 0xF0;
    }
    else
    {
        VAR3 = 0x00;
    }
    if (VAR2->VAR5->VAR10 != VAR11)
    {
        VAR3 |= VAR2->VAR5->VAR10;
    }
    else
    {
        VAR3 |= 1;
    }
    if (VAR3 >> 4 == 0xF)
    {
        VAR4 = 5;
    }
    else
    {
        VAR4 = 1;
    }
    FUN2(&VAR2->VAR12, 16, 0);
    FUN2(&VAR2->VAR12, 16, VAR13);
    FUN2(&VAR2->VAR12, 8, VAR3);
    FUN2(&VAR2->VAR12, 16, 0);
    FUN2(&VAR2->VAR12, 16, VAR14);
    FUN2(&VAR2->VAR12, 1, 1);
    FUN2(&VAR2->VAR12, 4, VAR4);
    FUN2(&VAR2->VAR12, 3, 1);
    FUN2(&VAR2->VAR12, 4, 1);
    FUN2(&VAR2->VAR12, 1, 0);
    FUN3(&VAR2->VAR12);
}