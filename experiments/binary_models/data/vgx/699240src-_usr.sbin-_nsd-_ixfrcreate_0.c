static int FUN1(VAR1* VAR2, VAR3* VAR4, struct VAR5* VAR5)
{
VAR3* VAR6;
for(VAR6=VAR4; VAR6; VAR6=VAR6->VAR7) {
if(VAR6->VAR5 != VAR5)
continue;
if(!FUN2(VAR2, VAR6)) {
return 0;
}
}
return 1;
}