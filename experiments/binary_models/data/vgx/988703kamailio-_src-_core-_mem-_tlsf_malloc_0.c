static void FUN1(void* VAR1, size_t VAR2, int VAR3, void* VAR4)
{
(void)VAR4;
FUN2("", VAR1, VAR3 ? "" : "", (unsigned int)VAR2, FUN3(VAR1));
}