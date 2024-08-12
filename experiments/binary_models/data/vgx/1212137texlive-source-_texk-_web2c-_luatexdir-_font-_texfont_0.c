static void FUN1(VAR1 * VAR2)
{
int VAR3, VAR4;
FUN2(VAR4);
VAR2->VAR5 = VAR4;
if (VAR4 > 0)
VAR2->VAR6 = xmalloc((unsigned) (2 * (int) sizeof(VAR7) * VAR4));
for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++) {
FUN2(VAR4);
VAR2->VAR6[(2 * VAR3)] = (VAR7) VAR4;
FUN2(VAR4);
VAR2->VAR6[(2 * VAR3) + 1] = (VAR7) VAR4;
}
FUN2(VAR4);
VAR2->VAR8 = VAR4;
if (VAR4 > 0)
VAR2->VAR9 = xmalloc((unsigned) (2 * (int) sizeof(VAR7) * VAR4));
for (VAR3 = 0; VAR3 < VAR2->VAR8; VAR3++) {
FUN2(VAR4);
VAR2->VAR9[(2 * VAR3)] = (VAR7) VAR4;
FUN2(VAR4);
VAR2->VAR9[(2 * VAR3) + 1] = (VAR7) VAR4;
}
FUN2(VAR4);
VAR2->VAR10 = VAR4;
if (VAR4 > 0)
VAR2->VAR11 = xmalloc((unsigned) (2 * (int) sizeof(VAR7) * VAR4));
for (VAR3 = 0; VAR3 < VAR2->VAR10; VAR3++) {
FUN2(VAR4);
VAR2->VAR11[(2 * VAR3)] = (VAR7) VAR4;
FUN2(VAR4);
VAR2->VAR11[(2 * VAR3) + 1] = (VAR7) VAR4;
}
FUN2(VAR4);
VAR2->VAR12 = VAR4;
if (VAR4 > 0)
VAR2->VAR13 = xmalloc((unsigned) (2 * (int) sizeof(VAR7) * VAR4));
for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++) {
FUN2(VAR4);
VAR2->VAR13[(2 * VAR3)] = (VAR7) VAR4;
FUN2(VAR4);
VAR2->VAR13[(2 * VAR3) + 1] = (VAR7) VAR4;
}
}