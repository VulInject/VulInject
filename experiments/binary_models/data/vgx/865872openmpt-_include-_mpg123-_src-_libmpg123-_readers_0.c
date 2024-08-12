static void FUN1(struct VAR1 *VAR2);
static void FUN2(struct VAR1 *VAR2);
static int FUN3(struct VAR1 *VAR2, ssize_t VAR3);
static void FUN4(struct VAR1 *VAR2);
static int FUN5(struct VAR1 *VAR2, const unsigned char *VAR4, ssize_t VAR3);
static VAR5 FUN6(struct VAR1 *VAR2, unsigned char *VAR6, ssize_t VAR3);
static VAR5 FUN7(struct VAR1 *VAR2, ssize_t VAR7);
static VAR5 FUN8(struct VAR1 *VAR2, ssize_t VAR7);
static void FUN9(struct VAR1 *VAR2);


static VAR5 FUN10(VAR8 *VAR9, void *VAR10, size_t VAR7)
{
ssize_t VAR11 = FUN11(&VAR9->VAR12, VAR10, VAR7);
if(VAR13) FUN12("", (long)VAR11, (long)VAR7);
return VAR11;
}