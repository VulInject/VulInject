char* FUN1(const char *VAR1, char VAR2)
{
char *VAR3 = strchr(VAR1, '');
if (!VAR3) return NULL;


if ((VAR1[1]=='') && ( (VAR1[2]=='') || (VAR1[2]=='') ) )
return FUN1(VAR1+2, VAR2);

if (!FUN2(VAR1, "VAR4:

return strchr(VAR1+7, '');
}


if ((VAR1[0] == '') && (VAR1[1] == '')) {
char *VAR5 = strchr(VAR1+2, '');
if (VAR5) VAR5 = strchr(VAR5 + 1, '');
if (VAR5)
return FUN1(VAR5 + 1, VAR2);
}




if ((VAR3[1]=='') && (VAR3[2]=='')) {
char *VAR6, *VAR7, *VAR8;
VAR3++;















while (VAR3[0]=='')
VAR3++;
if (!VAR3[0]) return NULL;


if ((VAR3[1]=='') && ( (VAR3[2]=='') || (VAR3[2]=='') ) ) {
return FUN1(VAR3+2, VAR2);
}

VAR6 = strchr(VAR3, '');
VAR7 = strchr(VAR3, '');
VAR8 = strchr(VAR3, '');

if (VAR8 && VAR6 && VAR7 && (VAR8<VAR7) && (VAR8>VAR6))
VAR6 = strchr(VAR8, '');

if (VAR6 && VAR7 && ((VAR7 - VAR3) > (VAR6 - VAR3)) ) {
const char *VAR9;
u32 VAR10, VAR11, VAR12=0, VAR13=0, VAR14=0;
VAR7[0] = 0;
VAR9 = strrchr(VAR6, '');
VAR11 = FUN3(VAR9+1);
for (VAR10=0; VAR10<strlen(VAR6+1); VAR10++) {
if (VAR6[VAR10+1] == '') VAR12++;
else if (VAR6[VAR10+1] == '') VAR13++;

else if (VAR6[VAR10+1] == '') {}
else if (!FUN4(VAR6[VAR10+1])) {
VAR14++;
break;
}
}
VAR7[0] = '';

if (!VAR14 && (VAR11 || (VAR12 && !VAR13)))
VAR6 = strchr(VAR7, '');
}
return VAR6;
}

if (VAR3 && VAR2) {
char *VAR15 = strchr(VAR1, '');
char *VAR16 = strchr(VAR1, VAR2);
if (VAR16 && VAR16>VAR15) VAR16 = NULL;
if (VAR16) VAR15 = NULL;
if (VAR15 && (VAR15>VAR3)) {
VAR3 = strchr(VAR15, '');
}
if (VAR16 && (strlen(VAR16) > 4)) {
if ((VAR16[2] == '') && ((VAR16[3] == '') || (VAR16[3] == ''))) {
return FUN1(VAR16 + 1, 0);
}
if ((VAR16[1] == '') && (VAR16[2] == '')) {
char *VAR5 = strchr(VAR16 + 3, '');
if (VAR5) VAR5 = strchr(VAR5+1, '');
if (VAR5 && (VAR5>VAR3))
return FUN1(VAR5, 0);
}
}
}
return VAR3;
}