static void FUN1(struct VAR1 *VAR1, u32 VAR2,
VAR3 *VAR4,
bool *VAR5)
{
struct VAR6 *VAR7;

*VAR4 = 0;
*VAR5 = false;

FUN2(VAR7, &VAR1->VAR8, VAR9) {
int VAR10;


if (VAR7->VAR11)
continue;

VAR10 = FUN3(VAR7);

if (!VAR10)
continue;

if (!*VAR4) {
*VAR4 = VAR10;
continue;
}

if (VAR10 == *VAR4)
continue;

*VAR5 = true;
*VAR4 = FUN4(*VAR4, VAR10);
}

if (VAR2 && *VAR4 != VAR2) {
if (*VAR4)
*VAR5 = true;
*VAR4 = FUN4(*VAR4, VAR2);
}
}