static const char*
FUN1(const char* VAR1, size_t VAR2)
{
static char VAR3[2];
if(VAR2 >= strlen(VAR1))
return "";
VAR3[0] = VAR1[VAR2];
VAR3[1] = 0;
return VAR3;
}