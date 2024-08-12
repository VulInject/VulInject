static VAR1
FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR2;
ssize_t VAR8;

VAR2 = FUN2(FUN3(VAR3));
if (FUN4(VAR2))
goto VAR9;
else if (!VAR2->VAR10) {
FUN5(VAR2);
goto VAR9;
} else {
VAR8 = FUN6(VAR6, "",
VAR2->VAR10->VAR11);
FUN5(VAR2);
return VAR8;
}
VAR9:
VAR8 = FUN6(VAR6, "");
return VAR8;
}