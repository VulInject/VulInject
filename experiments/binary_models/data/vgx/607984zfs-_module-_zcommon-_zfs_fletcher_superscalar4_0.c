static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
uint64_t VAR5, VAR6, VAR7, VAR8;

VAR5 = VAR2->VAR9[0].VAR10[0] + VAR2->VAR9[0].VAR10[1] +
VAR2->VAR9[0].VAR10[2] + VAR2->VAR9[0].VAR10[3];
VAR6 = 0 - VAR2->VAR9[0].VAR10[1] - 2 * VAR2->VAR9[0].VAR10[2] -
3 * VAR2->VAR9[0].VAR10[3] + 4 * VAR2->VAR9[1].VAR10[0] +
4 * VAR2->VAR9[1].VAR10[1] + 4 * VAR2->VAR9[1].VAR10[2] +
4 * VAR2->VAR9[1].VAR10[3];

VAR7 = VAR2->VAR9[0].VAR10[2] + 3 * VAR2->VAR9[0].VAR10[3] -
6 * VAR2->VAR9[1].VAR10[0] - 10 * VAR2->VAR9[1].VAR10[1] -
14 * VAR2->VAR9[1].VAR10[2] - 18 * VAR2->VAR9[1].VAR10[3] +
16 * VAR2->VAR9[2].VAR10[0] + 16 * VAR2->VAR9[2].VAR10[1] +
16 * VAR2->VAR9[2].VAR10[2] + 16 * VAR2->VAR9[2].VAR10[3];

VAR8 = 0 - VAR2->VAR9[0].VAR10[3] + 4 * VAR2->VAR9[1].VAR10[0] +
10 * VAR2->VAR9[1].VAR10[1] + 20 * VAR2->VAR9[1].VAR10[2] +
34 * VAR2->VAR9[1].VAR10[3] - 48 * VAR2->VAR9[2].VAR10[0] -
64 * VAR2->VAR9[2].VAR10[1] - 80 * VAR2->VAR9[2].VAR10[2] -
96 * VAR2->VAR9[2].VAR10[3] + 64 * VAR2->VAR9[3].VAR10[0] +
64 * VAR2->VAR9[3].VAR10[1] + 64 * VAR2->VAR9[3].VAR10[2] +
64 * VAR2->VAR9[3].VAR10[3];

FUN2(VAR4, VAR5, VAR6, VAR7, VAR8);
}