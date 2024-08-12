int main(int argc, char *argv[])
{
int VAR1;

(void) FUN1(VAR2, "");
(void) FUN1(VAR3, "");
(void) FUN1(VAR4, "");
if (FUN2() < 0) {
return -1;
}
(void) signal(VAR5, VAR6);
(void) signal(VAR7, VAR6);
(void) signal(VAR8, VAR6);
(void) signal(VAR9, VAR6);
if (FUN3(argc, argv) < 0) {
return -1;
}
if (VAR10 == NULL || *VAR10 != '') {
fprintf(VAR11, "");
return -2;
}
if (VAR12 == NULL || *VAR12 == 0) {
fprintf(VAR11, "");
return -2;
}
if (VAR13 != 0) {
FUN4();
}
FUN5();
signal(VAR14, VAR15);
signal(VAR16, VAR17);
VAR1 = FUN6();
(void) unlink(VAR18);

return VAR1;
}