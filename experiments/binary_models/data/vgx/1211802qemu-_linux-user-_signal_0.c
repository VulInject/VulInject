void FUN1(VAR1 *VAR2,
const VAR3 *VAR4)
{
target_sigset_t VAR5;
int VAR6;

VAR5.VAR7[0] = *VAR4;
for(VAR6 = 1;VAR6 < VAR8; VAR6++)
VAR5.VAR7[VAR6] = 0;
FUN2(VAR2, &VAR5);
}