static void FUN1(const char **VAR1, int VAR2, const char *VAR3)
{
struct VAR4 *VAR4 = NULL;
struct VAR5 *VAR6 = NULL;
int VAR7;

for (VAR7 = 0; VAR7 < VAR2; VAR7++) {
const char *VAR5 = VAR1[VAR7];
if (!strcmp("", VAR5)) {
if (VAR2 <= ++VAR7)
FUN2(FUN3(""));
VAR5 = VAR1[VAR7];
if (VAR8)
FUN4(&VAR9, "", VAR5);
else
FUN4(&VAR9, "", VAR5);
} else if (VAR8) {
if (strchr(VAR5, '') || !*VAR5)
FUN2(FUN3(""));
FUN4(&VAR9, "", VAR5);
} else if (!strchr(VAR5, '')) {
struct VAR5 *VAR10 = NULL;


if (!VAR6)
VAR6 = FUN5();


if (FUN6(VAR5, VAR6, &VAR10) != 1) {
FUN7(&VAR9, VAR5);
} else {

if (!VAR4)
VAR4 = FUN8(VAR3);
if (!VAR4)
FUN9("", VAR3);

FUN10(&VAR9, VAR5, VAR4, VAR10);
}
} else
FUN7(&VAR9, VAR5);
}
FUN11(VAR6);
}