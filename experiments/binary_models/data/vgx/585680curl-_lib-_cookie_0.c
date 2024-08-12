static bool FUN1(const char *VAR1, const char *VAR2)
{
size_t VAR3;
size_t VAR4;
char *VAR5 = NULL;
char *VAR6;
bool VAR7 = VAR8;


VAR3 = strlen(VAR1);
if(1 == VAR3) {

return VAR9;
}

VAR5 = strdup(VAR2);
if(!VAR5)
return VAR8;
VAR6 = strchr(VAR5, '');
if(VAR6)
*VAR6 = 0x0;


if(0 == strlen(VAR5) || VAR5[0] != '') {
FUN2(&VAR5, "", 1);
if(!VAR5)
return VAR8;
}



VAR4 = strlen(VAR5);

if(VAR4 < VAR3) {
VAR7 = VAR8;
goto VAR10;
}


if(FUN3(VAR1, VAR5, VAR3)) {
VAR7 = VAR8;
goto VAR10;
}


if(VAR3 == VAR4) {
VAR7 = VAR9;
goto VAR10;
}


if(VAR5[VAR3] == '') {
VAR7 = VAR9;
goto VAR10;
}

VAR7 = VAR8;

VAR10:
free(VAR5);
return VAR7;
}