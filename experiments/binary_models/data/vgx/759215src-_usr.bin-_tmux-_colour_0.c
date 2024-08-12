void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5		*VAR6;
struct VAR7	*VAR8;
u_int				 VAR9, VAR10;
int				 VAR11;

if (VAR2 == NULL)
return;

VAR6 = FUN2(VAR4, "");
if ((VAR8 = FUN3(VAR6)) == NULL) {
if (VAR2->VAR12 != NULL) {
free(VAR2->VAR12);
VAR2->VAR12 = NULL;
}
return;
}
if (VAR2->VAR12 == NULL)
VAR2->VAR12 = xcalloc(256, sizeof *VAR2->VAR12);
for (VAR9 = 0; VAR9 < 256; VAR9++)
VAR2->VAR12[VAR9] = -1;
while (VAR8 != NULL) {
VAR10 = FUN4(VAR8);
if (VAR10 < 256) {
VAR11 = FUN5(VAR8)->VAR13;
VAR2->VAR12[VAR10] = VAR11;
}
VAR8 = FUN6(VAR8);
}
}