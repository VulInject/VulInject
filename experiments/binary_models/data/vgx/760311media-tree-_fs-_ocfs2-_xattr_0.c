static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3,
char *VAR4,
size_t VAR5);

static int FUN2(struct VAR1 *VAR1,
struct VAR6 *VAR7,
struct VAR8 *VAR9);

static int FUN3(struct VAR1 *VAR1,
struct VAR10 *VAR11,
struct VAR6 *VAR7,
struct VAR8 *VAR9);

typedef int (VAR12)(struct VAR1 *VAR1,
struct VAR2 *VAR13,
u64 VAR14, u32 VAR15, u32 VAR16, void *VAR17);
static int FUN4(struct VAR1 *VAR1,
struct VAR2 *VAR13,
VAR12 *VAR18,
void *VAR17);
static int FUN5(struct VAR1 *VAR1,
struct VAR19 *VAR20,
void *VAR17);
static int FUN6(struct VAR1 *VAR1,
struct VAR2 *VAR13,
u64 VAR14,
u32 VAR15,
u32 VAR16,
void *VAR17);

static int FUN7(struct VAR1 *VAR1, VAR21 *VAR22,
u64 VAR23, u64 VAR24, u64 VAR25,
unsigned int VAR26,
VAR27 *VAR28);
static int FUN8(struct VAR1 *VAR1,
struct VAR29 *VAR30,
struct VAR10 *VAR11,
struct VAR6 *VAR31,
struct VAR6 *VAR32,
struct VAR33 **VAR34,
int *VAR35,
int *VAR36);
static int FUN9(struct VAR37 *VAR38,
struct VAR19 *VAR20,
int VAR39,
struct VAR40 **VAR41,
struct VAR2 **VAR42);

static inline VAR43 FUN10(struct VAR44 *VAR45)
{
return (1 << VAR45->VAR46) / VAR47;
}