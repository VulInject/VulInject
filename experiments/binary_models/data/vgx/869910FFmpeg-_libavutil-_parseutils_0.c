int FUN1(VAR1 *VAR2, const char *VAR3)
{
int VAR4, VAR5;
int VAR6 = FUN2(VAR7);


for (VAR4 = 0; VAR4 < VAR6; ++VAR4)
if (!strcmp(VAR7[VAR4].VAR8, VAR3)) {
*VAR2 = VAR7[VAR4].VAR2;
return 0;
}


if ((VAR5 = FUN3(VAR2, VAR3, 1001000)) < 0)
return VAR5;
if (VAR2->VAR9 <= 0 || VAR2->VAR10 <= 0)
return FUN4(VAR11);
return 0;
}