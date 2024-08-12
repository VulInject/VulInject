static int FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5)
{
if (VAR3 > 1)
return -VAR6;

if (!VAR3) {
VAR5->VAR7 = 0;
VAR5->VAR8 = 4;
} else {
VAR5->VAR7 = 6;
VAR5->VAR8 = 4;
}

return 0;
}

static const struct mtd_ooblayout_ops VAR9 = {
.VAR10 = VAR11,
.free = VAR12,
};

static u8 VAR13[] = {'', '', '', '' };
static u8 VAR14[] = {'', '', '', '' };


static struct nand_bbt_descr VAR15 = {
.VAR16 = VAR17 | VAR18 | VAR19
| VAR20 | VAR21 | VAR22,
.VAR23 =	0,
.VAR24 = 4,
.VAR25 = 6,
.VAR26 = 4,
.VAR27 = VAR13
};

static struct nand_bbt_descr VAR28 = {
.VAR16 = VAR17 | VAR18 | VAR19
| VAR20 | VAR21 | VAR22,
.VAR23 =	0,
.VAR24 = 4,
.VAR25 = 6,
.VAR26 = 4,
.VAR27 = VAR14
};


struct VAR29 {
uint32_t VAR30;
uint32_t VAR31;
uint32_t VAR32;
uint32_t VAR33;
uint32_t VAR34;
uint32_t VAR35;
uint32_t VAR36;
uint32_t VAR37;
int VAR38;
struct VAR39 *VAR40;
unsigned VAR41;
};