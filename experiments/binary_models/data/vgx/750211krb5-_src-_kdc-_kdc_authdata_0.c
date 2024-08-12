VAR1
FUN1(krb5_context VAR2)
{
VAR3 *VAR4;
size_t VAR5;

for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
VAR4 = &VAR7[VAR5];
if (VAR4->VAR8.VAR9 != NULL)
VAR4->VAR8.FUN2(VAR2, VAR4->VAR10);
}
free(VAR7);
VAR7 = NULL;
return 0;
}