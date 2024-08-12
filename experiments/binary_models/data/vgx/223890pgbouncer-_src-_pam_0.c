int FUN1(void)
{
struct VAR1 *VAR2;
int VAR3 = 0;

while (VAR4 != VAR5) {
VAR2 = &VAR6[VAR4];

if (VAR2->VAR7 == VAR8) {

break;
}

if (FUN2(VAR2)) {
FUN3(VAR2);
}

VAR3++;
VAR4 = (VAR4 + 1) % VAR9;
}

return VAR3;
}