static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++)
    {
        VAR7 *VAR8 = VAR2->VAR9[VAR5]->VAR10;
        if (!memcmp(VAR4->VAR11 + sizeof(VAR12), VAR8->VAR13, sizeof(VAR8->VAR13)))
            return VAR5;
    }
    return VAR2->VAR6 == 1 ? 0 : -1;
}