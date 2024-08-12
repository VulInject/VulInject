void FUN1(enum fsl_diu_monitor_port VAR1,
char *VAR2)
{
int VAR3;
if (VAR1 == VAR4) {
for (VAR3 = 0; VAR3 < 256*3; VAR3++)
VAR2[VAR3] = (VAR2[VAR3] << 2) |
((VAR2[VAR3] >> 6) & 0x03);
}
}