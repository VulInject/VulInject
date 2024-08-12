static void FUN1(void *VAR1, const char *VAR2, const char **VAR3) {
struct VAR4 *VAR5 = (struct VAR4 *) VAR1;
char VAR6[1024];
char *VAR7, *VAR8, *VAR9;
const char **VAR10;
int VAR11, VAR12;


strncpy(VAR6, VAR2, 1024);
VAR6[1023] = '';




VAR7 = VAR6;
VAR8 = strchr(VAR7, '');
if(VAR8 != NULL) {
*VAR8 = '';
VAR8++;
VAR9 = strchr(VAR8, '');
if(VAR9 != NULL) {
*VAR9 = '';
VAR9++;
}
VAR12 = FUN2(VAR5->VAR13, VAR7, VAR9);
} else {

VAR7 = NULL;
VAR8 = VAR6;
VAR9 = NULL;
VAR12 = -1;
}


VAR11 = FUN3(VAR5->VAR13, VAR12, VAR8, VAR5->VAR14);


VAR10 = VAR3;
while(VAR10[0] != NULL) {


strncpy(VAR6, VAR10[0], 1024);
VAR6[1023] = '';


VAR7 = VAR6;
VAR8 = strchr(VAR7, '');
if(VAR8 != NULL) {
*VAR8 = '';
VAR8++;
VAR9 = strchr(VAR8, '');
if(VAR9 != NULL) {
*VAR9 = '';
VAR9++;
}
VAR12 = FUN4(VAR5->VAR13, VAR11, VAR7, VAR9);
} else {

VAR7 = NULL;
VAR8 = VAR6;
VAR9 = NULL;
VAR12 = -1;
}


FUN5(VAR5->VAR13, VAR12, VAR8, (char *) VAR10[1]);

VAR10 += 2;
}

VAR5->VAR14++;
}