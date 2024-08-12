int FUN1(const char * VAR1, mode_t VAR2, uid_t VAR3, gid_t VAR4)
{
char *VAR5, *VAR6;
int VAR7;

if (VAR1 == NULL || *VAR1 == '')
return -1;
VAR5 = FUN2(NULL, VAR1);
if (VAR5[strlen(VAR5)-1] != '') {
FUN2(&VAR5,"");
}
VAR6 = VAR5;
for (;(VAR6=strchr(VAR6+1,''));) {
struct stat VAR8;
*VAR6 = '';
VAR7 = FUN3(VAR5, &VAR8);
if (VAR7) {
if (VAR9 != VAR10)
goto VAR11;
VAR7 = mkdir(VAR5, VAR2);
if (VAR7)
goto VAR11;
FUN4(VAR12, "", VAR1, VAR2);
if (!(VAR3 == (VAR13) -1 && VAR4 == (VAR14) -1)) {
VAR7 = chown(VAR5, VAR3, VAR4);
if (VAR7)
goto VAR11;
}
} else if (!FUN5(VAR8.VAR15)) {
VAR7 = VAR16;
goto VAR11;
}
*VAR6 = '';
}
VAR7 = 0;
VAR11:
free(VAR5);
return VAR7;
}