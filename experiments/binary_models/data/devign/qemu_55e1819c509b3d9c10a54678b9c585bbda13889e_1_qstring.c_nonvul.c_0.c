VAR1 *FUN1(const char *VAR2, int VAR3, int VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(*VAR5));
    FUN3(FUN4(VAR5), VAR6);
    VAR5->VAR7 = VAR4 - VAR3 + 1;
    VAR5->VAR8 = VAR5->VAR7;
    VAR5->VAR9 = FUN2(VAR5->VAR8 + 1);
    memcpy(VAR5->VAR9, VAR2 + VAR3, VAR5->VAR7);
    VAR5->VAR9[VAR5->VAR7] = 0;
    return VAR5;
}