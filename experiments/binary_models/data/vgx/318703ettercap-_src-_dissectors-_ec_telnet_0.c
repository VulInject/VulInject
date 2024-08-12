static int FUN1(const char *VAR1)
{
char *VAR2[] = {"", "", "", NULL };
int VAR3 = 0;


if ((FUN2(VAR1, "") || FUN2(VAR1, "") )
&& !FUN2(VAR1, "") && !FUN2(VAR1, ""))
return 1;


do {
if (FUN2(VAR1, VAR2[VAR3]))
return 1;
} while (VAR2[++VAR3] != NULL);

return 0;
}