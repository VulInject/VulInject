VAR1 *
FUN1(char *VAR2, krb5_ui_4 VAR3)
{
int VAR4;
for (VAR4=0; VAR4<VAR5; VAR4++) {
if ((VAR3 == strlen(VAR6[VAR4]->VAR7)) &&
!FUN2(VAR2, VAR6[VAR4]->VAR7, VAR3))
return(VAR6[VAR4]);
}
return((VAR1 *) NULL);
}