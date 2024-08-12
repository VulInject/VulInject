static void FUN1(VAR1 *VAR2, char *VAR3)
{
time_t VAR4[4] = { 0, 0, 0, 0 };

if (VAR3 && *VAR3){
int VAR5 = -1;
do {
VAR4[++VAR5] = FUN2(VAR3, &VAR3, 10);
if (*VAR3) VAR3++;
} while (VAR5 < 3 && VAR4[VAR5] && *VAR3);
}

VAR2->VAR6 = (VAR4[0]) ? VAR4[0] : 60;
VAR2->VAR7 = VAR2->VAR6 / 2;
VAR2->VAR8 = (VAR4[1]) ? VAR4[1] : (VAR2->VAR6 / 10);
VAR2->VAR9 = (VAR4[2]) ? (int)(VAR4[2]) : 3;
VAR2->VAR10 = (VAR4[3]) ? VAR4[3] : (VAR2->VAR6 * 10) -
VAR2->VAR7;
VAR2->VAR11 = 0;
}