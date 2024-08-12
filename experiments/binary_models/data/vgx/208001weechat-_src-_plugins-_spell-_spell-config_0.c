FUN1 (const void *VAR1, void *VAR2,
struct VAR3 *VAR4)
{
const char *VAR5;
int VAR6;


(void) VAR1;
(void) VAR2;

if (VAR7)
{
FUN2 (VAR7);
VAR7 = NULL;
VAR8 = 0;
}

if (VAR9)
{
free (VAR9);
VAR9 = NULL;
}

VAR5 = FUN3 (VAR4);
if (VAR5 && VAR5[0])
{
VAR7 = FUN4 (
VAR5,
"",
NULL,
VAR10
| VAR11
| VAR12,
0,
&VAR8);
if (VAR8 > 0)
{
VAR9 = malloc (VAR8 *
sizeof (int));
for (VAR6 = 0; VAR6 < VAR8; VAR6++)
{
VAR9[VAR6] = strlen (VAR7[VAR6]);
}
}
}
}