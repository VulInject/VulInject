void FUN1(cmsFloat64Number VAR1[])
{
cmsUInt32Number VAR2, VAR3;
char VAR4[VAR5];
cmsFloat64Number VAR6;

VAR3 = FUN2(VAR7);
for (VAR2=0; VAR2 < VAR3; VAR2++) {

if (VAR8 != NULL) {

FUN3(VAR8, VAR2, VAR4, NULL, NULL, NULL, NULL);         
}
else {
VAR9 = 1;
sprintf(VAR4, "", VAR2 + 1);
}

VAR6 = (VAR10) VAR1[VAR2]* VAR9;

if (VAR11) 
VAR6 = FUN4(VAR6 + 0.5);

if (!VAR12) {

if (VAR6 < 0)
VAR6 = 0;
if (VAR6 > VAR9)
VAR6 = VAR9;
}

if (VAR13 <= 0)
FUN5("", VAR6);
else
FUN5("", VAR4, VAR6);
}   

FUN5("");
}