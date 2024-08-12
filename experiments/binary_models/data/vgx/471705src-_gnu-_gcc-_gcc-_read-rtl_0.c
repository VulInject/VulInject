static htab_t VAR1;


static struct obstack VAR2;




int VAR3 = 1;


const char *VAR4 = "";

static void
FUN1 (VAR5 *VAR6, const char *VAR7, ...)
{
char VAR8[64];
size_t VAR9;
int VAR10;
va_list VAR11;

FUN2 (VAR11, VAR7);

fprintf (VAR12, "", VAR4, VAR3);
FUN3 (VAR12, VAR7, VAR11);
FUN4 ('', VAR12);


for (VAR9 = 0; VAR9 < sizeof (VAR8)-1; ++VAR9)
{
VAR10 = getc (VAR6);
if (VAR10 == VAR13)
break;
if (VAR10 == '' || VAR10 == '')
break;
VAR8[VAR9] = VAR10;
}
VAR8[VAR9] = '';

fprintf (VAR12, "",
VAR4, VAR3, VAR8);

FUN5 (VAR11);
FUN6 (1);
}