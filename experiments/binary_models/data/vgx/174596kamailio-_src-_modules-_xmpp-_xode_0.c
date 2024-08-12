static VAR1 FUN1(xode VAR2)
{
xode_spool VAR3;
int VAR4=0,VAR5=0;
xode VAR6;

if(!VAR2 || FUN2(VAR2) != VAR7)
return NULL;

VAR3 = FUN3(FUN4(VAR2));
if(!VAR3) return(NULL);

while(1)
{
if(VAR5==0)
{
if(FUN2(VAR2) == VAR7)
{
if(FUN5(VAR2))
{
FUN6(VAR3,VAR2,1);
VAR2 = FUN7(VAR2);
VAR4++;
continue;
}
else
{
FUN6(VAR3,VAR2,0);
}
}
else
{
FUN8(VAR3,FUN9(FUN4(VAR2),FUN10(VAR2)));
}
}

VAR6 = FUN11(VAR2);
if(!VAR6)
{
VAR2 = FUN12(VAR2);
VAR4--;
if(VAR4>=0) FUN6(VAR3,VAR2,2);
if(VAR4<1) break;
VAR5 = 1;
}
else
{
VAR2 = VAR6;
VAR5 = 0;
}
}

return VAR3;
}