static void FUN1(const char *VAR1, int VAR2, void *VAR3, void *VAR4) {
st_driver_t VAR5 = (VAR6) VAR3;

(VAR5->free)(VAR5);

free(VAR5);
}