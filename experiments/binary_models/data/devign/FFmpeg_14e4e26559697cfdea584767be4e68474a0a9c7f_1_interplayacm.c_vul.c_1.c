static int FUN1(VAR1 *VAR2, unsigned VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    unsigned VAR7, VAR8;
    int VAR9, VAR10;
    for (VAR7 = 0; VAR7 < VAR2->VAR11; VAR7++)
    {
        VAR8 = FUN2(VAR6, 7);
        VAR9 = (VAR12[VAR8] & 0x0F) - 5;
        VAR10 = ((VAR12[VAR8] >> 4) & 0x0F) - 5;
        FUN3(VAR2, VAR7++, VAR4, VAR9);
        if (VAR7 >= VAR2->VAR11)
            break;
        FUN3(VAR2, VAR7, VAR4, VAR10);
        return 0;