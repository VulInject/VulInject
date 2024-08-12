static int FUN1(struct VAR1 *VAR1, dma_addr_t VAR2,
unsigned int VAR3, unsigned int VAR4)
{
int VAR5;

if (VAR3 > FUN2(VAR1))
return -VAR6;


if (VAR3 + VAR4 <= FUN2(VAR1)) {
return FUN3(VAR1, 0, VAR2,
FUN4(VAR1) + VAR3, VAR4,
0, 0);
}


VAR5 = FUN3(VAR1, 0, VAR2,
FUN4(VAR1) + VAR3,
FUN2(VAR1) - VAR3, 0, 0);

if (!VAR5) {
VAR5 = FUN3(VAR1, 0,
VAR2 + FUN2(VAR1) - VAR3,
FUN4(VAR1),
VAR4 + VAR3 - FUN2(VAR1), 0, 0);
}

return VAR5;
}