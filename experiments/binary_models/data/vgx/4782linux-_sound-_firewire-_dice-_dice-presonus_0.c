int FUN1(struct VAR1 *VAR2)
{
static const struct {
u32 VAR3;
const struct VAR4 *VAR5;
} *VAR6, VAR7[] = {
{0x000008, &VAR8},
};
struct fw_csr_iterator VAR9;
int VAR10, VAR11, VAR3;
int VAR12;

VAR3 = 0;
FUN2(&VAR9, VAR2->VAR13->VAR14);
while (FUN3(&VAR9, &VAR10, &VAR11)) {
if (VAR10 == VAR15) {
VAR3 = VAR11;
break;
}
}

for (VAR12 = 0; VAR12 < FUN4(VAR7); ++VAR12) {
VAR6 = VAR7 + VAR12;
if (VAR6->VAR3 == VAR3)
break;
}
if (VAR12 == FUN4(VAR7))
return -VAR16;

memcpy(VAR2->VAR17, VAR6->VAR5->VAR17,
VAR18 * VAR19 * sizeof(unsigned int));
memcpy(VAR2->VAR20, VAR6->VAR5->VAR20,
VAR18 * VAR19 * sizeof(unsigned int));

if (VAR6->VAR5->VAR21) {
VAR2->VAR22[0] = 1;
VAR2->VAR23[0] = 1;
}

return 0;
}