static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR5 = FUN3(VAR4);
int VAR6;

FUN4(VAR2, "");
FUN5(VAR5);

if (!VAR5->VAR7) {
FUN6(VAR5);
} else {
FUN7(VAR5);
FUN8(VAR5);
}

VAR6 = FUN9(VAR5);
if (VAR6) {
FUN10(&VAR4->VAR2, "");
return VAR6;
}
FUN11(VAR4);

return 0;
}