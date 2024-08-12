const char *
FUN1(const char *VAR1, const char *VAR2)
{
static char VAR3[128];
FUN2(VAR3, sizeof(VAR3), ""%VAR4\"", VAR1, VAR2);
return VAR3;
}