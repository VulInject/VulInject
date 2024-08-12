static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4,
const VAR1 *VAR5, const VAR1 *VAR6)
{
int VAR7 = (FUN2(VAR3[0] - VAR4[0]) - FUN2(VAR5[0] - VAR4[0])) +
(FUN2(VAR3[1] - VAR4[1]) - FUN2(VAR5[1] - VAR4[1])) +
(FUN2(VAR3[2] - VAR4[2]) - FUN2(VAR5[2] - VAR4[2])) +
(FUN2(VAR3[3] - VAR4[3]) - FUN2(VAR5[3] - VAR4[3]));
if (VAR7 <= 0)
FUN3(VAR2, VAR5);
else
FUN3(VAR2, VAR3);
}