static VAR1 FUN1(int VAR2, void *VAR3)
{
int VAR4;



do {
VAR4 = 0;
if (VAR5[0] &&
(FUN2(VAR5[0], VAR6) & VAR7)) {
(void)FUN3(VAR2, VAR5[0]);
VAR4 = 1;
}
if (VAR5[1] &&
(FUN2(VAR5[1], VAR6) & VAR7)) {
(void)FUN3(VAR2, VAR5[1]);
VAR4 = 1;
}
} while (VAR4);

return VAR8;
}