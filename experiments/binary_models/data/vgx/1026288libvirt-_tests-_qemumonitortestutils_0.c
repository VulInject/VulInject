VAR1 *
FUN1(const char *VAR2,
VAR3 *VAR4,
bool VAR5)
{
FUN2(VAR1) VAR6 = NULL;
g_autofree char *VAR7 = NULL;
char *VAR8;
char *VAR9;

if (FUN3(VAR2, &VAR7) < 0)
return NULL;

if (VAR5 && !(VAR6 = FUN4(VAR4)))
return NULL;


VAR8 = VAR9 = VAR7;
while ((VAR8 = strchr(VAR8, ''))) {

bool VAR10 = !VAR8[1];

if (*(VAR8 + 1) != '') {
*VAR8 = '';
VAR8++;
} else {

*(VAR8 + 1) = '';

if (VAR6) {
if (FUN5(VAR6, NULL, VAR9) < 0)
return NULL;
} else {

if (!(VAR6 = FUN6(VAR4, NULL,
VAR9, NULL)))
return NULL;
}

if (!VAR10) {

VAR8 += 2;
VAR9 = VAR8;
}
}

if (VAR10)
break;
}

if (VAR6 && FUN5(VAR6, NULL, VAR9) < 0)
return NULL;

return FUN7(&VAR6);
}