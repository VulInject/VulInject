FUN1 (const char *VAR1,
VAR2 *VAR3)
{
VAR4       *VAR5;
const char *VAR6;
gboolean    VAR7 = VAR8;
VAR9     *VAR10;

FUN2 ("",
VAR1);

if (VAR1 == NULL) {
return VAR11;
}

VAR10 = NULL;
VAR5 = FUN3 (VAR1, 0, &VAR10);
if (VAR10) {
FUN4 ("", VAR10->VAR12);
FUN5 (VAR10);
return VAR11;
}

while ((VAR6 = FUN6 (VAR5))) {
char *VAR13 = FUN7 (VAR1,
VAR6, NULL);

VAR7 = FUN8 (VAR13, VAR3)
&& VAR7;

FUN9 (VAR13);
}

FUN10 (VAR5);

return VAR7;
}