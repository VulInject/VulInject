void
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
u_int32_t VAR6;
u_int32_t VAR7;
VAR3 *VAR8 = VAR2->VAR9[0];
VAR3 *VAR10 = VAR2->VAR11;

VAR6 = *VAR4;
VAR7 = *VAR5;

VAR6 ^= VAR10[0];
FUN2(VAR8, VAR10, VAR7, VAR6, 1); FUN2(VAR8, VAR10, VAR6, VAR7, 2);
FUN2(VAR8, VAR10, VAR7, VAR6, 3); FUN2(VAR8, VAR10, VAR6, VAR7, 4);
FUN2(VAR8, VAR10, VAR7, VAR6, 5); FUN2(VAR8, VAR10, VAR6, VAR7, 6);
FUN2(VAR8, VAR10, VAR7, VAR6, 7); FUN2(VAR8, VAR10, VAR6, VAR7, 8);
FUN2(VAR8, VAR10, VAR7, VAR6, 9); FUN2(VAR8, VAR10, VAR6, VAR7, 10);
FUN2(VAR8, VAR10, VAR7, VAR6, 11); FUN2(VAR8, VAR10, VAR6, VAR7, 12);
FUN2(VAR8, VAR10, VAR7, VAR6, 13); FUN2(VAR8, VAR10, VAR6, VAR7, 14);
FUN2(VAR8, VAR10, VAR7, VAR6, 15); FUN2(VAR8, VAR10, VAR6, VAR7, 16);

*VAR4 = VAR7 ^ VAR10[17];
*VAR5 = VAR6;
}