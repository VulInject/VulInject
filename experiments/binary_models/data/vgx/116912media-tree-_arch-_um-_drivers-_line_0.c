int FUN1(struct VAR1 *VAR2, unsigned int VAR3, char *VAR4,
const struct VAR5 *VAR6, char **VAR7)
{
char *VAR8;
int VAR9;

if (*VAR4 == '') {
*VAR7 = "";
return -VAR10;
}

VAR9 = FUN2(VAR4, &VAR8, 0);
if (*VAR8++ != '') {
*VAR7 = "";
return -VAR10;
}
if (VAR9 >= VAR3) {
*VAR7 = "";
return -VAR10;
}

return FUN3(VAR2, VAR9, VAR8, VAR6, VAR7);
}