static int FUN1(const char *VAR1, unsigned VAR2) {
static bool VAR3 = false;



int VAR4 = VAR3 || VAR5 || FUN2() > 0 ?
VAR6 : VAR7;

FUN3(NULL,
VAR4,
VAR1, VAR2, 0,
"",
VAR8 ? "" : "");

if (!VAR3)
FUN4(VAR4,
"");

VAR3 = true;
return 0;
}