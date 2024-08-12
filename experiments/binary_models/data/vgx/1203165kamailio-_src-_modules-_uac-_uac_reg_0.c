static void FUN1(VAR1* VAR2, void* VAR3)
{
int VAR4;
int VAR5;
void* VAR6;

if(VAR7==NULL) {
VAR2->FUN2(VAR3, 500, "");
return;
}
if(VAR2->FUN3(VAR3, "", &VAR5)<1) {
FUN4("");
VAR2->FUN2(VAR3, 500, "");
return;
}
VAR4 = *VAR7;
*VAR7 = (VAR5)?1:0;


if (VAR2->FUN5(VAR3, "", &VAR6) < 0) {
VAR2->FUN2(VAR3, 500, "");
return;
}
if(VAR2->FUN6(VAR6, "", "", VAR4, "", VAR5)<0) {
VAR2->FUN2(VAR3, 500, "");
return;
}
}