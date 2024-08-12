static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5 = 0;

FUN2(VAR4, "", &VAR2->VAR6);
if (VAR2->VAR6) {
VAR2->VAR7 = FUN3(VAR4, VAR2->VAR6, VAR8);
if (!VAR2->VAR7) {
FUN4(VAR4, "");
VAR5 = -VAR9;
} else {
VAR5 = FUN5(VAR4, "", VAR2->VAR7, VAR2->VAR6);
if (VAR5 < 0)
FUN4(VAR4, "");
}
}

FUN6(VAR4, "", VAR2->VAR6);
return VAR5;
}