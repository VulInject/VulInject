static VAR1 *FUN1(void)
{
    VAR1 *VAR2 = FUN2(sizeof(*VAR2));
    VAR2->VAR3 = strdup("");
    VAR2->VAR4 = FUN2(sizeof(*VAR2->VAR4));
    VAR2->VAR4->VAR5 = strdup("");
    VAR2->VAR4->VAR6 = FUN2(sizeof(*VAR2->VAR4->VAR6));
    VAR2->VAR4->VAR6->VAR7 = FUN3(VAR8, 1);
    VAR2->VAR4->VAR6->VAR7->VAR9 = 42;
    VAR2->VAR4->VAR6->VAR7->VAR10 = strdup("");
    VAR2->VAR4->VAR6->VAR10 = strdup("");
    VAR2->VAR4->VAR11 = FUN2(sizeof(*VAR2->VAR4->VAR11));
    VAR2->VAR4->VAR12 = true;
    VAR2->VAR4->VAR11->VAR7 = FUN3(VAR8, 1);
    VAR2->VAR4->VAR11->VAR7->VAR9 = 43;
    VAR2->VAR4->VAR11->VAR7->VAR10 = strdup("");
    VAR2->VAR4->VAR11->VAR10 = strdup("");
    return VAR2;
}