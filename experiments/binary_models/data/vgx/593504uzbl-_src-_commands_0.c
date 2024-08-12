FUN1 (const VAR1 *VAR2, VAR3 *argv, gboolean VAR4)
{
if (!VAR2) {
return;
}

if (!VAR4) {

FUN2 (argv, FUN3 (FUN4 (VAR2)));
return;
}

VAR3 *VAR5 = FUN5 (VAR2);
if (VAR5) {
guint VAR6;
for (VAR6 = 0; VAR6 < VAR5->VAR7; ++VAR6) {
const VAR1 *VAR8 = FUN6 (VAR5, VAR6);
FUN2 (argv, FUN4 (VAR8));
}
}

FUN7 (VAR5);
}