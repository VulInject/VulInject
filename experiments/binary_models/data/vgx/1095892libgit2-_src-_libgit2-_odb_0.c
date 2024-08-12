static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
git_str VAR5 = VAR6;
git_str VAR7 = VAR6;
char *VAR8;
const char *VAR9;
int VAR10 = 0;


if (VAR4 > VAR11)
return 0;

if (FUN2(&VAR5, VAR3, VAR12) < 0)
return -1;

if (FUN3(VAR5.VAR13) == false) {
FUN4(&VAR5);
return 0;
}

if (FUN5(&VAR7, VAR5.VAR13) < 0) {
FUN4(&VAR5);
return -1;
}

VAR8 = (char *)VAR7.VAR13;


while ((VAR9 = FUN6(&VAR8, "")) != NULL) {
if (*VAR9 == '' || *VAR9 == '')
continue;


if (*VAR9 == '' && !VAR4) {
if ((VAR10 = FUN2(&VAR5, VAR3, VAR9)) < 0)
break;
VAR9 = FUN7(&VAR5);
}

if ((VAR10 = FUN8(VAR2, VAR9, true, VAR4 + 1)) < 0)
break;
}

FUN4(&VAR5);
FUN4(&VAR7);

return VAR10;
}