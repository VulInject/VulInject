char * FUN1(const char *VAR1, const char *VAR2)
{

ZEND_TLS char *VAR3;
ZEND_TLS int VAR4 = 0;
int VAR5 = (sizeof(VAR6) - 1
+ sizeof(VAR7) + 9 + 1
+ (int)strlen(VAR2) + 1 + 43 + 1);

if (VAR4 < VAR5) {
char *VAR8 = (char *) realloc(VAR3, VAR5);
if (VAR8 == NULL) {
return NULL;
}

VAR3 = VAR8;
VAR4 = VAR5;
}

return FUN2(VAR1, VAR2, VAR3, VAR4);
}


static const struct
{
const char *VAR9;
const char VAR10[32];
} VAR11[] =