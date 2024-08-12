VAR1 *FUN1(internal_font_number VAR2, int VAR3)
{
int VAR4;
VAR1 *VAR5;
if (FUN2(VAR3)) {
VAR4 = FUN3(VAR6[VAR2]->VAR7, VAR3).VAR8;
if (!VAR4) {
sa_tree_item VAR9 = { 0 };
int VAR10 = ++VAR6[VAR2]->VAR11;
if (VAR10 >= VAR6[VAR2]->VAR12) {
FUN4(VAR2, 256);
}
VAR6[VAR2]->VAR13[VAR10].VAR14 = 1000;
VAR9.VAR8 = VAR10;

FUN5(VAR6[VAR2]->VAR7, VAR3, VAR9, 1);
VAR4 = VAR10;
}
return &(VAR6[VAR2]->VAR13[VAR4]);
} else if (VAR3 == VAR15) {
if (FUN6(VAR2) == NULL) {
VAR5 = xcalloc(1, sizeof(VAR1));
VAR16 += (int) sizeof(VAR1);
FUN7(VAR2, VAR5);
}
return FUN6(VAR2);
} else if (VAR3 == VAR17) {
if (FUN8(VAR2) == NULL) {
VAR5 = xcalloc(1, sizeof(VAR1));
VAR16 += (int) sizeof(VAR1);
FUN9(VAR2, VAR5);
}
return FUN8(VAR2);
}
return &(VAR6[VAR2]->VAR13[0]);
}