FUN1 (VAR1 *VAR2,
VAR3 *VAR4,
VAR3 *VAR5)
{
VAR6 *VAR7;
VAR6 *VAR8;
const char *VAR9;
bson_error_t VAR10;
match_ctx_t VAR11;

memset (&VAR11, 0, sizeof (VAR11));
VAR9 = FUN2 (VAR4);
if (0 == strcmp ("", VAR9) || 0 == strcmp ("", VAR9) ||
0 == strcmp ("", VAR9) ||
0 == strcmp ("", VAR9) || 0 == strcmp ("", VAR9) ||
0 == strcmp ("", VAR9)) {
return;
}

VAR7 = FUN3 (VAR4);
VAR8 = FUN3 (VAR5);


if (0 == strcmp (VAR7->VAR12, "")) {
FUN4 (
FUN5 (&VAR7->VAR13, &VAR8->VAR13, &VAR11));
}


if (0 == strcmp (VAR7->VAR12, "") && VAR7->VAR14) {
FUN4 (
!FUN5 (&VAR7->VAR13, &VAR8->VAR13, &VAR11));
}


if (VAR7->VAR14) {
bson_value_t VAR15;
bson_value_t VAR16;
bool VAR17;

VAR17 = FUN6 (
VAR2, &VAR7->VAR13, &VAR15, &VAR10);
FUN7 (VAR17, VAR10);

VAR17 = FUN6 (
VAR2, &VAR8->VAR13, &VAR16, &VAR10);
FUN7 (VAR17, VAR10);

FUN4 (
FUN5 (&VAR15, &VAR16, &VAR11));
FUN8 (&VAR15);
FUN8 (&VAR16);
}


if (!VAR7->VAR14) {
FUN4 (
FUN5 (&VAR7->VAR13, &VAR8->VAR13, &VAR11));
}

FUN9 (VAR7);
FUN9 (VAR8);
}