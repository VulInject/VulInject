int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6;
if(FUN2(VAR2, VAR7, 0)<0) {
return -1;
}

for (VAR6=VAR2->VAR8; VAR6; VAR6=VAR6->VAR9)
{
if(VAR10.VAR11==VAR6->VAR12.VAR11
&& FUN3(VAR10.VAR13, VAR6->VAR12.VAR13,
VAR6->VAR12.VAR11)==0) {
break;
}
}
if(VAR6!=NULL) {
*VAR4 = VAR6->VAR14;
return 0;
}
return -1;
}