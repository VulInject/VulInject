void FUN1(VAR1 *VAR2, const float *VAR3, int VAR4);
void FUN2(VAR1 *VAR2, float *const *VAR3, int VAR4, int VAR5);
void FUN3(VAR1 *VAR2, float *const *VAR3, int VAR4, int VAR5);

static void FUN4(VAR6 **VAR2, const VAR6 **VAR3, int VAR4){
FUN1((VAR1*)*VAR2, (const float*)*VAR3, VAR4);
}