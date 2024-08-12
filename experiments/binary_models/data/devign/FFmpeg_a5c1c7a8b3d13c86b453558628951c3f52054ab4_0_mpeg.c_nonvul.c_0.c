static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    char VAR6[7] = {0};
    int64_t VAR7 = FUN2(VAR2->VAR8);
    VAR4->VAR9 = 0xff;
    VAR2->VAR10 |= VAR11;
    FUN3(VAR2->VAR8, 6, VAR6, sizeof(VAR6));
    if (!memcmp("", VAR6, 4))
    {
        VAR4->VAR12 = 1;
    }
    else if (!memcmp("", VAR6, 6))
    {
        VAR4->VAR13 = 1;
    }
    else
        FUN4(VAR2->VAR8, VAR7, VAR14);
    return 0;
}