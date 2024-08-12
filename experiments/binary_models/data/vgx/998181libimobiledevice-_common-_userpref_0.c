VAR1 FUN1(plist_t VAR2, const char* VAR3, VAR4 *VAR5)
{
if (!VAR2 || !VAR5)
return VAR6;

userpref_error_t VAR7 = VAR8;
char* VAR9 = NULL;
uint64_t VAR10 = 0;

plist_t VAR11 = FUN2(VAR2, VAR3);

if (VAR11 && FUN3(VAR11) == VAR12) {
FUN4(VAR11, &VAR9, &VAR10);
VAR5->VAR13 = (unsigned char*)malloc(VAR10+1);
memcpy(VAR5->VAR13, VAR9, VAR10);
VAR5->VAR13[VAR10] = '';
VAR5->VAR14 = VAR10+1;
free(VAR9);
VAR9 = NULL;
} else {
VAR7 = VAR15;
}

if (VAR9)
free(VAR9);

return VAR7;
}