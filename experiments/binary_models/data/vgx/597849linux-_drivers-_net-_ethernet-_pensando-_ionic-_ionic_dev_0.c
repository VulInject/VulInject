void FUN1(struct VAR1 *VAR2, void VAR3 *VAR4, dma_addr_t VAR5)
{
struct VAR6 *VAR7;
unsigned int VAR8;

VAR2->VAR9 = VAR4;
VAR2->VAR10 = VAR5;

for (VAR8 = 0, VAR7 = VAR2->VAR11; VAR8 < VAR2->VAR12; VAR8++, VAR7++)
VAR7->VAR13 = VAR4 + (VAR8 * VAR2->VAR14);
}