static void FUN1(sa_tree VAR1, int VAR2, sa_tree_item VAR3, int VAR4)
{
sa_stack_item VAR5;
VAR5.VAR6 = VAR2;
VAR5.VAR7 = VAR3;
VAR5.VAR8 = VAR4;
if (VAR1->VAR9 == NULL) {
VAR1->VAR9 = FUN2(VAR10, VAR1->VAR11);
} else if (((VAR1->VAR12) + 1) >= VAR1->VAR11) {
VAR1->VAR11 += VAR1->VAR13;
VAR1->VAR9 = FUN3(VAR1->VAR9, VAR10, VAR1->VAR11);
}
(VAR1->VAR12)++;
VAR1->VAR9[VAR1->VAR12] = VAR5;
}