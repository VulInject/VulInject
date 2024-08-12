static int FUN1(const char *VAR1)
{
int VAR2 = 0;
bool VAR3;

for (VAR3 = true; *VAR1; VAR1++) {
if (FUN2(*VAR1)) {
VAR3 = true;
} else if (VAR3) {
VAR3 = false;
VAR2++;
}
}

return VAR2;
}