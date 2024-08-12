VAR1
FUN1(const void VAR2 *VAR3, void *VAR4,
int VAR5, __wsum VAR6, int *VAR7)
{
FUN2();
*VAR7 = 0;

if (!FUN3(FUN4(VAR8, VAR3, VAR5)))
goto VAR9;


if (FUN5((unsigned long)VAR3 & 6)) {
while (((unsigned long)VAR3 & 6) && VAR5 >= 2) {
__u16 VAR10;

if (FUN6(VAR10, (const __u16 VAR2 *)VAR3))
goto VAR9;

*(VAR11 *)VAR4 = VAR10;
VAR6 = (__force VAR1)FUN7(
(__force unsigned)VAR6, VAR10);
VAR3 += 2;
VAR4 += 2;
VAR5 -= 2;
}
}
FUN8();
VAR6 = FUN9((__force const void *)VAR3,
VAR4, VAR5, VAR6, VAR7, NULL);
FUN10();
if (FUN5(*VAR7))
goto VAR9;

return VAR6;

VAR9:
*VAR7 = -VAR12;
memset(VAR4, 0, VAR5);

return VAR6;
}