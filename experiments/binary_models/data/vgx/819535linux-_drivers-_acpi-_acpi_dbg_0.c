static int FUN1(void *VAR1)
{
acpi_osd_exec_callback VAR2 = NULL;
void *VAR3;

FUN2(&VAR4.VAR5);
if (VAR4.VAR2) {
VAR4.VAR6++;
VAR2 = VAR4.VAR2;
VAR3 = VAR4.VAR3;
}
FUN3(&VAR4.VAR5);

if (VAR2)
FUN4(VAR3);

FUN2(&VAR4.VAR5);
VAR4.VAR6--;
if (!FUN5()) {
VAR4.VAR7 = NULL;
FUN6(&VAR4.VAR8);
}
FUN3(&VAR4.VAR5);

return 0;
}