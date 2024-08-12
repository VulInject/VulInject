static int FUN1(void);
static void FUN2(void);
static inline int FUN1(void) { return 0; }
static inline void FUN2(void) {}

static int FUN3(struct VAR1 *VAR1, struct VAR2 *VAR2);
static int FUN4(struct VAR1 *VAR1, struct VAR2 *VAR2);
static VAR3 FUN5(struct VAR2 *VAR2, char VAR4 *VAR5, size_t VAR6, VAR7 *VAR8);
static VAR3 FUN6(struct VAR2 *VAR2, const char VAR4 *VAR5, size_t VAR6, VAR7 *VAR8);
static long FUN7(struct VAR2 *VAR2, unsigned int VAR9, unsigned long VAR10);
static VAR11 FUN8(struct VAR2 *VAR2, VAR12 * VAR13);




static struct snd_seq_driver VAR14 = {
.VAR15 = {
.VAR16 = VAR17,
.VAR18 = VAR19,
.remove = VAR20,
},
.VAR21 = VAR22,
.VAR23 = sizeof(struct VAR24),
};