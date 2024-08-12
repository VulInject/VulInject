static int FUN1(struct VAR1 *VAR2, int *VAR3,
struct VAR4 *VAR5, u64 VAR6, int VAR7)
{
struct VAR8 *VAR9 = VAR5->VAR9;
u64 VAR10 = VAR6 - VAR5->VAR11;
int VAR12 = 0;

while (VAR7) {
int VAR13;
dma_addr_t VAR14 =
FUN2(VAR9, VAR10, &VAR13, VAR3);
if (!VAR14)
break;

VAR13 = FUN3(VAR13, VAR7);
if (FUN4(VAR2, (void *)(VAR15)VAR14, VAR13) ==
VAR13) {
VAR12 += VAR13;
VAR10 += VAR13;
VAR7 -= VAR13;
} else {
break;
}
}
return VAR12;
}