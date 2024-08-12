static int
FUN1(void)
{

static const char *VAR1[] = {
"", "", "", NULL
};
int VAR2;
if (VAR3)
return FUN2(VAR3);

for (VAR2 = 0; VAR1[VAR2]; ++VAR2) {
if (FUN2(VAR1[VAR2]) == 0) {
return 0;
}
}

return -1;
}