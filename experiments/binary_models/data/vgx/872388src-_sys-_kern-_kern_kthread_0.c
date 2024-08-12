FUN1(, VAR1) VAR1 = FUN2(VAR1);


void
FUN3(void (*VAR2)(void *), void *VAR3)
{
struct VAR1 *VAR4;

if (VAR5) {
(*VAR2)(VAR3);
return;
}

VAR4 = malloc(sizeof *VAR4, VAR6, VAR7|VAR8);
if (VAR4 == NULL)
FUN4("");

VAR4->VAR9 = VAR2;
VAR4->VAR10 = VAR3;

FUN5(&VAR1, VAR4, VAR11);
}