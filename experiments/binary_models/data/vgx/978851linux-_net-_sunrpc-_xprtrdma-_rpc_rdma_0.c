static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
unsigned char *VAR7;

VAR7 = (unsigned char *)VAR6->VAR8[0].VAR9;
VAR7 += VAR6->VAR8[0].VAR10 + VAR6->VAR11;
memmove(VAR7, VAR6->VAR12[0].VAR9, VAR6->VAR12[0].VAR10);
VAR2->VAR13.VAR14 += VAR6->VAR12[0].VAR10;
}