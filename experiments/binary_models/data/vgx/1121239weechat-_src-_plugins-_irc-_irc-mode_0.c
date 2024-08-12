FUN1 (const char *VAR1)
{
char **argv, **VAR2, *VAR3;
int argc, VAR4;

if (!VAR1 || !VAR1[0])
return strdup ("");

argv = FUN2 (VAR1, "", NULL,
VAR5
| VAR6
| VAR7,
0, &argc);
if (!argv)
return strdup ("");

VAR2 = malloc (sizeof (*argv) * (argc + 1));
if (!VAR2)
{
FUN3 (argv);
return strdup ("");;
}

for (VAR4 = 0; VAR4 < argc; VAR4++)
{
VAR2[VAR4] = (argv[VAR4][0] == '') ? argv[VAR4] + 1 : argv[VAR4];
}
VAR2[argc] = NULL;

VAR3 = FUN4 (
(const char **)VAR2, "", 0, -1);

FUN3 (argv);
free (VAR2);

return VAR3;
}