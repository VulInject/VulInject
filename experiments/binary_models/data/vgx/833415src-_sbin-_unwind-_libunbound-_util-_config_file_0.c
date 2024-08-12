int 
FUN1(const char* VAR1, int VAR2, int* VAR3, int VAR4)
{
char* VAR5 = strchr(VAR1, '');
FUN2(""
""
"");
if(!VAR5) {
int VAR6 = FUN3(VAR1);
if(VAR6 == 0 && strcmp(VAR1, "") != 0) {
FUN4("", VAR1);
return 0;
}
if(VAR6 < VAR4)
VAR3[VAR6] = (VAR2?VAR6:0);
} else {
int VAR7, VAR8, VAR9 = FUN3(VAR5+1);
char VAR10[16];
if(VAR9 == 0 && strcmp(VAR5+1, "") != 0) {
FUN4("", VAR5+1);
return 0;
}
if( (int)(VAR5-VAR1)+1 >= (int)sizeof(VAR10) ) {
FUN4("", VAR1);
return 0;
}
if(VAR5 > VAR1)
memcpy(VAR10, VAR1, (VAR11)(VAR5-VAR1));
VAR10[VAR5-VAR1] = 0;
VAR8 = FUN3(VAR10);
if(VAR8 == 0 && strcmp(VAR10, "") != 0) {
FUN4("", VAR10);
return 0;
}
for(VAR7=VAR8; VAR7<=VAR9; VAR7++) {
if(VAR7 < VAR4)
VAR3[VAR7] = (VAR2?VAR7:0);
}
return 1;
}
return 1;
}