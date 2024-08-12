FUN1(struct VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    if (VAR2->VAR5 >= VAR2->VAR6)
    {
        VAR2->VAR7 = FUN2(VAR8, VAR2->VAR7, VAR2->VAR6 * 2);
        VAR2->VAR6 *= 2;
    }
    VAR2->VAR7[VAR2->VAR5].VAR3 = FUN3(VAR3);
    VAR2->VAR7[VAR2->VAR5].VAR4 = FUN3(VAR4);
    VAR2->VAR7[VAR2->VAR5].VAR9 = 0;
    VAR2->VAR5++;
    return 0;
}