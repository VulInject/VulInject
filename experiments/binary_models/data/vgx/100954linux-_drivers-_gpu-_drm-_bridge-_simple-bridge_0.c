static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR5;
int VAR6;

if (VAR4->VAR7->VAR8 & VAR9) {
VAR5 = FUN3(VAR4->VAR7, VAR2);
if (!VAR5)
FUN4("");
} else {
VAR5 = NULL;
}

if (!VAR5) {

VAR6 = FUN5(VAR2, 1920, 1200);
FUN6(VAR2, 1024, 768);
return VAR6;
}

FUN7(VAR2, VAR5);
VAR6 = FUN8(VAR2, VAR5);
FUN9(VAR5);

return VAR6;
}