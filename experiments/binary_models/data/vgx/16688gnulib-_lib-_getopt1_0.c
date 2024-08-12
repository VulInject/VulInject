main (int argc, char **argv)
{
int VAR1;
int VAR2 = 0;

while (1)
{
int VAR3 = VAR4 ? VAR4 : 1;
int VAR5 = 0;
static const struct option VAR6[] =
{
{"", 1, 0, 0},
{"", 0, 0, 0},
{"", 1, 0, 0},
{"", 0, 0, 0},
{"", 0, 0, 0},
{"", 1, 0, 0},
{0, 0, 0, 0}
};

VAR1 = getopt_long (argc, argv, "",
VAR6, &VAR5);
if (VAR1 == -1)
break;

switch (VAR1)
{
case 0:
FUN1 ("", VAR6[VAR5].VAR7);
if (VAR8)
FUN1 ("", VAR8);
FUN1 ("");
break;

case '':
case '':
case '':
case '':
case '':
case '':
case '':
case '':
case '':
case '':
if (VAR2 != 0 && VAR2 != VAR3)
FUN1 ("");
VAR2 = VAR3;
FUN1 ("", VAR1);
break;

case '':
FUN1 ("");
break;

case '':
FUN1 ("");
break;

case '':
FUN1 ("", VAR8);
break;

case '':
FUN1 ("", VAR8);
break;

case '':
break;

default:
FUN1 ("", VAR1);
}
}

if (VAR4 < argc)
{
FUN1 ("");
while (VAR4 < argc)
FUN1 ("", argv[VAR4++]);
FUN1 ("");
}

FUN2 (0);
}