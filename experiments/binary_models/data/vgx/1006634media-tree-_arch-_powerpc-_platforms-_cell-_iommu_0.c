static inline VAR1 FUN1(struct VAR2 *VAR3)
{
const VAR1 *VAR4;

VAR4 = FUN2(VAR3, "", NULL);
if (VAR4 == NULL) {
FUN3(VAR5 "",
VAR3->VAR6);
return 0;
}

return *VAR4;
}

static struct iommu_table_ops VAR7 = {
.VAR8 = VAR9,
.VAR10 = VAR11
};