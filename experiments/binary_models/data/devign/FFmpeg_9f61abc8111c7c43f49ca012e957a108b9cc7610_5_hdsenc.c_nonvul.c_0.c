static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    int VAR6, VAR7;
    VAR6 = VAR2->FUN2(VAR2, &VAR4->VAR8, VAR4->VAR9, VAR10, NULL);
    if (VAR6 < 0)
        return VAR6;
    FUN3(VAR4->VAR8, 0);
    FUN4(VAR4->VAR8, FUN5('', '', '', ''));
    for (VAR7 = 0; VAR7 < VAR4->VAR11; VAR7++)
    {
        FUN6(VAR4->VAR12[VAR7] + 4, VAR5);
        VAR4->VAR12[VAR7][7] = (VAR5 >> 24) & 0x7f;
        FUN7(VAR4->VAR8, VAR4->VAR12[VAR7], VAR4->VAR13[VAR7]);
    }
    return 0;
}