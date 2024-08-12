static int FUN1(VAR1 *VAR2, const enum AVHWDeviceType VAR3)
{
int VAR4 = 0;

if ((VAR4 = FUN2(&VAR5, VAR3,
NULL, NULL, 0)) < 0) {
fprintf(VAR6, "");
return VAR4;
}
VAR2->VAR5 = FUN3(VAR5);

return VAR4;
}