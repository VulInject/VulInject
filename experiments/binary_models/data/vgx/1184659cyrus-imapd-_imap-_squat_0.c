static int FUN1(VAR1* VAR2) {
int VAR3 = VAR2->VAR4[VAR2->VAR5];

VAR2->VAR5++;
while (VAR2->VAR5 < VAR2->VAR6 && VAR2->VAR4[VAR2->VAR5] < 0) {
VAR2->VAR5++;
}

return VAR3;
}