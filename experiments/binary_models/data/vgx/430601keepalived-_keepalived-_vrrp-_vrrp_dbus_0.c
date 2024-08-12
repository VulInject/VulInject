static bool
FUN1(VAR1 *VAR2)
{
if (VAR2->VAR3)
FUN2(VAR2->VAR3);

if (VAR2->VAR4)
FUN2(VAR2->VAR4);

if (VAR5[0] != -1) {
close(VAR5[0]);
close(VAR5[1]);
VAR5[0] = -1;
VAR5[1] = -1;
}

if (VAR6[0] != -1) {
close(VAR6[0]);
close(VAR6[1]);
VAR6[0] = -1;
VAR6[1] = -1;
}

return false;
}