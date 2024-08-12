FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4;
enum VAR5 { VAR6 = 4 };
VAR7 *VAR8[VAR6];
bson_error_t VAR9;
int VAR10 = 0;
bool VAR11;

VAR4 = FUN2 (VAR2, NULL);

VAR8[0] = FUN3 ("", FUN4 (1.0), "", "", "", "", "");
VAR8[1] = FUN3 ("", FUN4 (2.0), "", "", "", "");
VAR8[2] = FUN3 (
"", FUN4 (2.0), "", "", "", "", "", "");
VAR8[3] = FUN3 ("", FUN4 (3.0), "", "", "");

for (VAR10 = 0; VAR10 < VAR6; VAR10++) {
FUN5 (VAR4, VAR8[VAR10]);
FUN6 (VAR8[VAR10]);
VAR8[VAR10] = NULL;
}

VAR11 = FUN7 (VAR4, NULL, &VAR9);

if (!VAR11) {
fprintf (VAR12, "", VAR9.VAR13);
}

FUN8 (VAR4);
return VAR11;
}