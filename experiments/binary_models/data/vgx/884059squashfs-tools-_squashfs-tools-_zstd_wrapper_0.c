static void FUN1(void *VAR1, int VAR2)
{
struct VAR3 *VAR4 = VAR1;


if (VAR2 < sizeof(*VAR4))
goto VAR5;

FUN2(VAR4);

if (VAR4->VAR6 < 1 ||
VAR4->VAR6 > FUN3()) {
fprintf(VAR7, ""
"");
goto VAR5;
}

FUN4("", VAR4->VAR6);

return;

VAR5:
fprintf(VAR7, ""
"");
}