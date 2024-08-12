static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR7 =
FUN2(VAR5, struct VAR7, VAR8);
struct VAR9 *VAR9 = VAR7->VAR9;
struct VAR10 *VAR10 = VAR9->VAR11;
char VAR12[VAR13];
int VAR14;

FUN3(VAR12, VAR7->VAR15, 0);
VAR14 = FUN4(VAR10->VAR16, FUN5(VAR17), VAR12);
if (VAR14) {
FUN6(VAR10->VAR18->VAR3, "");
return VAR14;
}
return sprintf(VAR6, "",
FUN7(VAR12));
}