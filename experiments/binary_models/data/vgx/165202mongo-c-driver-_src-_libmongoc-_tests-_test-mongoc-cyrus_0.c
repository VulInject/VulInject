FUN1 (void)
{
VAR1 *VAR2;
mongoc_cyrus_t VAR3;

VAR2 = FUN2 (
"VAR4:
"");

FUN3 (VAR2);
memset (&VAR3, 0, sizeof VAR3);
FUN4 ((VAR5 *) &VAR3, VAR2);

FUN5 (VAR3.VAR6.VAR7);
FUN6 (VAR3.VAR6.VAR8, "");

FUN7 (VAR2);

FUN8 (true);

VAR2 = FUN2 (
"VAR4:
""
"");

FUN9 (
"",
VAR9,
"");

FUN10 (&VAR3);
memset (&VAR3, 0, sizeof VAR3);
FUN4 ((VAR5 *) &VAR3, VAR2);

FUN5 (!VAR3.VAR6.VAR7);
FUN6 (VAR3.VAR6.VAR8, "");

FUN10 (&VAR3);
FUN7 (VAR2);
}