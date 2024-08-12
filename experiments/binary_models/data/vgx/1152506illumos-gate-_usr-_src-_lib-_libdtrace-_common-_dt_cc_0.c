void
FUN1(VAR1 *VAR2)
{
static const char *const VAR3[] = {
"", "", "", "", "", NULL
};

VAR4 *VAR5;
int VAR6;

for (VAR6 = 0; VAR3[VAR6] != NULL; VAR6++) {
if ((VAR5 = FUN2(VAR2->VAR7, VAR3[VAR6])) != NULL)
VAR5->VAR8 = VAR9;
}

VAR10->VAR11 = NULL;
VAR10->VAR12 = NULL;
}