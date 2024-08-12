long FUN1(struct VAR1 *VAR2, enum dma_resv_usage VAR3,
bool VAR4, unsigned long VAR5)
{
long VAR6 = VAR5 ? VAR5 : 1;
struct dma_resv_iter VAR7;
struct VAR8 *VAR9;

FUN2(&VAR7, VAR2, VAR3);
FUN3(&VAR7, VAR9) {

VAR6 = FUN4(VAR9, VAR4, VAR6);
if (VAR6 <= 0) {
FUN5(&VAR7);
return VAR6;
}
}
FUN5(&VAR7);

return VAR6;
}