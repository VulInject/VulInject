char *FUN1(const char *VAR1) { return (char *)FUN2(VAR1); }
char *FUN3(const char *VAR1) { return (char *)FUN2(VAR1); }
int FUN4(const char *VAR2, size_t VAR3, char *VAR4, size_t VAR5) { return FUN2(VAR2, VAR3, VAR4, VAR5); }
int FUN5(const char *VAR6, int VAR7) { return FUN2(VAR6, VAR7); }
int FUN6(const char *VAR6, int VAR7) { return FUN2(VAR6, VAR7); }
void FUN7(uint32 VAR8, uint32 VAR9, uint32 VAR10,
VAR11 *VAR12, VAR11 *VAR13,
VAR11 *VAR14, VAR11 *VAR15) { FUN2(VAR8, VAR9, VAR10, VAR12, VAR13, VAR14, VAR15); }
void FUN8(VAR11 *VAR8, VAR11 *VAR9) { FUN2(VAR8, VAR9); }

void FUN9(log_subject_t VAR16, log_level_t VAR17, char *VAR18, ...) { FUN2(VAR16, VAR17, VAR18); }
void FUN10(int VAR19) { FUN2(VAR19); }
void FUN11(char *VAR20) { FUN2(VAR20); }