static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int main, const char *VAR5)
{
    int VAR6, VAR7;
    struct VAR8 *VAR9 = VAR4->VAR4[main];
    for (VAR6 = 0; VAR6 < VAR9->VAR10; VAR6++)
    {
        for (VAR7 = main + 1; VAR7 < VAR4->VAR11; VAR7++)
        {
            if (VAR4->VAR4[VAR7]->VAR12 == VAR9->VAR12 && VAR9->VAR13[VAR6].VAR14 != VAR4->VAR4[VAR7]->VAR13[VAR6].VAR14)
                fprintf(VAR15, "", VAR5, VAR6, VAR9->VAR16, VAR4->VAR4[VAR7]->VAR16);
        }
        fprintf(VAR2, ""%VAR17\""%VAR17\"", VAR6, VAR9->VAR13[VAR6].VAR14);
    }
}