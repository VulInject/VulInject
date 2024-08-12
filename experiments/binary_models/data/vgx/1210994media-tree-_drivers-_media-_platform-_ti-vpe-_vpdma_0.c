int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
void (*VAR5)(struct VAR1 *VAR2))
{
struct VAR6 *VAR7;
int VAR8;

FUN2(&VAR2->VAR9, "");

VAR4->VAR2 = VAR2;
VAR4->VAR5 = VAR5;
FUN3(&VAR4->VAR10);

VAR7 = FUN4(VAR2, VAR11, "");
if (VAR7 == NULL) {
FUN5(&VAR2->VAR9, "");
return -VAR12;
}

VAR4->VAR13 = FUN6(&VAR2->VAR9, VAR7->VAR14, FUN7(VAR7));
if (!VAR4->VAR13) {
FUN5(&VAR2->VAR9, "");
return -VAR15;
}

VAR8 = FUN8(VAR4);
if (VAR8) {
FUN9("", VAR16);
return VAR8;
}

return 0;
}