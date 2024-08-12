static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6)
{
    int VAR7 = 0, VAR8;
    for (VAR8 = 0; VAR8 < VAR5 - 3; VAR8++)
    {
        if (VAR4->VAR9[VAR8] == 0x00 && VAR4->VAR9[VAR8 + 1] == 0x00 && VAR4->VAR9[VAR8 + 2] == 0x01 && VAR4->VAR9[VAR8 + 3] == 0xB6)
        {
            VAR7 = VAR8;
            break;
        }
    }
    if (VAR7 > 0)
    {
        if (!VAR2->VAR10)
        {
            VAR2->VAR10 = FUN2(VAR7);
            memcpy(VAR2->VAR10, VAR4->VAR9, VAR7);
            VAR2->VAR11 = VAR7;
        }
        memmove(VAR4->VAR9, &VAR4->VAR9[VAR7], VAR6 - VAR7);
        VAR4->VAR12 = VAR6 - VAR7;
    }
    return 0;