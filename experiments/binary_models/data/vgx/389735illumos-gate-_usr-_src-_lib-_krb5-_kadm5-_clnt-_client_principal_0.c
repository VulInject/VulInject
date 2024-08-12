VAR1
FUN1(void *VAR2,
krb5_principal VAR3,
VAR4 **VAR5,
int *VAR6)
{
chrand_arg		VAR7;
VAR8		*VAR9;
kadm5_server_handle_t VAR10 = VAR2;
int		VAR11, VAR12;


if (VAR6)
*VAR6 = 0;
if (VAR5)
*VAR5 = NULL;
FUN2(VAR2);

VAR7.VAR3 = VAR3;
VAR7.VAR13 = VAR10->VAR13;

if(VAR3 == NULL)
return VAR14;
VAR9 = FUN3(&VAR7, VAR10->VAR15);
if (VAR9 == NULL)
return VAR16;
if (VAR10->VAR13 == VAR17) {
if (VAR5)
FUN4(VAR10->VAR18, &VAR9->VAR5, VAR5);
} else if (VAR5 && (VAR9->VAR6 > 0)) {
*VAR5 = (VAR4 *) malloc(
VAR9->VAR6*sizeof(VAR4));
if (*VAR5 == NULL)
return VAR19;
for (VAR11 = 0; VAR11 < VAR9->VAR6; VAR11++) {
VAR12 = FUN5(
VAR10->VAR18,
&VAR9->VAR20[VAR11],
&(*VAR5)[VAR11]);
if (VAR12) {
free(*VAR5);
*VAR5 = NULL;
return VAR19;
}
}
if (VAR6)
*VAR6 = VAR9->VAR6;
}
return (VAR9->VAR21);
}