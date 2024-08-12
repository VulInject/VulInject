static void FUN1(struct VAR1 *VAR2, const VAR3 *VAR4)
{
    uint16_t VAR5 = FUN2(VAR4->VAR5);
    uint16_t VAR6 = FUN2(VAR4->VAR6);
    if (FUN3(VAR5 >= VAR7 || !VAR2->VAR5[VAR5]))
    {
        fprintf(VAR8, ""
                        "",
                VAR9, VAR5);
        return;
    }
    VAR2->VAR5[VAR5]->FUN4(VAR2->VAR5[VAR5], VAR5, VAR4, VAR6);
}