static void FUN1(struct VAR1 **VAR2,
char *VAR3,
long VAR4, long VAR5)
{
struct VAR1 *VAR6;
struct VAR1 *VAR7 = FUN2(*VAR2, VAR3, &VAR6);

if (VAR7) {
FUN3(&VAR7->VAR8, VAR4, VAR5);
free(VAR3);
return;
}

FUN4(VAR7, 1);
VAR7->VAR3 = VAR3;
FUN5(&VAR7->VAR8, VAR4, VAR5);
if (VAR6) {
VAR7->VAR9 = VAR6->VAR9;
VAR6->VAR9 = VAR7;
} else {
VAR7->VAR9 = *VAR2;
*VAR2 = VAR7;
}
}