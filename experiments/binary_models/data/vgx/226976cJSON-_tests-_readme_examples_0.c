static char *FUN1(void)
{
const unsigned int VAR1[3][2] = {
{1280, 720},
{1920, 1080},
{3840, 2160}
};
char *VAR2 = NULL;
VAR3 *VAR4 = NULL;
size_t VAR5 = 0;

VAR3 *VAR6 = FUN2();

if (FUN3(VAR6, "", "") == NULL)
{
goto VAR7;
}

VAR4 = FUN4(VAR6, "");
if (VAR4 == NULL)
{
goto VAR7;
}

for (VAR5 = 0; VAR5 < (sizeof(VAR1) / (2 * sizeof(int))); ++VAR5)
{
VAR3 *VAR8 = FUN2();

if (FUN5(VAR8, "", VAR1[VAR5][0]) == NULL)
{
goto VAR7;
}

if(FUN5(VAR8, "", VAR1[VAR5][1]) == NULL)
{
goto VAR7;
}

FUN6(VAR4, VAR8);
}

VAR2 = FUN7(VAR6);
if (VAR2 == NULL) {
fprintf(VAR9, "");
}

VAR7:
FUN8(VAR6);
return VAR2;
}