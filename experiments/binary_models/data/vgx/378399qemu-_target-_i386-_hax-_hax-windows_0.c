VAR1 FUN1(struct VAR2 *VAR3, int VAR4)
{
char *VAR5 = NULL;
hax_fd VAR6;

VAR5 = FUN2(VAR4);
if (!VAR5) {
fprintf(VAR7, "");
return VAR8;
}

VAR6 = FUN3(VAR5,
VAR9 | VAR10,
0, NULL, VAR11, VAR12, NULL);
if (VAR6 == VAR8) {
fprintf(VAR7, "",
VAR5, FUN4());
}

FUN5(VAR5);
return VAR6;
}