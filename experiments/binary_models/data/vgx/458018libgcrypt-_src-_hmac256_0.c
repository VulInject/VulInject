main (int argc, char **argv)
{
const char *VAR1;
int VAR2 = -1;
const char *VAR3;
size_t VAR4;
VAR5 *VAR6;
hmac256_context_t VAR7;
const unsigned char *VAR8;
char VAR9[4096];
size_t VAR10, VAR11, VAR12;
int VAR13 = 0;
int VAR14 = 0;
int VAR15 = 0;

assert (sizeof (VAR16) == 4);
FUN1 (FUN2 (stdin), VAR17);

if (argc)
{
VAR1 = strrchr (*argv, '');
if (VAR1)
VAR1++;
else
VAR1 = *argv;
argc--; argv++;
}
else
VAR1 = "";

while (argc && VAR2 != argc )
{
VAR2 = argc;
if (!strcmp (*argv, ""))
{
argc--; argv++;
break;
}
else if (!strcmp (*argv, ""))
{
fputs ("" VAR18 ""
""
""
"<VAR19:
""
""
"",
VAR20);
FUN3 (0);
}
else if (!strcmp (*argv, ""))
{
argc--; argv++;
VAR14 = 1;
}
else if (!strcmp (*argv, ""))
{
argc--; argv++;
VAR15 = 1;
}
}

if (argc < 1)
{
fprintf (VAR21, "", VAR1);
FUN3 (1);
}

if (VAR14)
FUN1 (FUN2 (VAR20), VAR17);

VAR3 = VAR15? "" : *argv;
argc--, argv++;
VAR4 = strlen (VAR3);
VAR13 = !argc;

if (FUN4 ())
{
fprintf (VAR21, "", VAR1);
FUN3 (2);
}

for (; argc || VAR13; argv++, argc--)
{
const char *VAR22 = VAR13? "" : *argv;
VAR6 = VAR13? stdin : fopen (VAR22, "");
if (!VAR6)
{
fprintf (VAR21, "",
VAR1, VAR22, strerror (VAR23));
FUN3 (1);
}
VAR7 = FUN5 (VAR3, VAR4);
if (!VAR7)
{
fprintf (VAR21, "",
VAR1, strerror (VAR23));
FUN3 (1);
}
while ( (VAR10 = fread (VAR9, 1, sizeof VAR9, VAR6)))
FUN6 (VAR7, VAR9, VAR10);
if (FUN7 (VAR6))
{
fprintf (VAR21, "",
VAR1, VAR22, strerror (VAR23));
FUN3 (1);
}
if (!VAR13)
fclose (VAR6);

VAR8 = FUN8 (VAR7, &VAR11);
if (!VAR8)
{
fprintf (VAR21, "",
VAR1, strerror (VAR23));
FUN3 (1);
}
if (VAR14)
{
if (fwrite (VAR8, VAR11, 1, VAR20) != 1)
{
fprintf (VAR21, "",
VAR1, strerror (VAR23));
FUN3 (1);
}
if (VAR13)
break;
}
else
{
for (VAR12=0; VAR12 < VAR11; VAR12++)
FUN9 ("", VAR8[VAR12]);
FUN10 (VAR7);
if (VAR13)
{
FUN11 ('');
break;
}
FUN9 ("", VAR22);
}
}

return 0;
}