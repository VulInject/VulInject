static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    int VAR6;
    FUN2(&VAR2->VAR7);
    VAR4 = VAR2->VAR8;
    FUN3(VAR4, 0x0);
    VAR5 = VAR2->VAR5;
    for (VAR6 = 0x00; VAR6 < 0xff; VAR6++)
    {
        if (VAR6 <= 0x03 || (VAR6 >= 0x08 && VAR6 <= 0x3f))
        {
            VAR5[VAR6] = 0x00;
        }
    }
    FUN4(VAR9, VAR2);
    return 0;
}