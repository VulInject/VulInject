static void
FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
void *VAR4, *VAR5;
int VAR6, VAR7;

VAR4 = FUN2(FUN3(VAR2));
VAR5 = FUN2(FUN3(VAR3));

VAR6 = FUN4(VAR4, VAR3->VAR8, VAR2);
if (VAR6 == -1)
FUN5(1, "");
VAR7 = FUN4(VAR5, VAR2->VAR8, VAR3);
if (VAR7 == -1)
FUN5(1, "");

if (VAR6 != VAR7)
FUN5(1, "");

if (memcmp(VAR4, VAR5, VAR7) != 0)
FUN5(1, "");

free(VAR4);
free(VAR5);
}


static int VAR9;
static int VAR10;
static char *VAR11;
static char *VAR12;
static int VAR13 = 1;
static int VAR14;

static struct getargs VAR15[] = {
{ "",		0,	VAR16,	&VAR11,
"", 	"" },
{ "",		0,	VAR16,	&VAR12,
"", 	"" },
{ "",		0,	VAR17,	&VAR13,
"", NULL },
{ "",	0,	VAR18,	&VAR14,
"", NULL },
{ "",	0,	VAR18,	&VAR9,
"", NULL },
{ "",		0,	VAR18,	&VAR10,
NULL, 	NULL }
};