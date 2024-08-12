static void FUN1(struct VAR1 *VAR2)
{
const char *VAR3 = "";

switch (VAR2->VAR4) {
case VAR5:
VAR3 = ""; break;
case VAR6:
VAR3 = ""; break;
}

snprintf(VAR2->VAR7, sizeof(VAR2->VAR7), "", "", VAR3);
}