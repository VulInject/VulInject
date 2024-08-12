inline int FUN1(int VAR1) { return VAR1; }
inline int FUN2(int VAR2) { return VAR2; }
static inline void FUN3(void) { }
static inline int FUN4(void) { return 1; }
static inline void
FUN5(int VAR3, struct op_msrs const * const VAR4) { }
static inline void FUN6(struct VAR5 *VAR6) { }
static void FUN7(int VAR3) { }


static void FUN8(void)
{
int VAR7;
FUN9(VAR7) {
FUN10(FUN11(VAR8, VAR7).VAR9);
FUN11(VAR8, VAR7).VAR9 = NULL;
FUN10(FUN11(VAR8, VAR7).VAR10);
FUN11(VAR8, VAR7).VAR10 = NULL;
}
FUN3();
}