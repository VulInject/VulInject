static int
FUN1(void)
{

int VAR1[] = { VAR2, VAR3, VAR4 };
unsigned char VAR5[VAR6];
size_t VAR7, VAR8;
unsigned VAR9;
int VAR10;

memset(VAR5, 0, sizeof(VAR5));

for (VAR7 = 0; VAR7 < sizeof(VAR5); VAR7 += VAR8) {
VAR8 = sizeof(VAR5) - VAR7;

if (0 != FUN2(VAR1, 3, &VAR5[VAR7], &VAR8, NULL, 0))
return -1;
}

for (VAR9=0,VAR10=0; VAR9<sizeof(VAR5); ++VAR9) {
VAR10 |= VAR5[VAR9];
}
if (!VAR10)
return -1;

FUN3(VAR5, sizeof(VAR5));
FUN4(VAR5, sizeof(VAR5));
VAR11 = 1;
return 0;
}