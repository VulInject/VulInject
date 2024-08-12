FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
guint8 const *VAR5;
size_t VAR6;
int VAR7;

if (FUN2 (VAR2) > 0) {
while ((VAR6 = FUN3 (VAR2)) > 0) {

if (VAR6 > 314)
VAR6 = 314;
if (NULL == (VAR5 = FUN4 (VAR2, VAR6, NULL))) {
FUN5 ("");
return;
}
if (!FUN6 (VAR4, VAR6, VAR5)) {
FUN5 ("");
return;
}
}
}


if (FUN7 (VAR2) &&
FUN8 (FUN9 (VAR2)) > 0) {
VAR8 *VAR9 = FUN9 (VAR2);
VAR10 *VAR11 = FUN10 (VAR4);
VAR1 *VAR12;
VAR3 *VAR13;
gboolean VAR14;

for (VAR7 = 0 ; VAR7 < FUN8 (VAR9) ; VAR7++) {
VAR12 = FUN11 (VAR9, VAR7);
VAR14 = FUN7 (VAR12) &&
FUN8 (FUN9 (VAR12)) >= 0;
VAR13 = FUN12  (VAR11,
FUN13  (VAR9, VAR7),
VAR14);
FUN1 (VAR12, VAR13);
}
}

FUN14 (VAR4);
FUN15 (FUN16 (VAR4));
FUN15 (FUN16 (VAR2));
}