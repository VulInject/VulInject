FUN1(VAR1 *VAR2, struct VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    unsigned char *VAR11;
    VAR9 = VAR4->VAR9[0] + VAR4->VAR9[1] + VAR4->VAR9[2];
    VAR10 = VAR9 + VAR9 / 255 + 64;
    VAR11 = *VAR6 = FUN2(NULL, VAR10);
    memset(*VAR6, '', VAR10);
    VAR11[0] = 2;
    VAR8 = 1;
    VAR8 += FUN3(&VAR11[VAR8], VAR4->VAR9[0]);
    VAR8 += FUN3(&VAR11[VAR8], VAR4->VAR9[1]);
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        memcpy(&VAR11[VAR8], VAR4->VAR12[VAR7], VAR4->VAR9[VAR7]);
        VAR8 += VAR4->VAR9[VAR7];
        FUN4(&VAR4->VAR12[VAR7]);
    }
    *VAR6 = FUN2(*VAR6, VAR8 + VAR13);
    return VAR8;