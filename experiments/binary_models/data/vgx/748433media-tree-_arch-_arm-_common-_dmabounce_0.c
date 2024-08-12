static int FUN1(struct VAR1 *VAR2, dma_addr_t VAR3,
size_t VAR4, enum dma_data_direction VAR5)
{
struct VAR6 *VAR7;
unsigned long VAR8;

FUN2(VAR2, "",
VAR9, VAR3, VAR4, VAR5);

VAR7 = FUN3(VAR2, VAR3, VAR9);
if (!VAR7)
return 1;

VAR8 = VAR3 - VAR7->VAR10;

FUN4(VAR7->VAR11 != VAR5);

FUN2(VAR2, "",
VAR9, VAR7->VAR12, FUN5(VAR2, VAR7->VAR12), VAR8,
VAR7->VAR13, VAR7->VAR10);

FUN6(VAR2->VAR14.VAR15->VAR16++);

if (VAR5 == VAR17 || VAR5 == VAR18) {
FUN2(VAR2, "",
VAR9, VAR7->VAR13 + VAR8, VAR7->VAR12 + VAR8, VAR4);
memcpy(VAR7->VAR12 + VAR8, VAR7->VAR13 + VAR8, VAR4);
}
return 0;
}