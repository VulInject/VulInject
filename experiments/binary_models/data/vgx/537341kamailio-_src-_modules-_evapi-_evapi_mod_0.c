static int FUN1(int VAR1)
{
int VAR2;
int VAR3;

if (VAR1==VAR4) {
if(FUN2()<0) {
FUN3("");
return -1;
}
return 0;
}

if (VAR1!=VAR5) {
if(VAR6!=FUN4()) {
FUN5();
}
return 0;
}

VAR2=FUN6(VAR7, "", 1);
if (VAR2<0)
return -1; 
if(VAR2==0) {

VAR6 = FUN4();


if(FUN7(VAR8) < 0) {
FUN8("");
return -1;
}

if (FUN9())
return -1;

FUN10();
if(FUN11(VAR9, VAR10)<0) {
FUN3("");
return -1;
}
}

for(VAR3=0; VAR3<VAR11; VAR3++) {
VAR2=FUN6(VAR8, "", 1);
if (VAR2<0)
return -1; 
if(VAR2==0) {



if (FUN9())
return -1;

if(FUN12(VAR3+1)<0) {
FUN3("", VAR3);
return -1;
}
}
}

return 0;
}