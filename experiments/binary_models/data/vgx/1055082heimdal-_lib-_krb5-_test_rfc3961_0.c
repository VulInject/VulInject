static void
FUN1(krb5_context VAR1,
krb5_enctype VAR2,
const char *VAR3,
krb5_salt VAR4,
int VAR5)
{
struct timeval VAR6, VAR7;
krb5_error_code VAR8;
krb5_keyblock VAR9;
krb5_data VAR10;
char *VAR11;
int VAR12;

VAR8 = FUN2(VAR1, VAR2, &VAR11);
if (VAR8)
FUN3(VAR1, 1, VAR8, "");

VAR10.VAR13 = NULL;
VAR10.VAR14 = 0;

FUN4(&VAR6, NULL);

for (VAR12 = 0; VAR12 < VAR5; VAR12++) {
VAR8 = FUN5(VAR1, VAR2, VAR3, VAR4,
VAR10, &VAR9);
if (VAR8)
FUN3(VAR1, 1, VAR8, "");
FUN6(VAR1, &VAR9);
}

FUN4(&VAR7, NULL);

FUN7(&VAR7, &VAR6);

FUN8("",
VAR11, VAR5, (long)VAR7.VAR15, (long)VAR7.VAR16);
free(VAR11);

}

static int VAR17 = 0;
static int VAR18	= 0;

static struct getargs VAR19[] = {
{"",	0,	VAR20,	&VAR17,
"", NULL },
{"",	0,	VAR20,	&VAR18,
NULL, NULL }
};