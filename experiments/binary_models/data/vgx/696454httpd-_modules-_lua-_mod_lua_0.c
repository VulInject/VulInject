static VAR1 FUN1(VAR2 *VAR3, char *VAR4,
size_t VAR5)
{
apr_size_t VAR6 = 0;

if (VAR3->VAR7) {
apr_status_t VAR8 = (VAR3->VAR7) (VAR4, VAR5, VAR3->VAR9);
if (VAR8 == VAR10) {
VAR6 = strlen(VAR4);
if (VAR6 && VAR4[VAR6 - 1] == '')
++VAR3->VAR11;
}
else {
VAR4[0] = '';
VAR6 = 0;
}
}
else {
while (VAR6 < VAR5) {
char VAR12;
apr_status_t VAR8 = (VAR3->getch) (&VAR12, VAR3->VAR9);
if (VAR8 != VAR10)
break;
VAR4[VAR6++] = VAR12;
if (VAR12 == '') {
++VAR3->VAR11;
break;
}
}
}
return VAR6;
}

typedef struct VAR13
{
VAR14 *VAR15;
VAR2 *VAR16;
size_t VAR17;
const char *VAR18;
char VAR4[VAR19];
} VAR13;



static const char *VAR20 =
"";

static const char *FUN2(VAR21 *VAR22, void *VAR23,
VAR24 *VAR25)
{
const char *VAR26;
struct VAR13 *VAR27 = VAR23;

if (VAR27->VAR17) {
*VAR25 = VAR27->VAR17 > VAR28 ? VAR28 : VAR27->VAR17;
VAR27->VAR17 -= *VAR25;
return VAR20;
}
*VAR25 = FUN1(VAR27->VAR16, VAR27->VAR4, VAR19);

for (VAR26 = VAR27->VAR4; FUN3(*VAR26); ++VAR26);
if (VAR26[0] == '' && VAR26[1] == '') {
apr_size_t VAR6 = 0;
while (VAR6 < strlen(VAR27->VAR18)) {
if (FUN4(VAR26[VAR6 + 2]) != VAR27->VAR18[VAR6])
return VAR27->VAR4;
++VAR6;
}
*VAR25 = 0;
return NULL;
}

return VAR27->VAR4;
}