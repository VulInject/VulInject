FUN1 (struct VAR1 *VAR2)
{
char **argv, **VAR3, *VAR4, *VAR5, *VAR6, *VAR7;
char *VAR8, *VAR9, *VAR10;
char *VAR11, *VAR12, *VAR13, *VAR14;
int VAR15, argc, VAR16;
long VAR17, VAR18, VAR19;
struct VAR20 *VAR21;

if (!FUN2 (VAR2->VAR22[VAR23]))
return;

FUN3 (VAR2);

argv = FUN4 (
FUN5 (VAR2->VAR22[VAR24]),
"",
NULL,
0,
0,
&argc);
VAR3 = FUN4 (
FUN5 (VAR2->VAR22[VAR24]),
"",
NULL,
VAR25,
0,
NULL);

switch (FUN6 (VAR2->VAR22[VAR26]))
{
case VAR27:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = 1;
VAR2->VAR28[0] = FUN7 (
FUN5 (VAR2->VAR22[VAR24]),
&VAR30,
VAR2, NULL);
}
}
break;
case VAR31:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = 1;
VAR2->VAR28[0] = FUN8 (
FUN5 (VAR2->VAR22[VAR24]),
&VAR32,
VAR2, NULL);
}
}
break;
case VAR33:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (argc * sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = argc;
for (VAR15 = 0; VAR15 < argc; VAR15++)
{
VAR2->VAR28[VAR15] = FUN9 (
argv[VAR15],
&VAR34,
VAR2, NULL);
}
}
}
break;
case VAR35:
VAR4 = NULL;
VAR5 = NULL;
VAR6 = NULL;
if (argv && (argc >= 1))
{
VAR4 = argv[0];
if ((argc >= 2) && (strcmp (argv[1], "") != 0))
VAR5 = argv[1];
if ((argc >= 3) && (strcmp (argv[2], "") != 0))
VAR6 = argv[2];
}
VAR2->VAR28 = malloc (sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = 1;
VAR2->VAR28[0] = FUN10 (
VAR4,
VAR5,
VAR6,
&VAR36,
VAR2, NULL);
}
break;
case VAR37:
VAR6 = NULL;
VAR7 = NULL;
VAR16 = 0;
if (argv && (argc >= 1))
{
if (strcmp (argv[0], "") != 0)
VAR2->VAR38 = strdup (argv[0]);
if ((argc >= 2) && (strcmp (argv[1], "") != 0))
VAR6 = argv[1];
if ((argc >= 3) && (strcmp (argv[2], "") != 0))
VAR7 = argv[2];
if (argc >= 4)
VAR16 = (strcmp (argv[3], "") != 0) ? 1 : 0;
}
VAR2->VAR28 = malloc (sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = 1;
VAR2->VAR28[0] = FUN11 (
NULL,
VAR6,
VAR7,
VAR16,
&VAR39,
VAR2, NULL);
}
break;
case VAR40:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR21 = FUN12 (32,
VAR41,
VAR41,
NULL, NULL);
if (VAR21)
{
FUN13 (VAR21, "",
VAR2->VAR42);
}
VAR2->VAR29 = 1;
VAR11 = (argc > 1) ? FUN14 (
argv[1], NULL, VAR21, NULL) : NULL;
VAR12 = (argc > 2) ? FUN14 (
argv[2], NULL, VAR21, NULL) : NULL;
VAR13 = (argc > 3) ? FUN14 (
argv[3], NULL, VAR21, NULL) : NULL;
VAR14 = (argc > 4) ? FUN14 (
argv[4], NULL, VAR21, NULL) : NULL;
VAR2->VAR28[0] = FUN15 (
argv[0],  
(VAR11) ? VAR11 : "",
(VAR12) ? VAR12 : "",
(VAR13) ? VAR13 : "",
(VAR14) ? VAR14 : "",
&VAR43,
VAR2, NULL);
if (VAR11)
free (VAR11);
if (VAR12)
free (VAR12);
if (VAR13)
free (VAR13);
if (VAR14)
free (VAR14);
if (VAR21)
FUN16 (VAR21);
}
}
break;
case VAR44:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (argc * sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = argc;
for (VAR15 = 0; VAR15 < argc; VAR15++)
{
VAR2->VAR28[VAR15] = FUN17 (
argv[VAR15],
&VAR45,
VAR2, NULL);
}
}
}
break;
case VAR46:
if (argv && (argc >= 1))
{
VAR8 = NULL;
VAR9 = NULL;
VAR10 = NULL;
VAR17 = FUN18 (argv[0], &VAR8, 10);
VAR18 = FUN18 ((argc >= 2) ? argv[1] : "", &VAR9, 10);
VAR19 = FUN18 ((argc >= 3) ? argv[2] : "", &VAR10, 10);
if (VAR8 && !VAR8[0]
&& VAR9 && !VAR9[0]
&& VAR10 && !VAR10[0]
&& (VAR17 > 0)
&& (VAR18 >= 0)
&& (VAR19 >= 0))
{
VAR2->VAR28 = malloc (sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = 1;
VAR2->VAR28[0] = FUN19 (
VAR17,
(int)VAR18,
(int)VAR19,
&VAR47,
VAR2, NULL);
}
}
}
break;
case VAR48:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (argc * sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = argc;
for (VAR15 = 0; VAR15 < argc; VAR15++)
{
VAR2->VAR28[VAR15] = FUN20 (
argv[VAR15],
&VAR49,
VAR2, NULL);
}
}
}
break;
case VAR50:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (argc * sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = argc;
for (VAR15 = 0; VAR15 < argc; VAR15++)
{
VAR2->VAR28[VAR15] = FUN21 (
argv[VAR15],
&VAR51,
VAR2, NULL);
}
}
}
break;
case VAR52:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (argc * sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = argc;
for (VAR15 = 0; VAR15 < argc; VAR15++)
{
VAR2->VAR28[VAR15] = FUN22 (
argv[VAR15],
NULL,
NULL,
&VAR53,
VAR2, NULL);
}
}
}
break;
case VAR54:
if (argv && (argc >= 1))
{
VAR2->VAR28 = malloc (argc * sizeof (VAR2->VAR28[0]));
if (VAR2->VAR28)
{
VAR2->VAR29 = argc;
for (VAR15 = 0; VAR15 < argc; VAR15++)
{
VAR2->VAR28[VAR15] = FUN23 (
argv[VAR15],
NULL,
NULL,
NULL,
&VAR55,
VAR2, NULL);
}
}
}
break;
}

if (!VAR2->VAR28)
{
FUN24 (NULL,
FUN25(""%VAR56\""
""),
FUN26 (""), VAR57,
VAR2->VAR42);
}

if (argv)
FUN27 (argv);
if (VAR3)
FUN27 (VAR3);
}