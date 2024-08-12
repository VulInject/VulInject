static int
FUN1(VAR1 *VAR2, VAR1 *VAR3)
{

uint64_t VAR4 = VAR2->VAR5;
uint64_t VAR6 = VAR4 + VAR2->VAR7 - 1;
uint64_t VAR8 = VAR3->VAR5;
uint64_t VAR9 = VAR8 + VAR3->VAR7 - 1;

int VAR10 = (VAR8 <= VAR6 && VAR4 <= VAR9);

if (VAR10) {
(void) fprintf(VAR11, "",
VAR3->VAR12, VAR2->VAR12);
(void) fprintf(VAR11, "",
(unsigned long long)VAR4, (unsigned long long)VAR6);
(void) fprintf(VAR11, "",
(unsigned long long)VAR8, (unsigned long long)VAR9);
}

return (VAR10);
}