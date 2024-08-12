int
FUN1(void)
{
VAR1 = 0;
VAR2 = calloc(1, sizeof(struct VAR3));
if (VAR2 == NULL) {
VAR1 = VAR4;
return -1;
}

while (FUN2(VAR5) != NULL) {
VAR5++;
if (VAR5 < 0)
VAR5 = 0;
}

VAR2->VAR6 = VAR5++;
FUN3();
FUN4(VAR2);
return VAR2->VAR6;
}