static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8 = 0;
    unsigned char *VAR9;
    VAR4->VAR2 = VAR2;
    VAR2->VAR10 = VAR11;
    if (VAR4->VAR2->VAR12 != VAR13)
    {
        FUN2(VAR4->VAR2, VAR14, "", VAR13);
        return -1;
    }
    VAR9 = (unsigned char *)VAR4->VAR2->VAR15;
    for (VAR6 = 0; VAR6 < 256; VAR6++)
    {
        for (VAR7 = 0; VAR7 < VAR16; VAR7++)
            VAR4->VAR17[VAR6][VAR7].VAR18 = VAR9[VAR8++];
        FUN3(VAR4, VAR6);
    }
    VAR4->VAR19.VAR20[0] = NULL;
    return 0;
}