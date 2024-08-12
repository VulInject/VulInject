int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u32 VAR5)
{
VAR6 *VAR7;
dma_addr_t VAR8 = 0;

if (VAR5 % 2) {
FUN2("");
return -VAR9;
}

if ((VAR7 = FUN3(VAR2, VAR5, &VAR8)) != NULL) {
VAR4->VAR2 = VAR2;
VAR4->VAR10 = VAR7;
VAR4->VAR11 = VAR8;
VAR4->VAR12 = VAR7 + VAR5/2;
VAR4->VAR13 = VAR8 + VAR5/2;
VAR4->VAR5 = VAR5/2;
return 0;
}
return -VAR14;
}