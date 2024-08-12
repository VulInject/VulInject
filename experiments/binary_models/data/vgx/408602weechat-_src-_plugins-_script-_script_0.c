FUN1 ()
{
int VAR1;
char VAR2[128], *VAR3, *VAR4;
const char *VAR5;
struct VAR6 *VAR7;
void *VAR8;

if (!VAR9)
{
VAR9 = FUN2 (32,
VAR10,
VAR10,
NULL, NULL);
}
else
FUN3 (VAR9);

for (VAR1 = 0; VAR1 < VAR11; VAR1++)
{
snprintf (VAR2, sizeof (VAR2),
"", VAR12[VAR1]);
VAR7 = FUN4 (VAR2);
VAR8 = FUN5 (VAR7, "");
while (VAR8)
{
VAR5 = FUN6 (VAR7, VAR8, "");
if (VAR5)
{
VAR3 = strdup (VAR5);
if (VAR3)
{
VAR4 = FUN7 (VAR3);
FUN8 (VAR9,
VAR4,
FUN6 (VAR7, VAR8,
""));
free (VAR3);
}
}
VAR8 = FUN9 (VAR7, VAR8, 1);
}
}
}