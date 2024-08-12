static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5, enum dma_data_direction VAR6,
unsigned long VAR7)
{
struct VAR3 *VAR8;
int VAR9;

FUN2(VAR4, VAR8, VAR5, VAR9) {
VAR8->VAR10 = FUN3(VAR8);
}

return VAR5;
}

const struct dma_map_ops VAR11 = {
.VAR12 = VAR13,
.free = VAR14,
.VAR15 = VAR15,
.VAR16 = VAR16,
};