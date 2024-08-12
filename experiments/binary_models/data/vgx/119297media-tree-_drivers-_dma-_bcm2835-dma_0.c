static VAR1 FUN1(struct VAR2 *VAR3, dma_addr_t VAR4)
{
unsigned int VAR5;
size_t VAR6;

for (VAR6 = VAR5 = 0; VAR5 < VAR3->VAR7; VAR5++) {
struct VAR8 *VAR9 = VAR3->VAR10[VAR5].VAR11;
size_t VAR12 = VAR9->VAR13;
dma_addr_t VAR14;

if (VAR3->VAR15 == VAR16)
VAR14 = VAR9->VAR17;
else
VAR14 = VAR9->VAR18;

if (VAR6)
VAR6 += VAR12;
else if (VAR4 >= VAR14 && VAR4 < VAR14 + VAR12)
VAR6 += VAR14 + VAR12 - VAR4;
}

return VAR6;
}