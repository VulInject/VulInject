VAR1
FUN1(struct VAR2 *VAR3)
{
u_int64_t		VAR4 = 0;
int			VAR5;

if (FUN2(VAR3->VAR6) & 0x0400) {

for (VAR5 = 3; VAR5 >= 0; --VAR5) {
VAR4 <<= 16;
VAR4 += FUN2(VAR3->VAR7[VAR5]);
}
} else {
VAR4 = FUN2(VAR3->VAR8[1]);
VAR4 <<= 16;
VAR4 += FUN2(VAR3->VAR8[0]);
}

return (VAR4 - 1);
}