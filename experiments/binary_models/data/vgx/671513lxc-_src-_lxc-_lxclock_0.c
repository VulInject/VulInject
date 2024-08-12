static inline void FUN1(void)
{
void *VAR1[VAR2];
size_t VAR3;
char **VAR4;

VAR3 = FUN2(VAR1, VAR2);
VAR4 = FUN3(VAR1, VAR3);


fprintf(VAR5, "", VAR3);

for (int VAR6 = 0; VAR6 < VAR3; VAR6++)
fprintf(VAR5, "", VAR4[VAR6]);

free(VAR4);
}