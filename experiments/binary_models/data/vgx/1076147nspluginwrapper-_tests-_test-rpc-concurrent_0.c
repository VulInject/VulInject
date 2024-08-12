FUN1 (int argc, char *argv[])
{
VAR1 *VAR2;

for (int VAR3 = 1; VAR3 < argc; VAR3++)
{
const VAR4 *VAR5 = argv[VAR3];
if (strcmp (VAR5, "") == 0 || strcmp (VAR5, "") == 0)
VAR6 = VAR7;
else if (strcmp (VAR5, "") == 0 || strcmp (VAR5, "") == 0)
VAR6 = VAR8;
else if (strcmp (VAR5, "") == 0)
{
if (++VAR3 < argc)
{
unsigned long VAR9 = FUN2 (argv[VAR3], NULL, 10);
if (VAR9 > 0)
VAR10 = VAR9;
}
}
else if (strcmp (VAR5, "") == 0)
{
FUN3 ("", argv[0]);
FUN4 (0);
}
}

VAR2 = FUN5 ();
FUN6 (VAR2 != NULL);

static const rpc_method_descriptor_t VAR11[] = {
{ VAR12, VAR13 },
{ VAR14, VAR15 }
};

if (FUN7 (VAR2, &VAR11[0],
FUN8 (VAR11)) < 0)
FUN9 ("");

if (VAR16)
{



FUN10 (0, VAR17, NULL);
}
else
{
while (--VAR10 >= 0)
FUN11 (VAR10);
}
return 0;
}